#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> plusOne(vector<int>& digits){
    int number = 0;
    vector<int> num;
    for (int x : digits) {
        number = number * 10 + x;
    }
    number++;
    if (number == 0) ; // edge case
    while (number> 0) {
        num.push_back(number % 10); // get last digit
        number /= 10; // remove last digit
    }
    reverse(num.begin(), num.end()); // because we get digits in reverse order
    return num;
}

int main() {
    vector<int> value = {1, 2, 3, 4, 5, 6};
    for(int x : plusOne(value)){
        cout<<x;
    }

    return 0;
}