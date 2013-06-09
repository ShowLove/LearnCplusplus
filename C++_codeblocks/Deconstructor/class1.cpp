#include "class1.h"
#include <iostream>

using namespace std;

class1::class1()
{
    cout<<"i am the constructor"<<endl;
}

//this is the deconstructor
class1::~class1()
{
    //you can not give deconst.. parameters or return or overload
    cout<< "i am the deconstructor" <<endl;

}
