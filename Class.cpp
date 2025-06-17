#include<iostream>
using namespace std;

class Employe {
    private:
        int a, b, c;

    public: 
        int d, e;
        void setData(int a1, int b1, int c1);
        void getData(){
            cout<<"The value of a is: "<<a<<endl;
            cout<<"The value of b is: "<<b<<endl;
            cout<<"The value of c is: "<<c<<endl;
            cout<<"The value of d is: "<<d<<endl;
            cout<<"The value of e is: "<<e<<endl;
        }
};

// This syntax is used to get the public function of the selected class name 
void Employe :: setData(int a1, int b1, int c1){
    a = a1;
    b = b1;
    c = c1;
}

int main(){
    Employe emp;
    emp.setData(1, 2, 3);
    emp.getData();
}