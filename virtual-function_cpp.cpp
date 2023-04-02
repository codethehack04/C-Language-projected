#include <iostream>
using namespace std;
/*

Student -> Test[Done]
Student ->Sport[Done]
test->result[Done]
sport->result[Done]

*/
class Student
{
protected:
    int roll_no;
    public:
    void set_number(int a)
    {
        roll_no = a;
    }
    void print_number(void)
    {
        cout << "Your roll no is " << roll_no << endl;
    }
};
class Test : virtual public Student
{
protected:
    float maths, physics;

public:
    void set_marks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }
    void print_marks(void)
    {
        cout << "You have obtained :"
             << "Maths: " << maths << endl
             << "physics: " << physics << endl;
    }
};

class sport : virtual public Student
{
protected:
    float score;

public:
    void set_score(float sc)
    {
        score = sc;
    }
    void print_score(void)
    {
        cout << "Your Pt Score is: " << score << endl;
    }
};

class result : public Test, public sport
{
private:
    float total;

public:
    void display(void)
    {
        total = maths + physics + score;
        print_number();
        print_marks();
        print_score();
        cout << "The Total score is :" << total << endl;
    }
};
int main()
{

    result pratham;
    pratham.set_number(4500);
    pratham.set_marks(65.7,56.8);
    pratham.set_score(8);
    pratham.display();
    return 0;
}