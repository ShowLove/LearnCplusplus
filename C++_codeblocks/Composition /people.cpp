#include "people.h"
#include <iostream>
using namespace std;
#include "Birthday.h"


//we are going to take an object from the birthday class and
//store it in the people class and run the program from main

//we need a member initializer list wierd syntax stuff
//dont forget ot pass in the parameters
people::people(string x, Birthday bo)
: name(x), dateOfBrith(bo)
{
    //everth person needs a name and a birhtday

}


void people::printInfo() {

cout<<name<<" was bizorn on ";
dateOfBrith.printDate();

}
