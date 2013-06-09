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

battleField::battleField()
{

}

void battleField::placeBattleship()
{
     ofstream battleFile;
     battleFile.open("battleText.txt", ios::out | ios::app);
    if(battleFile.is_open()){cout<<"\t\nthe file is open"<<endl;}

    battleField fieldA;
    possition possitionA;

    cout<<"Time to place a ship\n\nthese are the rules listen up\n";
    cout<<"x, y coordinates represent the back of the Battle Ship";
    cout<<" you also need to choose the dirrection you want the front of the Battle Ship to aim\n";
    cout<<"N = 1\nS = 2\nE = 3\nW = 4\nNE = 5\nNW = 6\nSE = 7\nSW = 8\n";
    cout<<"enter the number that represents the dirrection you want the front of the Battle Ship to aim # = \n";
    cin>>x;
    if(x==1)
    {
    fieldA.fieldZero();

    arrayNumB = possitionA.arrayCountCarier();
    cout<<" arrayNUm = "<<arrayNumB<<endl;

    fieldA.placeCarrierN(arrayNumB);

    battleFile<<"\n\n\n";
    }
    else if(x == 2 )
    {
        fieldA.fieldZero();

    arrayNumB = possitionA.arrayCountCarier();
    cout<<" arrayNUm = "<<arrayNumB<<endl;

    fieldA.placeCarrierS(arrayNumB);
    battleFile<<"\n\n\n";
    }
    else if(x == 3 )
    {
        fieldA.fieldZero();

    arrayNumB = possitionA.arrayCountCarier();
    cout<<" arrayNUm = "<<arrayNumB<<endl;

    fieldA.placeCarrierE(arrayNumB);
    battleFile<<"\n\n\n";
    }
    else if(x == 4 )
    {
        fieldA.fieldZero();

    arrayNumB = possitionA.arrayCountCarier();
    cout<<" arrayNUm = "<<arrayNumB<<endl;

    fieldA.placeCarrierW(arrayNumB);
    battleFile<<"\n\n\n";
    }
    else if(x == 5 )
    {
        fieldA.fieldZero();

    arrayNumB = possitionA.arrayCountCarier();
    cout<<" arrayNUm = "<<arrayNumB<<endl;

    fieldA.placeCarrierNE(arrayNumB);
    battleFile<<"\n\n\n";
    }
    else if(x == 6 )
    {
        fieldA.fieldZero();

    arrayNumB = possitionA.arrayCountCarier();
    cout<<" arrayNUm = "<<arrayNumB<<endl;

    fieldA.placeCarrierNW(arrayNumB);
    battleFile<<"\n\n\n";
    }
    else if(x == 7 )
    {
        fieldA.fieldZero();

    arrayNumB = possitionA.arrayCountCarier();
    cout<<" arrayNUm = "<<arrayNumB<<endl;

    fieldA.placeCarrierSE(arrayNumB);
    battleFile<<"\n\n\n";
    }
    else if(x == 8 )
    {
        fieldA.fieldZero();

    arrayNumB = possitionA.arrayCountCarier();
    cout<<" arrayNUm = "<<arrayNumB<<endl;

    fieldA.placeCarrierSW(arrayNumB);
    battleFile<<"\n\n\n";
    }
}

void battleField::addShip()
{
    battleField objectAdd;

    ofstream battleFile2;
    battleFile2.open("battleText.txt", ios::out | ios::app);
    if(battleFile2.is_open()){cout<<"\t\nthe file is open"<<endl;}

battleFile2<<"\n\n\n";


//my function goes here.
objectAdd.placeBattleship();



}

void battleField::wipeClean()
{
     ofstream battleFile2;
    battleFile2.open("battleText.txt");
    battleFile2<<" ";
}

