cd `dirname $0` &&
../makefile-macosx/build.py &&

time ../makefile-macosx/omnibus -c aiguille_occupation.omnibus &&
gcc -c -Weffc++ aiguille_occupation-machine-controleAiguille.cpp &&

time ../makefile-macosx/omnibus -c aiguille.omnibus &&
gcc -c -Weffc++ aiguille-machine-controleAiguille.cpp &&

time ../makefile-macosx/omnibus -c carrefour.omnibus &&
gcc -c -Weffc++ carrefour-machine-carrefour.cpp carrefour-function-succ.cpp &&

time ../makefile-macosx/omnibus -c carrefour2.omnibus &&
gcc -c -Weffc++ carrefour2-machine-carrefour.cpp carrefour2-function-succ.cpp &&

time ../makefile-macosx/omnibus -c simple-feu.omnibus &&
gcc -c -Weffc++ simple-feu-machine-sequentiel.cpp simple-feu-function-succ.cpp &&

time ../makefile-macosx/omnibus -c simple-affectation.omnibus &&
gcc -c -Weffc++ simple-affectation-machine-sequentiel.cpp &&

time ../makefile-macosx/omnibus -c simple-boolean.omnibus &&
gcc -c -Weffc++ simple-boolean-machine-boolean.cpp
