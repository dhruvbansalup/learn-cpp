#include <iostream>
using namespace std;

int main(){
    int rows, cols;
    cout<<"Enter no of rows: ";
    cin>>rows;
    cout<<"Enter no of columns: ";
    cin>>cols;
/*
    int i=1;
    char value='A';
    while(i<=rows){
        int j=1;
        while(j<=cols){
            cout<<value<<" ";
            j=j+1;
        }
        value=value+1;
        cout<<endl;
        i=i+1;
    }
    */


// Method 2
    int i=1;
    while(i<rows){
        int j=1;
        while(j<=cols){
            cout<<char ('A'+i-1)<<" ";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}