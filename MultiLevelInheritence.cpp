#include<iostream>
#include <cmath>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
class SimpleCal{
    public: 
        int add(int a, int b){ return a+b; }
        int subtract(int a, int b){ return a-b; }
        float multiply(int a, int b){ return a*b; }
        float devide(int a, int b){ return a/b; }
};
class SintificCal{
    public:
        double power(double base, double exponent) { return pow(base, exponent); }
        double squareRoot(double x) {
            if (x < 0) {
                cerr << "Error: Square root of negative number!" << endl;
                return NAN;
            }
            return sqrt(x);
        }
        double logBase10(double x) {
            if (x <= 0) {
                cerr << "Error: Log of non-positive number!" << endl;
                return NAN;
            }
            return log10(x);
        }
        double naturalLog(double x) {
            if (x <= 0) {
                cerr << "Error: Natural log of non-positive number!" << endl;
                return NAN;
            }
            return log(x);
        }
        double sine(double angle) { return sin(angle); }
        double cosine(double angle) { return cos(angle); }
        double tangent(double angle) { return tan(angle); }
};
class Hybride : public SimpleCal, public SintificCal{};
int main() {
    Hybride cal;
    cout<<cal.power(2, 4);
}