#include "monster.h"
#include "ninja.h"
#include "nazi.h"
#include <iostream>
using namespace std;


int main()
{

// declare objects for ninja and nazi

ninja ni;
nazi na;

//since ni/na inherited all of monsters stuff this is valid
// 1. create a monster object
// 2. have that object point to the ninja/nazi object adress

monster *monster1 = &ni;
monster *monster2 = &na;

// now when we point to strike it changes the int variable strike
// pertenant to the ninja and nazi class
// so when monster calls the function ninjastrike/nazistrike
// the program changes the strike variable independently for
// ninja and nazi

monster1 -> strike = 17;
monster2 -> strike = 62;

ni.ninjaStrike();
na.naziStrike();




    return 0;
}
