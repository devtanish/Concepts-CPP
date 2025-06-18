#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
struct EmployeData{
    string name, address; float sallery; int id; 
};
class Employe{
    private: 
        vector<EmployeData> emp; 
    public:
        Employe(int number_of_employes){
            for(int i=0 ; i<number_of_employes ; i++){
                struct EmployeData empData;
                cout<<"Enter your name: ";cin>>empData.name;
                cout<<"Enter your Id: ";cin>>empData.id;
                cout<<"Enter your sallery: ";cin>>empData.sallery;
                cout<<"Enter your address: ";cin>>empData.address;
                emp.push_back(empData);
            }
        }
        void dispaly(void){
            for(auto x : emp){
                cout<<x.name<<endl;
                cout<<x.id<<endl;
                cout<<x.sallery<<endl;
                cout<<x.address<<endl;
                cout<<"__________________________________________________________________________________________________________\n"<<endl;
            }
        }
};
int main() {Employe emp1(2); emp1.dispaly(); return 0;}
