#include<iostream>
#include<memory>

using namespace std;

struct Person;

struct Team{

    shared_ptr<Person> goalKeeper;
    ~Team(){cout<<"Team destructed.";}

};
struct Person{

    weak_ptr<Team> team; 
    ~Person(){cout<<"Person destructed.";}

};

int main(){

    auto Barca = make_shared<Team>();
    auto Anil = make_shared<Person>();

  
    Barca->goalKeeper = Anil;
    Anil->team = Barca;
  
    return 0;
}
