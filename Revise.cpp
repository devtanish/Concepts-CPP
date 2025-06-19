#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
/*
    ====== Derived Class Visibility Table ======
    Base Class Member      Public     Private     Protected
    ------------------    --------   ---------   -----------
    private                Not Inherited
    protected              protected  private     protected
    public                 public     private     protected
*/
// Base class: Employe
class Employe {
    private: int Id = 1; // Private member: not accessible outside this class (even in derived class)
    protected:
        // Protected members: accessible in derived class
        string name = "Tanish", role = "Software Developer"; int salery = 10000000;
    public:
        // Parameterized constructor with default values
        Employe(string Name = "Tanish", string Role = "Software Developer", int Salery = 10000000) {
            name = Name; role = Role; salery = Salery; 
            Id++; // This Id is private; cannot be accessed outside this class
        }
        // Public method: Can be accessed outside the class
        void getEmployedata(void) {
            cout << "Employee name is: " << name << endl<< "Employee role is: " << role << endl<< "Employee salary is: " << salery << endl;
        }
};
// Derived class: RoleDetail
// Inherits Employe with 'protected' visibility mode
// So, public members of Employe become protected here
class RoleDetail : protected Employe {
    private: int Id = 1;
    protected:
        // Additional properties specific to RoleDetail
        string branch; int level, time;
    public:
        // Constructor for RoleDetail
        RoleDetail(string Branch, int Level, int Time) {
            branch = Branch; level = Level; time = Time;
        }
        // Method to display RoleDetail data
        void getRoleDetail() {
            cout<<"Branch name is: "<<branch<<endl<<"Level of Role: "<<level<<endl<<"Working time is: "<<time<<endl;
            // Accessing protected members inherited from Employe
            cout<<"Employee name is: "<<name<<endl<<"Employee role is: "<<role<<endl<<"Employee salary is: "<<salery<<endl;
        }
};
int main() {
    RoleDetail r1("Shaktinagar", 2, 20);
    // r1.getEmployedata(); ❌ Not accessible - getEmployedata() became protected due to protected inheritance
    r1.getRoleDetail(); // ✅ OK - public method of RoleDetail
    return 0;
}
