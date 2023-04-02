// ceo--> Employee
// ceo-->Intership
// employee-->income
// Intership-->income
#include <iostream>
using namespace std;
class CEO
{
private:
    int employee_id;

public:
    void set_employee_id(int id)
    {
        employee_id = id;
    }
    void print_employee_id(void)
    {
        cout << "Your employee id is" << employee_id << endl;
    }
};

class Employee : virtual public CEO
{
protected:
    int salary;
    string name;

public:
    void set_salary(int sal)
    {
        salary = sal;
    }
    void set_name(string a)
    {
        name = a;
    }
    void print_salary(void)
    {
        cout << "Your salary is = " << salary << endl;
    }
    void print_name(void)
    {
        cout << "Your Name is = " << name << endl;
    }
};
class Intership : virtual public CEO
{
protected:
    int year;

public:
    void set_year(int y)
    {
        year = y;
    }

    void print_year(void)
    {
        cout << "You have join intership year is :- " << year << endl;
    }
};

class Result : public Intership, public Employee
{
public:
    void display(void)
    {
        print_employee_id();
        print_name();
        print_salary();
        print_year();
        cout << "Thankyou for joing my company";
    }
};
int main()
{
    Result pratham;
    pratham.set_employee_id(2212);
    pratham.set_year(2);
    pratham.set_salary(12000);

    pratham.display();
    return 0;
}