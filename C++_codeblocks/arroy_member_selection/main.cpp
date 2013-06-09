#include <iostream>
#include "class1.h"

using namespace std;

int main()
{
    class1 carlosObject;

// this is one way to access the class1 class
    carlosObject.printCrap();

//now we will use a pointer
//now we have created a pointer that points to an object
class1 *classpointer = &carlosObject;

//classpointer.printCrap(); <-- this is wrong
classpointer->printCrap();


    return 0;
}
