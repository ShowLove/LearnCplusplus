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

player2::player2()
{
    //ctor
}

int player2::arrayCountCarier2()
{
   x=0; y=0;

    srand(time(0));

    x = (rand()%11);
    if( x == 0 ){x = x +1; }

    y = (rand()%11);
    if( y == 0 ){y = y +1; }

    arrayCount = (100-10*y)+x;

    return arrayCount;

}

void player2::wipeClean2()
{
     ofstream battleFile2;
    battleFile2.open("battleText2.txt");
    battleFile2<<" ";
}

void player2::fieldZero2()
{

//-----------------------------------------------------------------------------------------
for (j=0; j<100; j++)
 {
      Array2[j] = 0;
 }
 j=0;
 for (j=0; j<100; j++)
 {
      CopyA2[j] = 0;
 }
 j=0;
 for (j=0; j<100; j++)
 {
      CopyB2[j] = 0;
 }




//----------------------------------------------------------------------------------------
}

void player2::randomBattleField()
{
     ofstream battleFile;
     battleFile.open("battleText2.txt", ios::out | ios::app);
    if(battleFile.is_open()){cout<<"\t\nthe file is open"<<endl;}

    player2 fieldB;
    player2 possitionB;


    cout<<"N = 1\nS = 2\nE = 3\nW = 4\nNE = 5\nNW = 6\nSE = 7\nSW = 8\n";
    cout<<"enter the number that represents the dirrection you want the front of the Battle Ship to aim # = \n";

    arrayNumB = possitionB.arrayCountCarier2();
    cout<<" arrayNUm = "<<arrayNumB<<endl;

    //North
    if(arrayNumB > 80) { x = 1; }

    //South
    else if(arrayNumB < 20) { x = 2; }

    //East
    else if(arrayNumB%10 < 3) { x = 3; }

    //West
    else if(arrayNumB%10 > 7) { x = 4; }

    //NorthEast
    else if(arrayNumB > 80  &&  arrayNumB%10 < 3) {x = 5; }

    //NorthWest
    else if( arrayNumB > 80  &&  arrayNumB%10 > 7 ) {x = 6; }

    //SouthEast
    else if(arrayNumB < 20  &&  arrayNumB%10 < 3) {x = 7; }

    //SouthWest
    else if(arrayNumB < 20  &&  arrayNumB%10 > 7) {x = 8; }

    else{ x = 1; }


    if(x==1)
    {
    fieldB.fieldZero2();
    fieldB.placeCarrierN2(arrayNumB);

    battleFile<<"\n\n\n";
    }
    else if(x == 2 )
    {
        fieldB.fieldZero2();
        fieldB.placeCarrierS2(arrayNumB);

    battleFile<<"\n\n\n";
    }
    else if(x == 3 )
    {
    fieldB.fieldZero2();
    fieldB.placeCarrierE2(arrayNumB);

    battleFile<<"\n\n\n";
    }
    else if(x == 4 )
    {
    fieldB.fieldZero2();
    fieldB.placeCarrierW2(arrayNumB);

    battleFile<<"\n\n\n";
    }
    else if(x == 5 )
    {
    fieldB.fieldZero2();
    fieldB.placeCarrierNE2(arrayNumB);

    battleFile<<"\n\n\n";
    }
    else if(x == 6 )
    {
    fieldB.fieldZero2();
    fieldB.placeCarrierNW2(arrayNumB);

    battleFile<<"\n\n\n";
    }
    else if(x == 7 )
    {
    fieldB.fieldZero2();
    fieldB.placeCarrierSE2(arrayNumB);

    battleFile<<"\n\n\n";
    }
    else if(x == 8 )
    {
    fieldB.fieldZero2();
    fieldB.placeCarrierSW2(arrayNumB);

    battleFile<<"\n\n\n";
    }
}

