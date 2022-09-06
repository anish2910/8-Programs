#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
	map<int,string> m;
	m[1]="anish";
	m[12]="maple";
	m.insert({9,"anup"});
	for(auto i : m){
		cout<<i.first<<endl;
	}
	cout<<"count "<<m.count(12)<<endl;
	m.erase(1);
	cout<<"after erase"<<endl;
	for(auto j:m){
	    cout<<j.first<<endl;
	}
	return 0;
}
