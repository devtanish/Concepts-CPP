#include<iostream>
using namespace std;

class complex{
    private: 
        int a;
        int b;

    public: 
        void setData(int a1, int a2){
            a = a1;
            b = a2;
        }

        void getData(){
            cout<<"value of a is: "<<a<<" + "<<b<<endl;
        }

        void sumOfData(complex e1, complex e2){
            cout<<"The sum of two complex number is: "<<e1.a+e2.a<<" + "<<e1.b+e2.b<<"i"<<endl;
        }
};

int main(){
    complex c1, c2, c3;

    c1.setData(1, 2);
    c1.getData();

    c2.setData(1, 2);
    c2.getData();

    c3.sumOfData(c1, c2);
}