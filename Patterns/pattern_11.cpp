#include<iostream>
using namespace std;

int main(){
    int rows, cols;
    cout<<"Enter no of rows: ";
    cin>>rows;
    cout<<"Enter no of columns: ";
    cin>>cols;

    int i=1;
    while(i<=rows){
        int j=1;
        while (j<=cols){
            cout<<char('A'+i+j-2)<<" ";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}