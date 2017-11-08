#include<iostream>

using namespace std;

class student

{

private:int idno;

char name[20],grade; //variable declarations int m1,m2,m3,total,perc;

public: void input()

{

cout<<"Enter register number"<<endl;

cin>>idno;

cout<<"Enter name"<<endl;

cin>>name;

cout<<"Enter marks of 3 subjects"<<endl;

cin>>m1>>m2>>m3;



}

void compute()

{

total=m1+m2+m3;

perc=total/3;

if(perc>=90)

grade='S';

else

if(perc>=75)

grade='A';






//computes total marks

//computes percentage



else

if(perc>=60)

grade='B';

else

if(perc>=50)

grade='C';


else

grade='F';

}


void display()

{

cout<<"Register no= "<<idno<<endl;

cout<<"Name = "<<name<<endl;

cout<<"Grade= "<<grade<<endl;

}

};

main()

{

int i,n;

student s[10],*p;

p=&s[10]; //pointer to array of objects cout<<"Enter the number of students\n"; cin>>n;

for(i=0;i<n;i++)

{

cout<<"Enter details of student"<<i+1<<endl;

(p+i)->input();

(p+i)->compute();

}

for(i=0;i<n;i++)

{

cout<<"Details of student"<<i+1<<endl;



(p+i)->display();

}

}
