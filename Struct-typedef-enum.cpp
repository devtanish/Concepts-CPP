#include<iostream>
#include<string>
using namespace std;
enum owner{ name, salery, company };
struct employes {
    char favChar = 'y'; int sallery; int Id;
};
typedef struct userProfile {
    string name; int Id; string email;
} user;

int main(){
//  use of enum 
    enum owner na = salery;
    cout<<na<<endl;
//  use of struct 
    struct employes Tanish;
    Tanish.sallery = 250000; Tanish.Id = 1;
    cout<<Tanish.sallery<<endl; cout<<Tanish.favChar<<endl; cout<<Tanish.Id<<endl;
//  use of typedef  
    user use;
    use.name = "Tanish"; use.Id = 20; use.email = "tanish7079vish@gmail.com";
    cout<<use.name<<endl; cout<<use.Id<<endl; cout<<use.email<<endl;
}
