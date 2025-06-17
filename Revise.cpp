#include<iostream>
#include<string>
using namespace std;

class Employe;

class Calculate{

    public:
        int sumOfSallery(Employe, Employe);
};

class Employe{
    private:
        string Name;
        int Sallery;
        int Id;

    public:
        void setData(string name, int sallery, int id){
            Name = name;
            Sallery = sallery;
            Id = id;
        }

        friend void print(Employe);
        friend int Calculate :: sumOfSallery(Employe, Employe);
};

void print(Employe e1){
    cout<<"The Employe Name is: "<<e1.Name<<endl;
    cout<<"The Employe Id is: "<<e1.Id<<endl;
    cout<<"The Employe Sallery is: "<<e1.Sallery<<endl;
}

int Calculate :: sumOfSallery(Employe e1, Employe e2){
    return (e1.Sallery + e2.Sallery);
}

int main(){
    Employe e1, e2;
    e1.setData("Naman", 2000, 1);
    e2.setData("Tanish", 3000, 2);

    Calculate c1;
    cout<<c1.sumOfSallery(e1, e2)<<endl;

    return 0;
}