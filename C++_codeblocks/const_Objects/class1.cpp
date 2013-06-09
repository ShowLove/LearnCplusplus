#include "class1.h"
#include <iostream>

using namespace std;

class1::class1()
{

}

void class1::printShiz(){
    cout << "i am a regular function" << endl;
    }

    //creating a constant function
    void class1::printShiz2() const{
        cout<< "i am a coOl moFoOiNG const funct" <<endl;

    }
