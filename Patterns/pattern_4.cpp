#include<iostream>
using namespace std;

int main(){
    int rows;
    cout<<"Enter no of rows: ";
    cin>>rows;

    int i=1;

    while (i<=rows){
        int j=1;
        while (j<=i){
            cout<<i<<" ";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }

}