void battleField::readCompareWrite()
{
//------------------------------------------------------------------
battleField object1;
object1.fieldZero();

     ifstream battleFile;
     battleFile.open("battleText.txt");
     if(battleFile.is_open()){cout<<"\t\nthe file is open"<<endl;}

i =0; j=0;
for(i = 0; i<200; i++)
{
    j = i-100;
   if(i<100){battleFile>>CopyA[i];}
   else if(i>99){battleFile>>CopyB[j];}
}
    battleFile.close();
//-----------------------------------------------------------------


    ofstream battleFile2;
    battleFile2.open("battleText.txt");
    i=0; j=0;


    for(i=0; i<100; i++)
    {

        if(CopyA[i]==CopyB[i]){battleFile2<<"0   ";              }
        else
        {
        if(CopyA[i]>CopyB[i]){battleFile2<<CopyA[i]<<"   ";      }
        else if(CopyA[i]<CopyB[i]){battleFile2<<CopyB[i]<<"   "; }
        }
 if( (i+1)%10 ==0 ) {battleFile2<<"\n";}
    }


    battleFile2.close();
}

int battleField::errorCatch2()
{
  //------------------------------------------------------------------
battleField object1;
object1.fieldZero();

     ifstream battleFile;
     battleFile.open("battleText.txt");
     if(battleFile.is_open()){cout<<"\t\nthe file is open"<<endl;}

i =0; j=0;
for(i = 0; i<200; i++)
{
    j = i-100;
   if(i<100){battleFile>>CopyA[i];}
   else if(i>99){battleFile>>CopyB[j];}
}
    battleFile.close();
//-----------------------------------------------------------------
x=0;
   try
    {
       for(i=0; i<100; i++)
       {
           if( (CopyA[i] && CopyB[i]) != 0  ) {x=1;}
       }
       if(x ==1){throw 1;}
       else {throw 0;}
    }
catch(int y)
{
    if(y == 1){cout<<"\n\nwhat are you doing? you cant put one ship on top of another!\n";}
    else if (y==0){cout<<"\n\n\Ships are in possition!\n";}
    return y;
}


}

int battleField::errorCatch(int shipValue)
{
    battleField object1;
    stars = object1.numStars();
    try
        {
            if(stars<shipValue){throw 0;}
            else if(stars ==  shipValue){throw 1;}
            else{throw 1;}
            //if stars > shipValue then we on 2nd run
        }
    catch(int x)
    {
        cout<<"/n/n/t 0 = placement error, 1 = all Good!, 2 = wtf?  your # is = "<<x<<endl;
        return x;
    }
}


int battleField::numStars()
{
    ifstream battleShip;
    battleShip.open("battleText.txt");
    if(battleShip.is_open()){cout<<"file is open\n";}

    i=0; stars=0;
    while(battleShip>>i)
    {


        // had to do this to fix a bug was reading in wierd numbers
        //when program works smoothly all you need is i==0
        if(i == 0 || i-10>10 || i+10<0 || i==1){stars = stars + 0;}
        else { stars = stars + 1 ;}

    }



    battleShip.close();
    return stars;
}

void battleField::copyText()
{
       ifstream battleFile;
     battleFile.open("battleText.txt");
    if(battleFile.is_open()){cout<<"\t\nthe file is open"<<endl;}
//------------------------------------------------------------------
i =0; j=0;
for(i = 0; i<100; i++)
{
    battleFile>>Copy[i];
}
    battleFile.close();
    ofstream battleFile2;
    battleFile2.open("battleText.txt", ios::out | ios::app);

    if(battleFile2.is_open()){cout<<"\t\nthe file is open"<<endl;}





    battleFile2<<"\n\n";

    i=0;
for(i=0; i<100; i++)
{

        battleFile2<<Copy[i];


    if((i+1)%10 == 0){battleFile2<<endl; }
}


 battleFile2.close();


}

void battleField::fieldZero()
{

//-----------------------------------------------------------------------------------------
for (j=0; j<100; j++)
 {
      Array[j] = 0;
 }
 j=0;
 for (j=0; j<100; j++)
 {
      CopyA[j] = 0;
 }
 j=0;
 for (j=0; j<100; j++)
 {
      CopyB[j] = 0;
 }




//----------------------------------------------------------------------------------------
}

void battleField::printField()
{

     ofstream battleFile;
     battleFile.open("battleText.txt");
    if(battleFile.is_open()){cout<<"\t\nthe file is open"<<endl;}
   //Print the battle field1
//-----------------------------------------------------------------------------------------
for (j=0; j<10; j++)
        {

        for (i=0; i<10; i++)
            {
       battleFile << Array[j]<< "   ";

            }
        battleFile<<endl;

        }

//----------------------------------------------------------------------------------------

    battleFile.close();

cout<<"\t\n Lets Do that thang!"<<endl;

}

