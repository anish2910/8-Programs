#include<iostream>

#include<ctime>

using namespace std;



int main()

{



time_t tt;

struct tm * ti;

time(&tt);//current calendar time

ti=localtime(&tt);//points to tm containing local time



cout<<"current day,date and time:  "<<asctime(ti);//converts the contents in the structure filled by localtime into human read version 



return 0;

}
