#include<iostream>
using namespace std;

int main(){
    int rows;
    cout<<"Enter number of rows: ";
    cin>>rows;

//Method-1
/*
    int i=1;
    while(i<=rows){
        int j=1;
        bool flag = true;
        while (j<=i){
            int k=1;
            if (flag) while (k<=(rows-i)){
                cout<<" ";
                k=k+1;
            }
            flag=false;
            cout<<"*";
            j=j+1;
        }
        i=i+1;
        cout<<endl;
    }
*/

// Method-2
int i=1;
while(i<=rows){
    int space=rows-i;
    while(space){
        cout<<" ";
        space=space-1;
    }
    int j=1;
    while (j<=i){
        cout<<"*";
        j=j+1;
    }
    i=i+1;
    cout<<endl;    
}

}