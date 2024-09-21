#include<iostream>
using namespace std;

int main(){
    int rows;
    cout<<"Enter number of rows:";
    cin>>rows;

    int i=1;
    while (i<=rows){
        int j=1;
        while(j<=rows-i+1){
            cout<<j<<" ";
            j=j+1;
        }
        
        int k=1;
        while(k<=(2*(i-1))){
            cout<<"*"<<" ";
            k=k+1;
        }

        int l=1;
        while(l<=rows-i+1){
            cout<<rows-l-i+2<<" ";
            l=l+1;
        }
        cout<<endl;
        i=i+1;
    }
}