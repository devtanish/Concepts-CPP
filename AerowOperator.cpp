#include<iostream>
#include<string>
using namespace std;
class Employe{
        string name="free"; int id=2;
    public: 
        void setData(string Name, int Id){ name=Name; id = Id; }
        void getData(){
            cout<<"The Name of Employe is: "<<name<<endl<<"The Id of Employe is: "<<id<<endl;
        }
};
int main(){
    Employe emp; int placevalue=0;
    Employe* ptrEmp[4];
    ptrEmp[placevalue]->setData("Tanish", 1);
    // ptrEmp[0]->getData();
    // delete[] ptrEmp;
    // ptrEmp->getData();
}