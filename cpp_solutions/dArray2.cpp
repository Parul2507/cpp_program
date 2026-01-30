#include <iostream>
#include <math.h>
#include <assert.h>

using namespace std;

class dArray{
    private:
    int size;
    int max_size;
    int *arr;

    public:
    dArray(){
        size = 0;
        max_size = 6;
        arr = new int[max_size];
    }
    ~dArray(){
        delete[] arr;
    }

    void resize(){
        max_size *= 2;
        int *temp = new int[max_size];
        for(int i=0; i<size; i++){
            temp[i] = arr[i];
        }
        delete[] arr;
        arr = temp;
    }

    void print(){
        cout<<"Size: "<< size <<" Max: "<< max_size;
        cout<<"[";
        for(int i=0; i<size; i++){
            cout<<arr[i]<<" ";
        }
        cout<<"]"<<endl;
    }
    void push(int val){
        if(size == max_size){
            resize();
        }
        arr[size] = val;
        size++;
    }

    int get(int indx){
        if(indx < 0 || indx > size){
            cout<<"Enter the valid index!!"<<endl;
        }
        cout<<arr[indx]<<endl;
        return arr[indx];
    }

    void insert(int indx, int val){
        if(size == max_size){
            resize();
        }
        if(indx < 0 || indx >size){
            cout<<"Invalid index"<<endl;
        }
        for(int i=size; i>indx; i--){
            arr[i] = arr[i-1];
        }
        arr[indx] = val;
        size++;
    }
    void pop(){
    int lastEle = arr[size-1];
    size--;
    cout<<lastEle<<endl;
    }
    int remove(int indx){
        int removeEle = arr[indx];
        for(int i=indx; i<size-1; i++){
            arr[i] = arr[i+1];
        }
        size--;
        cout<<removeEle<<endl;
        return removeEle;
    }
};
int main()
{
    dArray array;
    array.print();

    for(int i=1; i<10; i++){
        array.push(i*10);
    }
    array.print();
    array.insert(5, 0);
    array.print();
    array.pop();
    array.print();
    array.remove(2);
    array.print();
    return 0;
}