#include <iostream>

using namespace std;

int main()
{

    int carlos[5];
    int *bp0 = &carlos[0];
    //next pointer should be further ahead in memory
    int *bp1 = &carlos[1];
    int *bp2 = &carlos[2];

//bp0 is at 0xbfea7040
    cout<< "bp0 is at " << bp0 << endl;
    //bp1 is at 0xbfea7044  four bytes furhter up in memory
    cout<< "bp1 is at " << bp1 << endl;
    //bp2 is at 0xbfea7048  four bytes furhter up in memory
    cout<< "bp2 is at " << bp2 << endl;



    bp0 += 2;
    // this moves bp0 to Oxbfea7048 where bp2 is  "it does "not" move two bytes "
    cout<< "bp0 is now at " << bp0 << endl;

    return 0;
}
