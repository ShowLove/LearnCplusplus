#include <iostream>
using namespace std;
#include "enemy.h"
#include "ninja.h"
#include "monster.h"

/* I think the use of this method of doing this is to use the
same function name to do slightly different things */


int main()
{

   ninja n;
   monster m;
   enemy *enemy1 = &n;
   enemy *enemy2 = &m;

// if when declaring you dont put the virtual in front of enemy.attack
// then it will print "the enemy has struck" instead of the ninja/monster
// the program wont run using n -> enemy1 : idk why

    enemy1-> attack();
   enemy2 -> attack();


    return 0;
}
