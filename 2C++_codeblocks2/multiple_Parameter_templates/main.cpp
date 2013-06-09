#include <iostream>
using namespace std;

template <class FIRST,class SECOND>

FIRST add(FIRST a, SECOND b)
{

    return a + b;
}


int main()
{
    int x;
    double y,z;
    x = 10;
    y = 10.222;

    z = add(x,y);

    cout<<"x+y = "<<z<<endl;
    // since we entered the int first our output is 20;


    z = add(y,x);
    cout<<"x+y = "<<z<<endl;
    // now, sice we bput the double first output is 20.222;

    return 0;
}
