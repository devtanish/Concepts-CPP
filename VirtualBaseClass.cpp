#include <iostream>
using namespace std;

// class A {
// public:
//     void show() {
//         cout << "I am from Class A" << endl;
//     }
// };

// class B : public A { };
// class C : public A { };

// class D : public B, public C { };  // Diamond Problem
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
//  D obj;
//  obj.show();  ❌ ERROR: Ambiguous
//  obj.B::show();  // ✅ Works using scope resolution
//  obj.C::show();  // ✅ Works using scope resolution

    obj.show();  // ✅ No ambiguity
    return 0;
}

