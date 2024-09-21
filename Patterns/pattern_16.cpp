#include<iostream>
using namespace std;

int main(){
    int rows;
    cout<<"Enter number of rows: ";
    cin>>rows;

    int i=1;
    while(i<=rows){

        int space=rows-i;
        while (space){
            cout<<" ";
            space=space-1;
        }
        
        int j=1;
        while(j<=i){
            cout<<j;
            j=j+1;
        }
        
        int k=i-1;
        while(k){
            cout<<k;
            k=k-1;
        }

        cout<<endl;
        i=i+1;
    }
}