void battleField::printCopy()
{

    cout<<"\n\n\n";

  i=0;
for(i=0; i<100; i++)
{

        cout<<Copy[i];


    if((i+1)%10 == 0){cout<<endl; }
}

}

void battleField::printArray()
{

    cout<<"\n\n\n";

  i=0;
for(i=0; i<100; i++)
{

        cout<<Array[i];


    if((i+1)%10 == 0){cout<<endl; }
}

}

void battleField::placeCarrierN(int ACount )
{


    ofstream battleFile;
     battleFile.open("battleText.txt", ios::out | ios::app);
    if(battleFile.is_open()){cout<<"\t\nthe file is open"<<endl;}
   //Print the battle field1


    battleField object1;
    possition objectPossition;
    shipCarrier = objectPossition.orientationCarrier();

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
        battleFile << Array[j]<< "   ";

            }
        battleFile<<endl;

        }


         battleFile.close();
//--------------------------------------------------------------------------

starNumbers = object1.numStars();
retValues = object1.errorCatch(shipCarrier);
cout<<"\nthe number of stars in txt file is: "<<starNumbers;
cout<<"\nError number returned is ="<<retValues<<endl;
//--------------------------------------------------------------------------
if(retValues == 1){cout<<"Your Carrier Batlle ship is ready for War! \n";}
if(retValues == 2){cout<<"\n Something is seriously wrong!\n";}
if(retValues == 0 || retValues == 2)
{
    cout<<"\n\n\t Dont be an incompetent fool, place your ships correctly!\n\n";

    //put the playing field into .txt file

object1.fieldZero();
object1.printField();


//input the array number and the orientation
arrayNumB = objectPossition.arrayCountCarier();
cout<<" arrayNUm = "<<arrayNumB<<endl;
NSEWB = objectPossition.orientationCarrier();
cout<<" Your Orientation number is "<<NSEWB<<endl;

object1.placeCarrierN(arrayNumB );

}

//--------------------------------------------------------------------------

}

void battleField::placeCarrierS(int ACount )
{
   ofstream battleFile;
     battleFile.open("battleText.txt", ios::out | ios::app);
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


    j=0;
   for (j=10; j>0; j--)
        {

        //i = 0 is x axis = 1
        for (i=0; i<10; i++)
            {
        differnence = yAxis - j;

        if(differnence<shipCarrier && j<=yAxis && xAxis-1==i ){battleFile<<shipCarrier<<"   ";}


        else
        battleFile << Array[j]<< "   ";

            }
        battleFile<<endl;

        }
        battleFile<<"\n\n\n"; battleFile.close();

        //--------------------------------------------------------------------------

starNumbers = object1.numStars();
retValues = object1.errorCatch(shipCarrier);
cout<<"\nthe number of stars in txt file is: "<<starNumbers;
cout<<"\nError number returned is ="<<retValues<<endl;
//--------------------------------------------------------------------------
if(retValues == 1){cout<<"Your Carrier Batlle ship is ready for War! \n";}
if(retValues == 2){cout<<"\n Something is seriously wrong!\n";}
if(retValues == 0 || retValues == 2)
{
    cout<<"\n\n\t Dont be an incompetent fool, place your ships correctly!\n\n";

    //put the playing field into .txt file

object1.fieldZero();
object1.printField();


//input the array number and the orientation
arrayNumB = objectPossition.arrayCountCarier();
cout<<" arrayNUm = "<<arrayNumB<<endl;
NSEWB = objectPossition.orientationCarrier();
cout<<" Your Orientation number is "<<NSEWB<<endl;

object1.placeCarrierS(arrayNumB );

}

//--------------------------------------------------------------------------

}

