#include <iostream>
using namespace std;
#include "battleField.h"
#include <fstream>
#include "possition.h"
#include <string>
#include "debug.h"
#include "player2.h"
#include<cstdlib>
#include<ctime>

possition::possition()
{
}

int possition::arrayCountCarier()
{
   x=0; y=0;
    cout<<"\n\nplease enter your first quadrant x coordiant\n: x = ";
    cin>>x;
    cout<<"\n\nplease enter your first quadrant y coordiant\n: y = ";
    cin>>y;
    cout<<"your x, y coordinates are "<<x<<", "<<y<<"\n"<<endl;

    arrayCount = (100-10*y)+x;

    return arrayCount;

}

int possition::orientationCarrier()
{
     cout<<"please enter the orientation of your carrier: ";
    cout<<"carrier = 5, battleship = 4, frigate = 3, minesweeper = 2 ship# = ";
    cin>>NSEW;
    return NSEW;
}


//inheritance at work... and composition!
void  possition::testInharitance()
{
    possition possitionTest;

    fieldTest.fieldZero();
    fieldTest.placeCarrierN(possitionTest.arrayCountCarier());

}




possition::~possition()
{
    //dtor
}
