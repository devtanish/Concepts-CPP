#include<iostream>
#include<string>
using namespace std;
class Y;
class X{
    private: int x1;
    public:
        void setData(int number){
            x1 = number;
        }
    friend void exchange(X &, Y&);
};
class Y {
    private: int y1;
    public:
        void setData(int number){
            y1 = number;
        }
    friend void exchange(X &, Y &);
};
void exchange(X &x, Y &y){
    int temp  = x.x1; x.x1 = y.y1; y.y1 = temp;
    cout<<"The current value of x is: "<<x.x1<<endl;
    cout<<"The current value of y is: "<<y.y1<<endl;
}
int main() {
    X x; Y y;
    x.setData(5); y.setData(10);
    exchange(x, y);
    return 0;
}