void battleField::placeCarrierE(int ACount )
{
   ofstream battleFile;
     battleFile.open("battleText.txt", ios::out | ios::app);
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


    j=0; i=0;
   for (j=10; j>0; j--)
        {

        //i = 0 is x axis = 1
        for (i=1; i<11; i++)
            {
        differnence = i - xAxis;

        if(differnence<shipCarrier && i>=xAxis && yAxis==j ){battleFile<<shipCarrier<<"   ";}


        else
        battleFile << Array[j]<< "   ";

            }
        battleFile<<endl;

        }
        battleFile<<"\n\n\n"; battleFile.close();



starNumbers = object1.numStars();
retValues = object1.errorCatch(shipCarrier);
cout<<"\nthe number of stars in txt file is: "<<starNumbers;
cout<<"\nError number returned is ="<<retValues<<endl;
//--------------------------------------------------------------------------
if(retValues == 1){cout<<"Your Carrier Batlle ship is ready for War! \n";}
if(retValues == 2){cout<<"\n Something is seriously wrong!\n";}
if(retValues == 0 || retValues == 2)
{
    cout<<"\n\n\t Dont be an incompetent fool, place your ships correctly!\n\n";

    //put the playing field into .txt file

object1.fieldZero();
object1.printField();


//input the array number and the orientation
arrayNumB = objectPossition.arrayCountCarier();
cout<<" arrayNUm = "<<arrayNumB<<endl;
NSEWB = objectPossition.orientationCarrier();
cout<<" Your Orientation number is "<<NSEWB<<endl;

object1.placeCarrierE(arrayNumB );

}

//--------------------------------------------------------------------------

}

void battleField::placeCarrierW(int ACount )
{
   ofstream battleFile;
     battleFile.open("battleText.txt", ios::out | ios::app);
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


    j=0; i=0;
   for (j=10; j>0; j--)
        {

        //i = 0 is x axis = 1
        for (i=1; i<11; i++)
            {
        differnence = xAxis - i;

        if(differnence<shipCarrier && i<=xAxis && yAxis==j ){battleFile<<shipCarrier<<"   ";}


        else
        battleFile << Array[j]<< "   ";

            }
        battleFile<<endl;

        }
        battleFile<<"\n\n\n"; battleFile.close();

        //------------------------------------------------------------------------


starNumbers = object1.numStars();
retValues = object1.errorCatch(shipCarrier);
cout<<"\nthe number of stars in txt file is: "<<starNumbers;
cout<<"\nError number returned is ="<<retValues<<endl;
//--------------------------------------------------------------------------
if(retValues == 1){cout<<"Your Carrier Batlle ship is ready for War! \n";}
if(retValues == 2){cout<<"\n Something is seriously wrong!\n";}
if(retValues == 0 || retValues == 2)
{
    cout<<"\n\n\t Dont be an incompetent fool, place your ships correctly!\n\n";

    //put the playing field into .txt file

object1.fieldZero();
object1.printField();


//input the array number and the orientation
arrayNumB = objectPossition.arrayCountCarier();
cout<<" arrayNUm = "<<arrayNumB<<endl;
NSEWB = objectPossition.orientationCarrier();
cout<<" Your Orientation number is "<<NSEWB<<endl;

object1.placeCarrierW(arrayNumB );

}

//--------------------------------------------------------------------------

}

void battleField::placeCarrierNE(int ACount )
{
    ofstream battleFile;
     battleFile.open("battleText.txt", ios::out | ios::app);
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
        battleFile << Array[j]<< "   ";

            }
        battleFile<<endl;

        }
        battleFile<<"\n\n\n"; battleFile.close();

        //------------------------------------------------------------------------


starNumbers = object1.numStars();
retValues = object1.errorCatch(shipCarrier);
cout<<"\nthe number of stars in txt file is: "<<starNumbers;
cout<<"\nError number returned is ="<<retValues<<endl;
//--------------------------------------------------------------------------
if(retValues == 1){cout<<"Your Carrier Batlle ship is ready for War! \n";}
if(retValues == 2){cout<<"\n Something is seriously wrong!\n";}
if(retValues == 0 || retValues == 2)
{
    cout<<"\n\n\t Dont be an incompetent fool, place your ships correctly!\n\n";

    //put the playing field into .txt file

object1.fieldZero();
object1.printField();


//input the array number and the orientation
arrayNumB = objectPossition.arrayCountCarier();
cout<<" arrayNUm = "<<arrayNumB<<endl;
NSEWB = objectPossition.orientationCarrier();
cout<<" Your Orientation number is "<<NSEWB<<endl;

object1.placeCarrierNE(arrayNumB );

}

