#include <iostream>
using namespace std;


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


    return 0;
}
