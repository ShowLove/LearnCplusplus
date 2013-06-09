#include <iostream>
#include "kitty.h"
using namespace std;

kitty::kitty()
{
    cout<<"i am creating a kitty\n\n";
}

void kitty::scratch()
{
    cout<<"\tkitty scratch!\n"<<endl;
}

//the addres pTheInt is int the contents of x
//therefore in order to print 10 we need
//to dereference it in the print statement
int kitty::damage(int *x)
{
//note the dereference *x means the contents of the address pTheInt
    cout<<"\t -"<< *x <<" life\n"<<endl;
}

//this will not work without freeing space
kitty::~kitty()
{
    cout<<"kitty destroyed";
}
