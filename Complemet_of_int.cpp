// Leet Code #1009
#include<iostream>
#include<bitset>
using namespace std;

int main(){
    int n;
    cout<<"Enter a Number: ";
    cin>>n;

        cout<<"Bit given: "<<bitset<32>(n)<<endl;


      int new_num= ~n;
        int zeros=0;
        while(n){
            zeros=zeros+1;
            n=n>>1;
        }
      
        cout<<"Bit new_num 1: "<<bitset<32>(new_num)<<endl;
        
        new_num=new_num<<31-zeros;
         cout<<"Bit new_num 2: "<<bitset<32>(new_num)<<endl;
        new_num=new_num>>31-zeros;

        cout<<"Bit new_num 3: "<<bitset<32>(new_num)<<endl;

        cout<<"Complement: "<<new_num<<endl;
        return(0);
}