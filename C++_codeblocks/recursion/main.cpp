#include <iostream>

using namespace std;

int factorialfinder(int x){
/*We must build a base case or
else the function will never end*/

    if(x == 1)
        return 1;
        //now that our base case is built we do...
        else{ return x*factorialfinder(x-1);}

//my gues is that the result of the else is stored in x or something
                            }




int main()
{
    cout << factorialfinder(5)  << endl;




    return 0;
}