void player2::addShip2()
{
    player2 objectAdd;

    ofstream battleFile2;
    battleFile2.open("battleText2.txt", ios::out | ios::app);
    if(battleFile2.is_open()){cout<<"\t\nthe file is open"<<endl;}

battleFile2<<"\n\n\n";


//my function goes here.
objectAdd.randomBattleField();



}

void player2::readCompareWrite2()
{
//------------------------------------------------------------------
player2 object1;
object1.fieldZero2();

     ifstream battleFile;
     battleFile.open("battleText2.txt");
     if(battleFile.is_open()){cout<<"\t\nthe file is open"<<endl;}

i =0; j=0;
for(i = 0; i<200; i++)
{
    j = i-100;
   if(i<100){battleFile>>CopyA2[i];}
   else if(i>99){battleFile>>CopyB2[j];}
}
    battleFile.close();
//-----------------------------------------------------------------


    ofstream battleFile2;
    battleFile2.open("battleText2.txt");
    i=0; j=0;


    for(i=0; i<100; i++)
    {

        if(CopyA2[i]==CopyB2[i]){battleFile2<<"0   ";              }
        else
        {
        if(CopyA2[i]>CopyB2[i]){battleFile2<<CopyA2[i]<<"   ";      }
        else if(CopyA2[i]<CopyB2[i]){battleFile2<<CopyB2[i]<<"   "; }
        }
 if( (i+1)%10 ==0 ) {battleFile2<<"\n";}
    }


    battleFile2.close();
}

int player2::errorCatch2B()
{
  //------------------------------------------------------------------
player2 object1;
object1.fieldZero2();

     ifstream battleFile;
     battleFile.open("battleText2.txt");
     if(battleFile.is_open()){cout<<"\t\nthe file is open"<<endl;}

i =0; j=0;
for(i = 0; i<200; i++)
{
    j = i-100;
   if(i<100){battleFile>>CopyA2[i];}
   else if(i>99){battleFile>>CopyB2[j];}
}
    battleFile.close();
//-----------------------------------------------------------------
x=0;
   try
    {
       for(i=0; i<100; i++)
       {
           if( (CopyA2[i] && CopyB2[i]) != 0  ) {x=1;}
       }
       if(x ==1){throw 1;}
       else {throw 0;}
    }
catch(int y)
{
    //if(y == 1){cout<<"\n\nwhat are you doing? you cant put one ship on top of another!\n";}
    //else if (y==0){cout<<"\n\n\Ships are in possition!\n";}
    return y;
}


}

void player2::recursiveFunc()
{
    player2 object1;

    object1.wipeClean2();
    object1.randomBattleField();

    i = 0;
    for(i = 0; i<4; i++)
    {
        object1.addShip2();
        object1.readCompareWrite2();


    }

  //1 = error 0 = all good
  x = object1.errorCatch2B();
  if ( x == 1 ){object1.recursiveFunc();}

}

void player2::placeCarrierN2(int ACount )
{


    ofstream battleFile;
     battleFile.open("battleText2.txt", ios::out | ios::app);
    if(battleFile.is_open()){cout<<"\t\nthe file is open"<<endl;}
   //Print the battle field1



    shipCarrier = 5;

    yAxis =10- (ACount/10);
    xAxis = ACount%10;
    if(xAxis ==0){ xAxis = 10; yAxis++;}
    cout<<"--x, y--"<<xAxis<<","<<yAxis;

//-----------------------------------------------------------------------------------------
    j=0; i=0;
   for (j=10; j>0; j--)
        {

        //i = 0 is x axis = 1
        for (i=0; i<10; i++)
            {
        differnence = j - yAxis;

        if(differnence<shipCarrier && j>=yAxis && xAxis-1==i ){battleFile<<shipCarrier<<"   ";}


        else
        battleFile << Array2[j]<< "   ";

            }
        battleFile<<endl;

        }


         battleFile.close();
//--------------------------------------------------------------------------




}

