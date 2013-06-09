#include <iostream>
using namespace std;


// i dont know how to do class templetes
// as separate files of .h and .cpp
// for some reason i had to do it all in main

template <class T>
class classTemplate
{
    T first, second;
    public:
        classTemplate(T a,T b);

     T math();

    protected:
    private:
};

template <class T>
classTemplate<T>::classTemplate(T a, T b)
{
    first = a;
    second = b;
}

template <class T>
T classTemplate<T>::math()
{

    return first + second;

}



int main()
{

    classTemplate <int> Object1(1.222, 7);
    double z;

    z = Object1.math();

    cout << "a + b = " << z << endl;
    // our output is 8


    classTemplate <double> Object2(1.222, 7);


    z = Object2.math();

    cout << "a + b = " << z << endl;
    //our output is 8.22




    return 0;
}
