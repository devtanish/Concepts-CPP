#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
/*      Derived class Visibility       Public Derivation      	Private Derivation     	Protected Derivation

        Private members              	Not Inherited       	Not Inherited              	Not Inherited              
        Protected members               Protected               Private                    	Protected                    
        Public members              	Public	Private        	Protected                   protected  */
class Employe{
    private: int Id=1;
    protected: string name="Tanish", role="Software Develoer"; int salery=10000000;
    public: 
        Employe(string Name="Tanish", string Role="Software Develoer", int Salery=10000000){
            name=Name; role=Role; salery=Salery;
            Id++;
        }
        void getEmployedata(void){
            cout<<"Employe name is: "<<name<<endl<<"Employe role is: "<<role<<endl<<"Employe salery is: "<<salery<<endl; 
        }
};
class RoleDetail : protected Employe{
    private: int Id=1;
    protected: string branch; int level, time;
    public: 
        RoleDetail(string Branch, int Level, int Time){
            branch=Branch; level=Level; time=Time;
        } 
        void getRoleDetail(){
            cout<<"Branch name is: "<<branch<<endl<<"Level of Role: "<<role<<endl<<"Working time is: "<<time<<endl;
            cout<<"Employe name is: "<<name<<endl<<"Employe role is: "<<role<<endl<<"Employe salery is: "<<salery<<endl;
        }
};
using namespace std;
int main(){
    RoleDetail r1("Shaktinagar", 2, 20);
    r1.getRoleDetail();
}