void player2::placeCarrierS2(int ACount )
{
   ofstream battleFile;
     battleFile.open("battleText2.txt", ios::out | ios::app);
    if(battleFile.is_open()){cout<<"\t\nthe file is open"<<endl;}
   //Print the battle field1
//-----------------------------------------------------------------------------------------



    shipCarrier = 4;



    yAxis =10- (ACount/10);

    xAxis = ACount%10;
    if(xAxis ==0){ xAxis = 10; yAxis++;}
    cout<<"--x, y--"<<xAxis<<","<<yAxis;


    j=0;
   for (j=10; j>0; j--)
        {

        //i = 0 is x axis = 1
        for (i=0; i<10; i++)
            {
        differnence = yAxis - j;

        if(differnence<shipCarrier && j<=yAxis && xAxis-1==i ){battleFile<<shipCarrier<<"   ";}


        else
        battleFile << Array2[j]<< "   ";

            }
        battleFile<<endl;

        }
        battleFile<<"\n\n\n"; battleFile.close();



}

void player2::placeCarrierE2(int ACount )
{
   ofstream battleFile;
     battleFile.open("battleText2.txt", ios::out | ios::app);
    if(battleFile.is_open()){cout<<"\t\nthe file is open"<<endl;}
   //Print the battle field1
//-----------------------------------------------------------------------------------------


    shipCarrier = 3;

    yAxis =10- (ACount/10);
    xAxis = ACount%10;
    if(xAxis ==0){ xAxis = 10; yAxis++;}
    cout<<"--x, y--"<<xAxis<<","<<yAxis;


    j=0; i=0;
   for (j=10; j>0; j--)
        {

        //i = 0 is x axis = 1
        for (i=1; i<11; i++)
            {
        differnence = i - xAxis;

        if(differnence<shipCarrier && i>=xAxis && yAxis==j ){battleFile<<shipCarrier<<"   ";}


        else
        battleFile << Array2[j]<< "   ";

            }
        battleFile<<endl;

        }
        battleFile<<"\n\n\n"; battleFile.close();





}

void player2::placeCarrierW2(int ACount )
{
   ofstream battleFile;
     battleFile.open("battleText2.txt", ios::out | ios::app);
    if(battleFile.is_open()){cout<<"\t\nthe file is open"<<endl;}
   //Print the battle field1
//-----------------------------------------------------------------------------------------


    shipCarrier = 3;

    yAxis =10- (ACount/10);
    xAxis = ACount%10;
    if(xAxis ==0){ xAxis = 10; yAxis++;}
    cout<<"--x, y--"<<xAxis<<","<<yAxis;


    j=0; i=0;
   for (j=10; j>0; j--)
        {

        //i = 0 is x axis = 1
        for (i=1; i<11; i++)
            {
        differnence = xAxis - i;

        if(differnence<shipCarrier && i<=xAxis && yAxis==j ){battleFile<<shipCarrier<<"   ";}


        else
        battleFile << Array2[j]<< "   ";

            }
        battleFile<<endl;

        }
        battleFile<<"\n\n\n"; battleFile.close();



}

void player2::placeCarrierNE2(int ACount )
{
    ofstream battleFile;
     battleFile.open("battleText2.txt", ios::out | ios::app);
    if(battleFile.is_open()){cout<<"\t\nthe file is open"<<endl;}
   //Print the battle field1
//-----------------------------------------------------------------------------------------


    shipCarrier = 2;

    yAxis =10- (ACount/10);
    xAxis = ACount%10;
    if(xAxis ==0){ xAxis = 10; yAxis++;}
    cout<<"--x, y--"<<xAxis<<","<<yAxis;

    difference2 = 0;
    xAxis2 = xAxis + shipCarrier;
    j=0; i=0;
   for (j=10; j>0; j--)
        {

        if(differnence<shipCarrier){ xAxis2 = xAxis2 - 1;}

        for (i=1; i<11; i++)
            {
        differnence = j - yAxis; difference2 = 1; difference2++;


        if(differnence<shipCarrier && j>=yAxis && xAxis2==i ){battleFile<<shipCarrier<<"   ";}


        else
        battleFile << Array2[j]<< "   ";

            }
        battleFile<<endl;

        }
        battleFile<<"\n\n\n"; battleFile.close();


}

