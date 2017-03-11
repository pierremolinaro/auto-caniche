cd `dirname $0` &&
../makefile-macosx/build.py &&

time ../makefile-macosx/omnibus -c carrefour.omnibus &&
gcc -c -Weffc++ CarrefourAvecMiseEnService.cpp succ.cpp &&

time ../makefile-macosx/omnibus -c carrefour2.omnibus &&
gcc -c -Weffc++ Carrefour.cpp succ.cpp &&

time ../makefile-macosx/omnibus -c simple-feu.omnibus &&
gcc -c -Weffc++ SimpleFeuSequentiel.cpp succ.cpp &&

time ../makefile-macosx/omnibus -c simple-affectation.omnibus &&
gcc -c -Weffc++ SimpleAffectation.cpp
