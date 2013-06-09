#include <iostream>

using namespace std;

int passByValue(int x);
int passByReference(int *x);

int main()
{

    int betty = 12;
    int sandy = 12;

    passByValue(betty);
    passByReference(&sandy);

    cout<<betty<<endl;
    cout<<sandy<<endl;


    return 0;
}

int passByValue(int x)   {
    x = 99;
                    }

int passByReference(int *x)       {
    *x = 32;
                        }
