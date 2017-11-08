
#include<iostream>

using namespace std;

class comp

{

private:float real,img;

public: void input()

{

cout<<"Enter real and img part"<<endl;

cin>>real>>img;

}

friend void add(comp c1,comp c2); //friend functions friend void multi(comp c1,comp c2);

};

void add(comp c1,comp c2)    //passing objects as parameters

{

float real,img;

real=c1.real+c2.real;

img=c1.img+c2.img;

cout<<"Sum = "<<real<<"+"<<img<<"i"<<endl;

}

void multi(comp c1,comp c2)    //passing objects as parameters

{

float real,img;

real=c1.real*c2.real-c1.img*c2.img;

img=c1.real*c2.img+c2.real*c1.img;

cout<<"Product = "<<real<<"+"<<img<<"i"<<endl;

}

int main()

{

comp c1,c2,c3;    //objeect declarations

cout<<"Enter 1st complex number"<<endl;



c1.input();

cout<<"Enter 2nd complex number"<<endl;

c2.input();

cout<<"Addition of 2 complex numbers= "<<endl;

add(c1,c2);

cout<<"Multiplication of 2 complex numbers= "<<endl;

multi(c1,c2);

return 0;

