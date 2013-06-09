#include <iostream>
//using a function to fill a struct


using namespace std;

struct carlos{
int age;
double height;

};

carlos inputiInfo();
void printcarlos(const carlos &info);

int main()
{
    carlos info;

    info = inputiInfo();

   cout<< "age: "<<info.age<<" height: "<<info.height<<endl;


    return 0;
}


carlos inputiInfo()   {

    carlos infoFromFunc ;

    infoFromFunc.age = 27;
    infoFromFunc.height = 6.2;

    return infoFromFunc;
                }




