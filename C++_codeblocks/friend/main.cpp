#include <iostream>

using namespace std;

class StankFist{
    public:

    //this is a constructor
        StankFist() { stinkyVar = 0;}
    private:
        int stinkyVar;

     /*Now stinkysFriend function is a
     friend of the class StankFist, meaning it can
     use stuff in the class. we are passing as a parameter the
     following...  declare teh class Stankfist and adding the
     object sfo to it. "notice we need the & sign. */
      friend  void stinkysFriend (StankFist &sfo);

};

//now this function can access stuff from the Stankfist class
void stinkysFriend(StankFist &sfo){
        sfo.stinkyVar = 99;
        cout << sfo.stinkyVar << endl;
}

int main()
{
    StankFist bob;
    stinkysFriend(bob);


    return 0;
}
