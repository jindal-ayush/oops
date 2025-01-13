#include<iostream>
#include<string>
using namespace std;

class Teacher {
    private:
    double salary;
    public:
    string name;
    string dept;
    string subject;
    
    Teacher()
    {
        cout<<"hii i am constructor"<<endl;

    }
    void changeDept(string newDept)
    {
        dept = newDept;
    }

    //setter
    void setSalary (double s)
    {
        salary = s;
    }
    //getter
    double getSalary ()
    {
        return salary;
    }
    
};

int main()
{
    Teacher t1; //constructor call
    Teacher t2;
    Teacher t3;
    Teacher t4;

    t1.name = "ayush";
    t1.subject = "c++";
    t1.dept =   "computer science";
    t1.setSalary(30000);
    t1.getSalary();
    

cout<<t1.name<<endl;
}