//--------------------------------------------------------------------------

}

void battleField::placeCarrierNW(int ACount )
{
    ofstream battleFile;
     battleFile.open("battleText.txt", ios::out | ios::app);
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
        battleFile << Array[j]<< "   ";

            }
        battleFile<<endl;

        }
        battleFile<<"\n\n\n"; battleFile.close();

        //------------------------------------------------------------------------


starNumbers = object1.numStars();
retValues = object1.errorCatch(shipCarrier);
cout<<"\nthe number of stars in txt file is: "<<starNumbers;
cout<<"\nError number returned is ="<<retValues<<endl;
//--------------------------------------------------------------------------
if(retValues == 1){cout<<"Your Carrier Batlle ship is ready for War! \n";}
if(retValues == 2){cout<<"\n Something is seriously wrong!\n";}
if(retValues == 0 || retValues == 2)
{
    cout<<"\n\n\t Dont be an incompetent fool, place your ships correctly!\n\n";

    //put the playing field into .txt file

object1.fieldZero();
object1.printField();


//input the array number and the orientation
arrayNumB = objectPossition.arrayCountCarier();
cout<<" arrayNUm = "<<arrayNumB<<endl;
NSEWB = objectPossition.orientationCarrier();
cout<<" Your Orientation number is "<<NSEWB<<endl;

object1.placeCarrierNW(arrayNumB );

}

//--------------------------------------------------------------------------

}

void battleField::placeCarrierSE(int ACount )
{
    ofstream battleFile;
    battleFile.open("battleText.txt", ios::out | ios::app);
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
        battleFile << Array[j]<< "   ";

            }
        battleFile<<endl;

        }
        battleFile<<"\n\n\n"; battleFile.close();

        //------------------------------------------------------------------------


starNumbers = object1.numStars();
retValues = object1.errorCatch(shipCarrier);
cout<<"\nthe number of stars in txt file is: "<<starNumbers;
cout<<"\nError number returned is ="<<retValues<<endl;
//--------------------------------------------------------------------------
if(retValues == 1){cout<<"Your Carrier Batlle ship is ready for War! \n";}
if(retValues == 2){cout<<"\n Something is seriously wrong!\n";}
if(retValues == 0 || retValues == 2)
{
    cout<<"\n\n\t Dont be an incompetent fool, place your ships correctly!\n\n";

    //put the playing field into .txt file

object1.fieldZero();
object1.printField();


//input the array number and the orientation
arrayNumB = objectPossition.arrayCountCarier();
cout<<" arrayNUm = "<<arrayNumB<<endl;
NSEWB = objectPossition.orientationCarrier();
cout<<" Your Orientation number is "<<NSEWB<<endl;

object1.placeCarrierSE(arrayNumB );

}

//--------------------------------------------------------------------------

}

void battleField::placeCarrierSW(int ACount )
{
    ofstream battleFile;
     battleFile.open("battleText.txt", ios::out | ios::app);
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
        battleFile << Array[j]<< "   ";

            }
        battleFile<<endl;

        }
        battleFile<<"\n\n\n"; battleFile.close();

        //------------------------------------------------------------------------


starNumbers = object1.numStars();
retValues = object1.errorCatch(shipCarrier);
cout<<"\nthe number of stars in txt file is: "<<starNumbers;
cout<<"\nError number returned is ="<<retValues<<endl;
//--------------------------------------------------------------------------
if(retValues == 1){cout<<"Your Carrier Batlle ship is ready for War! \n";}
if(retValues == 2){cout<<"\n Something is seriously wrong!\n";}
if(retValues == 0 || retValues == 2)
{
    cout<<"\n\n\t Dont be an incompetent fool, place your ships correctly!\n\n";

    //put the playing field into .txt file

object1.fieldZero();
object1.printField();


//input the array number and the orientation
arrayNumB = objectPossition.arrayCountCarier();
cout<<" arrayNUm = "<<arrayNumB<<endl;
NSEWB = objectPossition.orientationCarrier();
cout<<" Your Orientation number is "<<NSEWB<<endl;

object1.placeCarrierSW(arrayNumB );

}

//--------------------------------------------------------------------------

}

battleField::~battleField()
{
    cout<< " it worked " << endl;
}
