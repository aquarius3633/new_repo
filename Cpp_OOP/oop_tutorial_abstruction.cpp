# include <iostream>

using namespace std;
class AbstractEmployee
{
   virtual void AskForPromotion() = 0;//create a virtual method for this abstraction class
};
class Employee:AbstractEmployee
{
private:
    string Name;
    string Company;
    int Age;
    int NumOfYearsWorked;
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

    void setNumOfYearsWorked(int numOfYearsWorked){
        NumOfYearsWorked = numOfYearsWorked;
    }
    int getNumOfYearsWorked(){
        return NumOfYearsWorked;
    }

    Employee(string name, string company, int age){
        Name = name;
        Company = company;
        Age = age;
    }
    void introducesEmployee(){
        cout << Name << " is currently working in " << Company << " and the age is " << Age << endl;
    }
    void AskForPromotion(){
        //actually logic for this virtual method implementation;
        if(NumOfYearsWorked > 5)
            cout << Name << " is eligible for promotion!" << endl;
        else
            cout << Name << " is not eligible for promotion!" << endl;
    }
};

int main()
{

    Employee e1 = Employee("Smith John", "IBM", 25);
    Employee e2 = Employee("West Nickel", "Clourfare", 28);
    e1.introducesEmployee();
    e2.introducesEmployee();
    e1.setAge(16);
    cout << e1.getName() << " is now " << e1.getAge() << " years old" << endl;

    e1.setNumOfYearsWorked(10);
    e2.setNumOfYearsWorked(4);
    e1.AskForPromotion();
    e2.AskForPromotion();

}