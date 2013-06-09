#include "Hannah.h"
#include <iostream>

using namespace std;


// we are passing h into the variable num
//like we mentioned before
Hannah::Hannah(int num)
: h(num)
{

}


void Hannah::printCrap() {
    cout << "h=" << h << endl;
    cout << "this ->h= " << this->h << endl;
    cout << "(*this).h=" << (*this).h << endl;

}


/*In C++ when ever you use the word this its actually a
key word that identifies a special type of pointer. "this"
stores the address of the current object that your working
with. */
