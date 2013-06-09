#include <iostream>
//you need this library to do the random number generator
#include <cstdlib>
//include ctime alows us to acces our clock
#include <ctime>

using namespace std;

int main()
{

 //before we put ctime we woudl do  srand(77)
 //this would give us the same results though
 // but now we do the following
 /* "time(0)this has the acces for the seconds since "some time in the past"
 so it is constantly changing so time(0) appears random*/

  srand(time(0));
  int i;


    for (i=0; i<10; i++){

    cout << 1 + (rand()%6)<< endl;

                        }



    return 0;
}
