#include<iostream>
#include<vector>

using namespace std;

void display(vector<int> &vec){
    for(int i=0; i<vec.size(); i++){
        cout<<vec[i]<<" ";
    }
    cout<<endl;
}
int main(){

    
    vector <int> v1;
    int size, element;
    cout<<"Enter the size: "<<endl;
    cin>>size;

    // for(int i=0; i<size; i++){
    //     cout<<"Enter the elements: ";
    //     cin>>element;
    //     v1.push_back(element);
    // }

    // // v1.insert(v1.begin()+1,2);

    // // for(auto iter =  v1.begin(); iter !=v1.end(); iter++){
    // //     cout<< *iter<<endl;
    // // }

    // // for(int v1 : v1){
    // //     cout<< v1 <<endl;
    // // }

    // // for(vector <int> :: iterator itr = v1.begin(); itr!=v1.end(); itr++){
    // //     cout<<*itr<<endl;
    // // }

    // vector <int> :: iterator itr = v1.begin();
    // v1.insert(itr, 99);
    // v1.erase(v1.begin());
    // display(v1);
}