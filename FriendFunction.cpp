#include<iostream>
using namespace std;

class Complex {
    private:
        int a, b;

    public:

        friend Complex complexNumber(Complex c1, Complex c2);

        void setData(int a1, int b1){
            a = a1;
            b = b1;
        }

        void printData(void){
            cout<<a<<" + "<<b<<"i"<<endl;
        }
};

Complex complexNumber(Complex c1, Complex c2){
    Complex o3;
    o3.setData((c1.a+c2.a), (c1.b+c2.b));
    return o3;
} 


/* Properties of friend functions
1. Not in the scope of class
2. since it is not in the scope of the class, it cannot be called from the object of that class. c1.sumComplex() == Invalid
3. Can be invoked without the help of any object
4. Usually contans the objects as arguments
5. Can be declared inside public or private section of the class
6. It cannot access the members directly by their names and need object_name.member_name to access any member.*/

int main() {
    Complex comp1, comp2;

    comp1.setData(1, 4);
    comp2.setData(2, 6);

    complexNumber(comp1, comp2).printData();
}