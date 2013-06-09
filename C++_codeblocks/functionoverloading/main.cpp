//function overloading
#include <iostream>

using namespace std;

// void printnumber(int x) would take the int and cut the float
//we resulve this issue with funcitonoverlaoding

    void printnumber(int x){
        cout << "i am printing an integer " << x << endl;

    }

    void printnumber(float x) {
        cout << "i am printing a float " << x << endl;
    }

int main()
{

    int a = 54;
    float b = 77.758459;

    printnumber(a);
    printnumber(b);


    return 0;
}
