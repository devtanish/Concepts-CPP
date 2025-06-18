#include<iostream>
#include<string>
using namespace std;

class Gun {
    private:
        string* gun;   // Pointer to dynamically store the gun name
        float amo;     // To store the ammo size

public:
    // Default and parameterized constructor
    Gun(string gunName = "AKM", float amoName = 14.02) {
        // Dynamically allocate memory for the gun name and copy the value
        gun = new string(gunName);
        amo = amoName;  // Initialize ammo size
    }

    // Copy constructor: used when creating a new object from an existing one
    // Always takes the object as a reference to avoid infinite recursion
    Gun(const Gun &g1) {
        // Allocate new memory and perform a deep copy
        gun = new string(*g1.gun);
        amo = g1.amo;  // Copy ammo value
        cout << "Copy constructor called." << endl;
    }

    // Destructor: releases the dynamically allocated memory
    ~Gun() {
        delete gun;  // Free memory allocated by 'new'
        cout << "Destructor run successfully" << endl;
    }

    // Method to display the gun name and ammo size
    void DisplayCreat() {
        cout << "You have a gun named: " << *gun << endl;
        cout << "You have a gun ammo size: " << amo << " mm" << endl;
    }
};

int main() {
    Gun gun("AKM", 14.03);
    Gun gun2(gun);
    gun.DisplayCreat();
}