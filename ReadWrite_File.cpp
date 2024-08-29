#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(){
     fstream myFile;
    myFile.open("parul.txt", ios :: out); //write
    if(myFile.is_open()){
        myFile<<"Hello\n";
        myFile<<"This is Parul\n";
        myFile.close();
    }

    myFile.open("parul.txt", ios :: app); //append
    if(myFile.is_open()){
        myFile<<"Bye bye\n";
        myFile<<"From Parul\n";
        myFile.close();
    }

    myFile.open("parul.txt", ios :: in); //read
    if(myFile.is_open()){
        string line;
        while(getline(myFile, line)){
            cout<<line<<endl;
        }
        myFile.close();
    }

}