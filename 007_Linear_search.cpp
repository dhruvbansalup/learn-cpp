#include<iostream>
using namespace std;

bool Linear_search(int arr[],int size,int key){
    

    for (int i=0;i<size;i++){
        if(key==arr[i]){
            return true;
        }
    }
    return false;

}

int main(){
    int arr[10]={3,4,2,532,1,13,3,4,2,4};

    cout<<"Enter the key: ";
    int key;
    cin>>key;

    bool found=Linear_search(arr,10,key);
    
    if(found){
        cout<<"Key present";
    }else{
        cout<<"Not Present";
    }

}