#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
// Forward declaration of Student class to allow inheritance declaration in School class
class Student;
// School class contains basic employee/school-related data
class School {
protected: int SchoolId = 1; // Protected member, accessible in derived class (Student)
public:
    string name;     // Name of the school
    float sallery;   // Salary of the employee (maybe principal/teacher)
    // Default constructor: prompts user for school name and salary
    School() {
        string nameOfSchool; float Sallery;
        cout<<"Enter the School name: "; cin>>nameOfSchool;
        cout<<"Enter your Sallery: "; cin>>Sallery;
        name = nameOfSchool; sallery = Sallery;
        SchoolId++;  // Increment School ID (though this logic doesn’t persist)
    }
    // Parameterized constructor: initializes with given name and salary
    School(string Name, float Sallery) {
        name = Name; sallery = Sallery;
        SchoolId++;  // Again, this increment is not persistent across instances
    }
    // Displays school data
    void getEmploye(void) {
        cout<<"The Id of the employee is: "<<SchoolId<<endl;
        cout<<"The name of the employee is: "<<name<<endl;
        cout<<"The salary of the employee is: "<<sallery<<endl;
    }
};
// Student class inherits from School (public inheritance)
class Student : public School {
private: int StudentId = 1;  // Student ID (independent from School ID)
public:
    string StudentName;string ClassName;int Fees;          
    // Constructor initializes student details
    Student(string name, string className, int fees) {
        StudentName=name; ClassName=className; Fees=fees;
        StudentId++;  // Increment (but doesn't persist globally)
    }
    // Displays student-specific data
    void getStudentData(void) {
        cout << "The student name is: " << StudentName << endl;
        cout << "The student className is: " << ClassName << endl;
        cout << "The student Fees is: " << Fees << endl;
    }
    // Displays inherited school data
    void getSchoolData() {
        cout<<"School name is: "<<name<<endl;
        cout<<"School Salary is: "<<sallery<<endl;
        cout<<"School Id is: "<<SchoolId<<endl;
    }
};
int main() {
    // Create a student object with paremeterized constructor
    Student std("Tanish", "10th B", 25000);
    // Display school-related data (inherited from School class)
    std.getSchoolData(); return 0;
}
