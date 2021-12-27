# include <iostream>

using namespace std;

class Employee
{
private:
    string Name;
    string Company;
    int Age;
public:
    void setName(string name){
        Name = name;
    }
    string getName(){
        return Name;
    }
    void setCompany(string company){
        Company = company;
    }
    string getCompany(){
        return Company;
    }
    void setAge(int age){
        Age = age;
    }
    int getAge(){
        return Age;
    }
    Employee(string name, string company, int age){
        Name = name;
        Company = company;
        Age = age;
    }
    void introducesEmployee(){
        cout << Name << " is currently working in " << Company << " and the age is " << Age << endl;
    }
};

int main()
{

    Employee e1 = Employee("Smith John", "IBM", 25);
    Employee e2 = Employee("West Nickel", "Clourfare", 28);
    e1.introducesEmployee();
    e2.introducesEmployee();
    e1.setAge(30);
    cout << e1.getName() << " is now " << e1.getAge() << " years old" << endl;
}