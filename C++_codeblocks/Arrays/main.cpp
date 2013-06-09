

#include <iostream>
using namespace std;


int printarray(int theArray[], int sizeOfArray);

int main()
{

    int arrayA[3] = {1,2,3};
    int arrayB[3] = {4,5,6};

    printarray(arrayA, 3);


    return 0;
}

int printarray(int theArray[], int sizeOfArray){

    int i;

    for(i=0; i<3; i++)  {

    cout<<theArray[i]<<endl;
                        }


                                                }
