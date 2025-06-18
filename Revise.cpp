#include<iostream>
#include<string>
using namespace std;
int main() {
    int* number = new int(23);
    cout << "The value of string is: " << number;
    delete number;
}