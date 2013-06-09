#include "monster.h"
#include "ninja.h"
#include "nazi.h"
#include <iostream>
using namespace std;

monster::monster()
{
    //ctor
}

void monster::ninjaStrike()
{
   cout<< "Ninja choOP! -" << strike << endl;

}


void monster::naziStrike()
{
    cout << "Nazi garbage -" << strike << endl;

}
