#include <iostream>

using namespace std;

int main()
{

    int age;
    cin >> age ;

    switch(age)
    {
    //in case this happens...do this
    case 16:
      cout<< "you can now drive" << endl;
        break;
        //break ends the swithch statement jumps out of switch loop

      case 18:
        cout << "you can now buy loto tickets" <<endl;
            break;

        //if none of these cases were true do the default

            default:
                cout << "sorry you get nothing" << endl;



    }

    return 0;
}
