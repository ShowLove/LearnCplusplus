#include <iostream>
#include "kitty.h"

using namespace std;




int main()
{
    //declare a class and use its functions on the heap
    kitty *pGarfield = new kitty();

    pGarfield->scratch();

    //passing values on the heap.
    int *pTheInt = new int;
    *pTheInt = 10;
    //10 is the content of address pTheInt

    //when passing by address normaliy it would be damage(&pTheInt);
    //However, since pTheInt is already an address we need not the &
    pGarfield->damage(pTheInt);


    delete pGarfield;


    return 0;
}
