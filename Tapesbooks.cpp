#include<iostream>

using namespace std;


class MEDIA

{




public:

string title,price;


MEDIA(string a,string b)

{    title=a;

price=b;

}




virtual void content(string)=0; virtual void getinfo()=0;


//Pure virtual fns



~MEDIA(){ }



};


class Book : public MEDIA

{ private : string no_pgs; public:

Book(string a,string b):MEDIA(a,b){ }    //To invoke base class constructor






void content(string s){

no_pgs=s;




//Defining the Virtual fn



}




void getinfo()

{

cout<<"Title :"<<title<<" "<<"Price :"<<price<<endl;

cout<<"No.of Pgs :"<<no_pgs<<endl;

}



};



class Tape : public MEDIA

{   public:


string play_time;


Tape(string a,string b):MEDIA(a,b){ }    //To invoke base class constructor



void content(string s)

{

play_time=s;

}


void getinfo()

{   cout<<"Title :"<<title<<" "<<"Price :"<<price<<endl;


cout<<"Playtime: "<<play_time<<endl;

}


};




void access( MEDIA &m)

{


//Illustrates Run time Polymorphism



m.getinfo();

}


int main()

{

Book B("HARRY POTTER","Rs.750");

Tape T("Yesterday by Beatles","Rs.50");


T.content("12:20");

B.content("250");



access(T);

access(B);


return 0;

}

