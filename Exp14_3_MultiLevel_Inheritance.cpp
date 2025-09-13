// Papri Sen
// 24070123070
// A3

#include<iostream>
using namespace std;

class Company{
    public:

    string cname;
    double valuation;

    void sales(){
        cout<<"Sales of the company"<<endl;
    }
};

class Department: public Company{
    public:

    void department(){
        cout<<"Sales Person"<<endl;
    }

    double turnover;
    int numcustom;
};

class Employee: public Department{
    public:

    string name;
    int id;
    double salary;
};

int main(){

    Employee e1;
    e1.name="Papri";
    e1.id=1234;
    e1.salary=25000;
    e1.cname="Honda";
    e1.sales();
    e1.department();

    cout<<"Employee Name: "<<e1.name<<endl;
    cout<<"Employee ID: "<<e1.id<<endl;
    cout<<"Employee Salary: "<<e1.salary<<endl;
    cout<<"Company Name: "<<e1.cname<<endl;

    return 0;
}
/*
Output:
Sales of the company
Sales Person
Employee Name: Papri
Employee ID: 1234
Employee Salary: 25000
Company Name: Honda
*/
