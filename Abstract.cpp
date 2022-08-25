#include <iostream>

using namespace std;

// Abstract class

class Shape {

   public:

    float dimension;

   public:

    void getDimension() {

        cin >> dimension;

    }

    // pure virtual Function

    virtual float calculateArea() = 0;

};

// Derived class 1

class Square : public Shape {

   public:

    float calculateArea() {

        return dimension * dimension;

    }

};

// Derived class 2

class Circle : public Shape {

   public:

    float calculateArea() {

        return 3.14 * dimension * dimension;

    }

};

int main() {


 	Shape *b;

 	Square d;

 	Circle c;


 	b=&d;//passing their references....


    cout << "Enter the length of the square: ";

    b->getDimension();

    cout << "Area of square: " << b->calculateArea()<< endl;

    b=&c;//passing its ref

    cout << "\nEnter radius of the circle: ";

    b->getDimension();

    cout << "Area of circle: " << b->calculateArea() << endl;


    return 0;

}
