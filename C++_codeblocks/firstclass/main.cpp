#include <iostream>

using namespace std;

class Firstclass{
    public:
            void coolsaying(){
                cout << "what u say bout my Moma FoOl >:\  \n";
                cout << "lol just kidding im about to use an object son check this out  \n";
            }

            int returnsum(){
                int a, b, c, d, sum;
                    cout <<"this program prints the sum";
                    cout <<"of 7,7,a and b\n";
                    cout <<"please enter variable a \n";
                    cin >>a;
                    cout <<"\n";
                    cout <<"please enter variable b\n";
                    cin >>b;
                    cout <<"\n";
                    c = 7;
                    d = 7;
                    sum = a+b+c+d;
                    return sum;
            }

};

int main()
{
    int x;
    //declare object carlosclass this is used in place of Firstclass
    //now you can call carlosclass to find anything in Firstclass
    Firstclass carlosclass;

//called a funciton in Firstclass   "coolsaying"
   carlosclass.coolsaying();

   cout << "now the second class\n";

//called a funciton in Firstclass "retrunsum"
   x = carlosclass.returnsum();
   cout << "the sum is ";
   cout <<x;



    return 0;
}
