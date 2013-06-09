#include "Enemy .h"
#include "ninja.h"
#include "monster.h"
#include <iostream>
using namespace std;

monster::monster()
{
    //ctor
}


void Enemy::print()
{

    cout<<"the Monster has struck -" << attackPower << endl;

}
