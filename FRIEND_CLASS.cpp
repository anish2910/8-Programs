#include<iostream>

using namespace std;

class Equal

{

    float a; //default set as private

    float c;

    float area;

public:

void calc(float l)

{

    a=l;

    c=a+a+a;

    area=(1.73 * a *a )/4;

}



friend class Homework;

};

class Homework

{

public:

	void pri(Equal e)

	{

    		cout<<"area"<<e.area<<endl;

	}

};

int main()

{

    Equal e;//object

    e.calc(3);//pass value

    Homework h;

    h.pri(e);

    return 0;

}
