#include<iostream>
using namespace std;

int main(){
    int rows;
    cout<<"Enter no of rows: ";
    cin>>rows;

    int i=0;
    while (i<rows){
        int j=0;
        while(j<=i){
            cout<<char('A'+(rows-1)-i+j)<<" ";
            j=j+1;
        }
        i=i+1;
        cout<<endl;
    }
    
}