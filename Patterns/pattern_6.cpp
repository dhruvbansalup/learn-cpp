#include<iostream>
using namespace std;

int main(){

    int rows;
    cout<<"Enter no of rows: ";
    cin>>rows;

    int i=1;
    while(i<=rows){
        int j=1;
        int temp=i;
        while(j<=i){
            cout<<temp<<" ";
            temp=temp+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }

}