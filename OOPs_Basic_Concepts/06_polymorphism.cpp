#include<iostream>
using namespace std;

class complex{
    private:
    int real,img;
    public:

    //Function Overloading
    // void fun(){
    //     cout<<"This is a fn with no argument"<<endl;
    // }
    // void fun(int x){
    //     cout<<"This is a fn with int argument"<<endl;
    // }
    // void fun(double x){
    //     cout<<"This is a fn with double argument"<<endl;
    // }


    
    complex() : real(0), img(0) {}

    complex(int r, int i) : real(r), img(i) {}

    //Operator Overloading
    complex operator + (complex &obj){
        complex res;
        res=complex(this->real+obj.real,this->img + obj.img);
        return res;
    }

    void display(){
        cout<<real<<" + i"<<img<<endl;
    }


};

//runtime polymorphism
class base{
    public:
    virtual void print(){
        cout<<"This is a base class print fn"<<endl;
    }
    void display(){
        cout<<"This is a base class display fn"<<endl;
    }
};
class derived:public base{
    public:
    void print(){
        cout<<"This is a drived class print fn"<<endl;
    }
    void display(){
        cout<<"This is a drived class display fn"<<endl;
    }
};


int main(){
    // complex a;
    // a.fun();
    // a.fun(3);
    // a.fun(342.2);

    complex a(5,2);
    complex b(3,4);
    a.display();
    b.display();

    complex c=a+b;
    c.display();



    base *baseptr;
    derived d;
    baseptr=&d;

    baseptr->print();
    baseptr->display();

}