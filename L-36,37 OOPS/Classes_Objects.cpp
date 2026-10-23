#include <iostream>
using namespace std;

class Student // user defined data type
{
public:
    string name;
    int rollNo;
    float cgpa;

    //Constructor Overloading
    Student(string n, int r, float c) // Paramaterised Constructor
    {
        name = n;
        rollNo = r;
        cgpa = c;
    }

    Student(string n, float c, int r) // Paramaterised Constructor
    {
        name = n;
        rollNo = r;
        cgpa = c;
    }
    Student(int r, string n)
    {
        rollNo = r;
        name = n;
    }
    Student(){
        // Default Constructor
    }
};

int main()
{
    Student x("Ayush", 86, 9.5);// its an object/variable
    //Here created a box with all data types that is name, rno, cgpa
    cout << x.name << " " << x.rollNo << " " << x.cgpa << endl;

    Student y("Brute", 9.5, 13); // its an object/variable
    // Here created a box with all data types that is name, rno, cgpa
    cout << y.name << " " << y.cgpa << " " << y.rollNo << endl;

    Student z(18, "Ayush"); // its an object/variable
    // Here created a box with all data types that is name, rno, cgpa
    cout << z.name << " " << z.rollNo << endl;

}