#include <iostream>

using namespace std;

int main()
{

    try
        {
            int sonAge = 27;
            int fatherAge = 17;
            if(sonAge>fatherAge)
                {
                    throw 99;
                }



        }
        catch(int x)
            {

            cout<<"the Son's age cannot be larger than the Father's age Error: #"<< x << endl;

            }



    return 0;
}
