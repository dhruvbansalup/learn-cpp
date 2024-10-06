#include<iostream>
namespace first{
    int val=500;
}
namespace second{
    int val=100;
}

int main(){
    int val=200;
    std::cout<<first::val<<std::endl;
    std::cout<<second::val<<std::endl;
    std::cout<<val<<std::endl;
    return 0;
}