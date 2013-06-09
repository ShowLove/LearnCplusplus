#include <iostream>
using namespace std;
#include "battleField.h"
#include <fstream>
#include "possition.h"
#include <string>
#include "debug.h"
#include "player2.h"
#include<cstdlib>
#include<ctime>

int main()
{
    int i, arrayNum, arrayNum2, starNum, retValue, shipValue, NSEW, retValue2;
    int competence;


battleField field1;
possition possition1;
player2 playerTwo;



//functions that matter
//---------------------------------------
//field1.placeBattleship();
//field1.addShip();
// 1 = error 0 = all good
//retValue2 = field1.errorCatch2();
//field1.readCompareWrite();
//field1.wipeClean();
//--------------------------------------



playerTwo.recursiveFunc();




/* cout<<"Alright Comander, you have 4 attempts to get your ships in order.\n";
field1.wipeClean();
field1.placeBattleship();

i = 0;
for(i=0; i<4; i++)
{
field1.addShip();
//1 = error 0 = all good
retValue2 = field1.errorCatch2();
if (retValue2 == 1){field1.wipeClean(); cout<<"you just lost all your ships fool!\n\n";}
else if (retValue2==0){field1.readCompareWrite();}
} */





    return 0;
}
