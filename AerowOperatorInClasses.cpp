#include<iostream>
using namespace std;

class Employee{
    private: int id; string name;
    public:
        Employee(){}
        Employee(int id, string name){
            this->id = id;
            this->name = name;
        }
        void setId(int id){
            this->id = id;
        }
        void setName(string name){
            this->name = name;
        }
        int getId(){
            return id;
        }
        string getName(){
            return name;
        }   
};

int main(){
    Employee *emp1 = new Employee[2];

    emp1->setId(1);
    emp1->setName("Tom");

    cout << emp1[0].getId() << endl;
    cout << emp1[0].getName() << endl;

    return 0;
}