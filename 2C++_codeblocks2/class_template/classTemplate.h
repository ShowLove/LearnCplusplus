#ifndef CLASSTEMPLATE_H
#define CLASSTEMPLATE_H

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

#endif // CLASSTEMPLATE_H

#include <iostream>
using namespace std;
#include "classTemplate.h"

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

