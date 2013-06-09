#include <iostream>

using namespace std;

int main()
{

   char c;
   double x=8;
   //size of tells you the size of the int or char
   cout<< sizeof(x) << endl;

//prints the size of the array
   double carlos[10];
   cout<< sizeof(carlos) << endl;

   // to see how many elements are in an array
   cout<< sizeof(carlos)/sizeof(carlos[0]) << endl;




    return 0;
}
