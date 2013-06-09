#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    ifstream reader("Formated.txt");

    //  i must create variables to store the data we are reading
    string name;
    int theID ;
    double money;

    //check to see if the file is open
    if(reader.is_open()){cout<<"File is open\n"<<endl;}

    //here we must know what format the text file is
    //remember in the write programe we did: while(cin >> name >> theID >> money)
    //pay attention to the fact that we are using reader >>
    // the format of this while must be exacly the format of the file or the program wont work
    while(reader>> name >> theID >> money)
        {
            //now we are printing from .txt to the terminal
            //in the write file we did " textFormated<<name<<" "<<theID<<" "<<money<<endl; "
            cout<<"name: "<<name<<" id: "<<theID<<" money: "<<money<<endl;
        }

    // the while loop automaticaly closes the file we need not worrie
    // it does reader.close(); for us

    return 0;
}

