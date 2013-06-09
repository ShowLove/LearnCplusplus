#include "Enemy .h"
#include "ninja.h"
#include "monster.h"
#include <iostream>
using namespace std;

int main()
{

ninja n;
monster m;
Enemy *Enemy1 = &n;
Enemy *Enemy2 = &m;

Enemy1 -> attackPower = 17;
Enemy2 -> attackPower = 62;

n.print();


    return 0;
}
