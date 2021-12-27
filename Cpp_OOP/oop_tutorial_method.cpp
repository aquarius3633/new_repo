# include <iostream>

using namespace std;

class Employee
{
public:
    string Name;
    string Company;
    int Age;

    Employee(string name, string company, int age){
        Name = name;
        Company = company;
        Age = age;
    } 
    void introducesEmployee(){
        cout << Name << " is currently working in " << Company << " and the age is " << Age << endl;
    };
};

int main()
{

    Employee e1 = Employee("Smith John", "IBM", 25);
    Employee e2 = Employee("West Nickel", "Clourfare", 28);
    e1.introducesEmployee();
    e2.introducesEmployee();
    //cout << e1.Name << " is currently working in " << e1.Company << " and the age is " << e1.Age << endl;
    //cout << e2.Name << " is currently working in " << e2.Company << " and the age is " << e2.Age << endl;
}