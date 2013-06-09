#ifndef PEOPLE_H
#define PEOPLE_H

//lets us deal with strings
#include <string>
/*we need to include the birht day header file because
aside from just regular variable we will also be storing
a birthday object*/
#include "Birthday.h"
//we add namespace aswell idexacly know why
using namespace std;

class people
{
    public:
    //notice we declared the object bo of the class Birthday
        people(string x, Birthday bo);
        //we need another function now
        void printInfo();
    private:
        string name;
        //now we want to use an object from another class in this class
        Birthday dateOfBrith;
};

#endif // PEOPLE_H
