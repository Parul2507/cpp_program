#include<iostream>

using namespace std;

void strlength(char* array){
    int i = 0;
    while(array[++i]!='\0');
    cout<<"Length is: "<< i <<endl;
}
int main(){

    char* arr = "abschydsofuierhfiorw";
    strlength(arr);
}