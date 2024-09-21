#include<iostream>
using namespace std;

int main(){
    int rows,cols;
    cout<<"Enter no of rows: ";
    cin>>rows;
    cout<<"Enter no of cols: ";
    cin>>cols;

    int i=0,j=0;

    while (i<rows){
        j=0;
        while(j<cols){
            cout<<cols-j<<" ";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }

    
}