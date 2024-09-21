#include<iostream>
using namespace std;

int main(){

    int rows,cols;
    cout<<"Enter no of rows: ";
    cin>>rows;
    cout<<"Enter no of cols: ";
    cin>>cols;

    int i=1,count=1;
    
    while (i<=rows){
        int j=1;
        while(j<=cols){
            cout<<count<<" ";
            count=count+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}
