#include "class1.h"
#include <iostream>

using namespace std;

int main()
{
    // anything const is unable to be modified
  const int x = 3;
//   x = 5;  <-- if i use this i will get an error
   cout << x << endl;

   //regular function
   class1 salObj;
   salObj.printShiz();


   //constant objects need constant functions
//constant object sytax

const class1 constObj;
//constObj.printShiz(); <-- this would give an error because the function is not constant
constObj.printShiz2();


    return 0;
}
