#include<iostream>
#include<thread>
#include<map>
#include<string>
#include<unistd.h>

using namespace std;

void refresh(map <string,int> forecast){

while(1)

{

	for(auto &item : forecast)

	{
	item.second++;
	cout<<item.first<<"-"<<item.second<<endl;
	} sleep(2);

}

}

int main()
{

map<string,int> forecast = {
{"new york",15},
{"new jersey",20},
{"mumbai",25}
};

thread t1 (refresh,forecast);
t1.join();

return 0;

}
