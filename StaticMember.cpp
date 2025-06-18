#include<iostream>
using namespace std;
class Employe {
    private: int ID; static int count;
    public:
        void setData(int Id){
            ID = Id; 
            count++;
            cout<<"your ID is "<<ID<<endl;
        }
        void getData(void){
            cout<<"Count value is "<<count<<endl;
        }
};
// you have to decalear atlest one time to global variable and you can also access private variables outside the class if  the variable is static in nature
int Employe :: count; 
int main() { 
    Employe naman; Employe tanish;
    naman.setData(1); naman.getData();
    tanish.setData(2); tanish.getData();
}