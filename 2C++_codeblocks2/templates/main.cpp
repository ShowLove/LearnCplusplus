#include <iostream>
using namespace std;


template <class carlos>
carlos add(carlos a, carlos b)
{

    return a + b;

}



int main()
{

    int x,y,z;
    x =7; y = 10;
    z = add(x,y);
    cout<<"x + y ="<<z<<endl;
    //output 17

    double i,j,k;
    i=10.777; j=17.2345;
    k = add(i,j);
    cout<<"x + y ="<<k<<endl;
    //output 28.0115


    return 0;
}
