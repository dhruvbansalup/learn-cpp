#include<iostream>
using namespace std;

int main(){

    int rows, cols;
    cout<<"Enter no of rows: ";
    cin>>rows;
    cout<<"Enter no of columns: ";
    cin>>cols;

    int i=1;
    char val='A';
    while(i<=rows){
        int j=1;
        while(j<=cols){
            cout<<val<<" ";
            val=val+1;
            j=j+1;
        }
        i=i+1;
        cout<<endl;
    }
}