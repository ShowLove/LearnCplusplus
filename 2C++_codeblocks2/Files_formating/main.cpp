#include <iostream>
#include <fstream>

using namespace std;


int main()
{
    ofstream textFormated("Formated.txt");
    if(textFormated.is_open()){cout<<"File is open\n"<<endl;}

    cout<<" enter: name, id, money" << endl;
    cout<<" press control + z to indicate you are finished\n\n"<<endl;
    //cntrol + z manually enters a end marker that indicates you have reached the end of a file

    string name;
    int theID ;
    double money;




    while(cin >> name >> theID >> money)
    {
        // here we were writing into the .txt file
        textFormated<<name<<" "<<theID<<" "<<money<<endl;
    }

    textFormated.close();


    return 0;
}


