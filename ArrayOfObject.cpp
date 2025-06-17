#include<iostream>
using namespace std;

class Employe {
    private:
        int ID;

    public:
        void setID(){
            int id;
            cout<<endl<<"Enter your ID: ";
            cin>>id;
            ID = id;
        }

        void getData(){
            cout<<"Employe ID is: "<<ID;
        }
        
};

int main(){

    Employe arrayOfEmploye[10];

    for(int i=0 ; i<sizeof(arrayOfEmploye)/sizeof(arrayOfEmploye[0]) ; i++){
        arrayOfEmploye[i].setID();
        arrayOfEmploye[i].getData();
    }

}