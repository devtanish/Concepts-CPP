#include<iostream>
#include<string>
using namespace std;

class Gun {
    private: string* gun; float amo;
    public:
        Gun(string gunName = "AKM", float amoName = 14.02) {
            gun = new string(gunName); amo = amoName;
        }
        // Copy constructor: used when creating a new object from an existing one
        // Always takes the object as a reference to avoid infinite recursion
        Gun(const Gun &g1) {
            gun = new string(*g1.gun); amo = g1.amo;
            cout << "Copy constructor called." << endl;
        }
        ~Gun() {
            delete gun;
            cout << "Destructor run successfully" << endl;
        }
        void DisplayCreat() {
            cout << "You have a gun named: " << *gun << endl; cout << "You have a gun ammo size: " << amo << " mm" << endl;
        }
};
int main() {
    Gun gun("AKM", 14.03); Gun gun2(gun);
    gun.DisplayCreat();
}