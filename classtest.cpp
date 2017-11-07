#include<iostream>



using namespace std;


class TEST


{


int code;


static int count;


public: static void showcount(int c,TEST ob)


{


cout<<count<<"";


ob.code =c;


cout<<ob.code<<endl; count++;


}


};


int TEST :: count = 1;


main()


{


TEST ob,ob1;


int c;


cout<<"Enter the code for object1\n";


cin>>c;


TEST ::showcount(c,ob);



TEST ::showcount(20,ob1);


}

