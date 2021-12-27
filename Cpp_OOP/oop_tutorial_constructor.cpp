# include <iostream>

using namespace std;

class Employee
{
public:// make this class members publically accessable (everything in C++ class is private by default!!)
    string Name;
    string Company;
    int Age;

    Employee(string name, string company, int age){
        Name = name;
        Company = company;
        Age = age;
    } // create constructor for employee class (C++ will create constructor for class by default!!)
};
//rules for C++ constructor: 1. no reture type 2. use class name as constructor name 
int main()
{

    Employee e1 = Employee("Smith John", "IBM", 25);//initialise Employee object will automatically invoke constructor of the class
    Employee e2 = Employee("West Nickel", "Clourfare", 28);
    // e1.Name = "Smith John";
    // e1.Company = "IBM";
    // e1.Age = 25;

    // e2.Name = "West Nickel";
    // e2.Company = "Cloudfare";
    // e2.Age = 28;
    
    cout << e1.Name << " is currently working in " << e1.Company << " and the age is " << e1.Age << endl;
    cout << e2.Name << " is currently working in " << e2.Company << " and the age is " << e2.Age << endl;
}