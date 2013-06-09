#include <iostream>
using namespace std;
#include "battleField.h"
#include <fstream>
#include "possition.h"
#include <string>
#include "debug.h"

debug::debug()
{
    //ctor
}

void debug::debugger()
{
    xAxis = 2; yAxis = 2;

     difference2 = 0;
     xAxis2 = xAxis + 6;
    j=0; i=0;
   for (j=10; j>0; j--)
        {

        cout<<endl;
        if(differnence<5)
       { xAxis2 = xAxis2 - 1;}

        for (i=1; i<11; i++)
            {
        differnence = j - yAxis;// difference2 = 1; difference2++;



        //  if(differnence<5 && j>=yAxis && xAxis==i+xAxis2 ){cout<<"X | ";}

        cout<<xAxis2;

       // else
        //cout << "0 | ";

            }
        }
}
