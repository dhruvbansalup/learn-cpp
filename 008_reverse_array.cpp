#include<iostream>
using namespace std;


void print(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << (i < size - 1 ? ", " : "");
    }
    cout << endl;
}


void reverse(int arr[],int size){
    for (int i=0;i<(size/2);i++){
        swap(arr[i],arr[size-i-1]);
    }
}

int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    print(arr,10);
    reverse(arr,10);
    print(arr,10);
    
}