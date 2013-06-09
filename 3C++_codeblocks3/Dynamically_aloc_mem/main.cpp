#include <iostream>

using namespace std;

int main()
{
    int i;
    //Dynamically allocate single variables

    int *pointerValue = new int; //dynamically allocate an integer
    *pointerValue = 7; // the contents of the value pointed to has the value 7

    cout<< "the contents of the value that pointerValue points have a value of: " << *pointerValue << endl;
    // outputs 7



    //dynamically allocating arrays /////////////////////////////////////////////////////////////////

    int arraySize = 12;
    int *pointerValue2 = new int[arraySize]; //sytax for dynamically alocating an array of size x
    //remember an array is simply a specefied space in memory with a pointer pointing to the begining of it
    pointerValue2[4] = 2;   //position 4 of the array now has a value of 2

    //now i will fill the array with values 1-12 and print them out
    for (i=0; i<12; i++)
    {
        pointerValue2[i] = i+1;

    }

    cout<<"the array values are: ";

    for (i=0; i<12; i++)
    {
       cout << " ,"<<pointerValue2[i];

    }

    cout<<"\n";

    //prints out 1,2...12

    // before i could not make the size the array a variable i had to declare it  const but now i can

    int arraySize3; // i did 3 to stay consistent
    cout<<"Enter the number of elements you want your Array to have ";
    cin >> arraySize3; cout<<endl;
    int *pointerValue3 = new int[arraySize3]; //sytax for dynamically alocating an array of size x

        //now i will fill the array with values 1-x values and print them out
    for (i=0; i<arraySize3; i++)
    {
        pointerValue3[i] = i+1;

    }

    cout<<"the array values are: ";

    for (i=0; i<arraySize3; i++)
    {
       cout << " ,"<<pointerValue3[i];

    }
    // if you input 15 output will be 1, 2, 3, ...15



    cout<<endl;

    //now i must explicitly tell the computer to free the memory for space
    delete pointerValue;
    pointerValue = 0;

    delete pointerValue2;
    pointerValue2 = 0;

    delete pointerValue3;
    pointerValue3 = 0;


    return 0;
}
