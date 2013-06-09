#include <iostream>
// this programs uses three functions to show
// you can return nothing, use input from main, or return a value

using namespace std;

 void returnnothing ();
 void inputfrommain (int c, int d);
 int returnsum();

int main()
{
    int c,d, sum;
    //function sums a,b, 32 and 47
    returnnothing ();

    //prep for upcoming fucntion
    c = 8;
    d = 8;

    inputfrommain (c,d);


    sum = returnsum();

    cout <<"the sum of the third functions is  ";
    cout <<sum;

    return 0;
}
//function does stuff but returns nothing back to int main
//function sums a,b, 32 and 47
void returnnothing (){
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
    cout <<"sum is the following  ";
    cout << sum;
    cout << "\n\n";


}

// this function uses variables declared in int main
void inputfrommain (int c, int d){
    int a, b, sum;
    cout <<"this program prints the sum";
    cout <<"of 8,8,a and b\n";
    cout <<"please enter variable a \n";
    cin >>a;
    cout <<"\n";
    cout <<"please enter variable b\n";
    cin >>b;
    cout <<"\n";
    sum = a+b+c+d;
    cout <<"sum is the following  ";
    cout << sum;
    cout << "\n\n";

}

// this function returns the value sum into int main
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
//    cout <<"sum is the following  ";
//    cout << sum;
//    cout << "\n\n";
return sum;
}




