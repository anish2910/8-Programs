#include <iostream>  
#include <memory>  

using namespace std;  

class Rectangle {

    int length; 
    int breadth; 

public:  

    Rectangle(int l, int b)  
    {  
        length = l;   
        breadth = b;  
    }  

  
    int area()  

    {   
        return length * breadth;    

    }  

};  

 

int main()  

{  
    shared_ptr<Rectangle> P1(new Rectangle(20, 5));  
    cout << P1->area() << endl;  

    {

    shared_ptr<Rectangle> P2;  

    P2 = P1;  

    cout << P2->area() << endl;  
    // not give an error,  

    cout << P1->area() << endl; 


// reference counter of P2 is 2   

    cout << P2.use_count() << endl; 

    }
    cout<<P1.use_count()<<endl;

    return 0;  

}  
