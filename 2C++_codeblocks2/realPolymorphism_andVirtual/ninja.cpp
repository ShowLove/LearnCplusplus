#include "Enemy .h"
#include "ninja.h"
#include "monster.h"
#include <iostream>
using namespace std;

ninja::ninja()
{
    //ctor
}

void Enemy::print()
{

    cout<<"the Ninja has struck -" << attackPower << endl;

}
