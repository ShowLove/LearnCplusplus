#include <iostream>
#include "class1.h"


using namespace std;


// rember to put the syntax in this
//wierd spot for the const  start with :
//creating a a constructor that takes two values
// setting them equal to a a const and a regular var
class1::class1(int a, int b)
: regVar(a),
  constVar(b)
{

}

void class1::print(){

    cout << "regualr var is: " <<regVar << " const variable is : " << constVar <<endl;
}
