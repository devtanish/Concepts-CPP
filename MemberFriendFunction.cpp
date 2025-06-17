#include<iostream>
#include<string>
using namespace std;

class Employee;

class ComplexNumber{
    public:
        int sumOfComplex(Employee, Employee);
};

class Employee{
    private:
        string name;
        int Id;
        int sallery;

    public:
        void setEmployeeDetails(string Name, int ID, int Sallery){
            name = Name;
            Id = ID;
            sallery = Sallery;
        }

        friend void PrintData(Employee emp);
        friend int ComplexNumber::sumOfComplex(Employee, Employee);
};

void PrintData(Employee emp){
    cout<<"The Employe name is: "<<emp.name<<endl;
    cout<<"The Id name is: "<<emp.Id<<endl;
    cout<<"The Id name is: "<<emp.sallery<<endl;
}

int ComplexNumber :: sumOfComplex(Employee emp1, Employee emp2){
    return (emp1.sallery + emp2.sallery);
} 

int main() {
    Employee emp1, emp2;
    emp1.setEmployeeDetails("Tanish", 23, 5000);
    emp2.setEmployeeDetails("Rahul", 42, 6000);

    ComplexNumber obj;
    cout << "Total salary = " << obj.sumOfComplex(emp1, emp2) << endl;Employee emp;

    emp.setEmployeeDetails("Tanish", 23, 50);
    PrintData(emp);

    return 0;
}
