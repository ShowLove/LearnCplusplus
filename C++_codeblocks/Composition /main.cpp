#include <iostream>
using namespace std;
#include "Birthday.h"
#include "people.h"



//a class can also have an object of another class
int main()
{
    // Nocitce we did not use bo we used Birthday to
    //create the birthObj class
    Birthday birthObj(12,28,1986);
    people Carlos("Carlos the King", birthObj);
    Carlos.printInfo();


    return 0;
}
