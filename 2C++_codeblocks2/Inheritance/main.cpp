#include <iostream>
#include "Mother.h"
#include "Son.h"
#include <string>
using std::string;

using namespace std;

int main()
{
    string LastName;



    Mother Says;
    Son SonSays;

  cin >> LastName ;
  cout << LastName << endl;

    cout << "Mother's";
    Says.SayLastName(LastName);
    cout << "Son's";
    SonSays.SayLastName(LastName);

    return 0;
}