void player2::placeCarrierNW2(int ACount )
{
    ofstream battleFile;
     battleFile.open("battleText2.txt", ios::out | ios::app);
    if(battleFile.is_open()){cout<<"\t\nthe file is open"<<endl;}
   //Print the battle field1
//-----------------------------------------------------------------------------------------

    shipCarrier = 2;

    yAxis =10- (ACount/10);
    xAxis = ACount%10;
    if(xAxis ==0){ xAxis = 10; yAxis++;}
    cout<<"--x, y--"<<xAxis<<","<<yAxis;


    xAxis2 = xAxis - shipCarrier;
    j=0; i=0;
   for (j=10; j>0; j--)
        {

        if(differnence<shipCarrier){ xAxis2 = xAxis2 + 1;}

        for (i=1; i<11; i++)
            {
        differnence = j - yAxis;


        if(differnence<shipCarrier && j>=yAxis && xAxis2==i ){battleFile<<shipCarrier<<"   ";}


        else
        battleFile << Array2[j]<< "   ";

            }
        battleFile<<endl;

        }
        battleFile<<"\n\n\n"; battleFile.close();



}

void player2::placeCarrierSE2(int ACount )
{
    ofstream battleFile;
    battleFile.open("battleText2.txt", ios::out | ios::app);
    if(battleFile.is_open()){cout<<"\t\nthe file is open"<<endl;}
   //Print the battle field1
//-----------------------------------------------------------------------------------------

    battleField object1;
    possition objectPossition;
    shipCarrier = objectPossition.orientationCarrier();

    yAxis =10- (ACount/10);
    xAxis = ACount%10;
    if(xAxis ==0){ xAxis = 10; yAxis++;}
    cout<<"--x, y--"<<xAxis<<","<<yAxis;


    xAxis2 = xAxis-1;
    j=0; i=0;
   for (j=10; j>0; j--)
        {
        difference2 = yAxis - j;
        if(j<=yAxis && difference2<shipCarrier){ xAxis2 = xAxis2 + 1;}

        for (i=1; i<11; i++)
            {
        differnence = j - yAxis;


       if(difference2<shipCarrier && j<=yAxis && xAxis2==i ){battleFile<<shipCarrier<<"   ";}


        else
        battleFile << Array2[j]<< "   ";

            }
        battleFile<<endl;

        }
        battleFile<<"\n\n\n"; battleFile.close();



}

void player2::placeCarrierSW2(int ACount )
{
    ofstream battleFile;
     battleFile.open("battleText2.txt", ios::out | ios::app);
    if(battleFile.is_open()){cout<<"\t\nthe file is open"<<endl;}
   //Print the battle field1
//-----------------------------------------------------------------------------------------

    battleField object1;
    possition objectPossition;
    shipCarrier = objectPossition.orientationCarrier();

    yAxis =10- (ACount/10);
    xAxis = ACount%10;
    if(xAxis ==0){ xAxis = 10; yAxis++;}
    cout<<"--x, y--"<<xAxis<<","<<yAxis;


    xAxis2 = xAxis+1;
    j=0; i=0;
   for (j=10; j>0; j--)
        {
        difference2 = yAxis - j;
        if(j<=yAxis && difference2<shipCarrier){ xAxis2 = xAxis2 - 1;}

        for (i=1; i<11; i++)
            {
        differnence = j - yAxis;


       if(difference2<shipCarrier && j<=yAxis && xAxis2==i ){battleFile<<shipCarrier<<"   ";}


        else
        battleFile << Array2[j]<< "   ";

            }
        battleFile<<endl;

        }
        battleFile<<"\n\n\n"; battleFile.close();



}


player2::~player2()
{
    //dtor
}
