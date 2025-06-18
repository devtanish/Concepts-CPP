#include<iostream>
#include<string>
using namespace std;
/*
Topics:-
    Constructor
    Default and Perimetertized constructor    
    Constructor overloading
    Constructor with Default Arguments
*/
class Circle{
    private: int radius;
    public:
        //Constructor always runs at the first position Whenever this class is used
        Circle(void){
            int number;
            cout<<"Enter the radius of a circle: "; cin>>number;
            setData(number);
        }
        //Perimetertized constructor
        //Constructor overloading
        Circle(int a){
            cout<<"the value of a is: "<<a<<endl;
        }
        void setData(int number){
            radius = number;
        }
        void Area(void){
            cout<<"The Area of a circle is: "<<3.14*(radius*radius)<<endl;
        }
        void circumference(void){
            cout<<"The Paremeter of a Circle is: "<<2*(3.14*radius)<<endl;
        }
};
int main() {
    //using Circle class and creating a new instence of Class 
    Circle cir;
    //Example how perimetertized constructor is used 
    Circle(2);
    //at first constructor will run and after that all the function run 
    cir.Area();
    cir.circumference();
}