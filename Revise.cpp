#include <iostream>
using namespace std;

class A {
public:
    void show() {
        cout << "I am from Class A" << endl;
    }
};

class B : virtual public A { };
class C : virtual public A { };

class D : public B, public C { };

int main() {
    D obj;
    obj.show();  // ✅ No ambiguity
    return 0;
}
