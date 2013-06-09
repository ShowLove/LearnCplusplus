#include <iostream>
#include <fstream>


using namespace std;

int main()
{
    // the oldschool way of associating a file with an object
   // ofstream fileOne;
   // fileOne.open("myFile.txt");
   // An easyer way would be the following

   ofstream fileOne("myFile.txt");
   //next we want to check if the file is actually open before doing stuff
   if(fileOne.is_open())
    {
        cout<<"the file is open"<< endl;

        //now its good programming practice to do what
        //we are going to do with the file in this if statement

         fileOne << " Carlos Andres Garzon" << endl;

    fileOne.close();

    }
   else{ cout<<"the file is not open"<<endl;}



    return 0;
}
