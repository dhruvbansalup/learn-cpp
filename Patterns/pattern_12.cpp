#include<iostream>
using namespace std;

int main(){
    int rows;
    cout<<"Enter no of rows: ";
    cin>>rows;

    int i=1;
    while (i<=rows){
        int j=1;
        while(j<=i){
            cout<<char('A'+i-1)<<" ";
            j=j+1;
        }
        i=i+1;
        cout<<endl;
    }
    
}