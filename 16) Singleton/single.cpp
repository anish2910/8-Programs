#include<iostream>
#include<string>

using namespace std;

class Gamesetting{
static Gamesetting* instance;

int bright;
int width;
int height;
  
//def const

Gamesetting() : width(786),height(1300),bright(75) {}



public:
static Gamesetting* getInstance(){
if(instance==NULL)
instance=new Gamesetting();
return instance;
}

//some getters and setters for them
void setWidth(int w){
width=w;}
void setHeight(int h){
height=h;}

	
void setBright(int b){
bright=b;}


int getWidth()
{
	return width;
}


int getHeight()
{
	return height;
}

int getBright()
{
	return bright;
}


void display()
{
	cout<<"brightness"<<bright<<endl;
	cout<<"height"<<height<<endl;
	cout<<"width"<<width<<endl;}

};


Gamesetting * Gamesetting::instance=NULL;

void some(){
Gamesetting *setting=Gamesetting :: getInstance();
cout<<"address ="<<setting<<endl;
	setting->display();
	}

int main()
{

	Gamesetting *setting=Gamesetting :: getInstance();
	cout<<"address ="<<setting<<endl;
	setting->display();
	setting->setWidth(90);
	setting->setHeight(190);
	setting->setBright(120);
	 some();
	return 0;

}
