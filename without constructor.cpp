#include <iostream>

#include <string>

using namespace std;



// class definition

// "student" is a class

class Student {



private: // private access specifier

    int rollNo;

    string stdName;

    float perc;



public: //public access specifier

    //function to set the values

    Student(){}

    void setValue()

    {

        rollNo = 22;

        stdName = "anish";

        perc = 90;

    }



    //function to print the values

    void printValue()

    {

        cout << "Student's Roll No.: " << rollNo << "\n";

        cout << "Student's Name: " << stdName << "\n";

        cout << "Student's Percentage: " << perc << "\n";

    }

};



int main()

{

    // object creation

    Student std;



    //calling function

    std.setValue();

    std.printValue();

    return 0;

}
