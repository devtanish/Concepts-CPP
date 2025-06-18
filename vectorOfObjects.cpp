#include<iostream>
#include<vector>
#include<string>
using namespace std;

struct SchoolForm{
    int number; float sallery; string name; string schoolName;
};

int main() {
    vector<SchoolForm> array;
    struct SchoolForm schoolForm;
    cout<<"Enter the value of number: "; cin>>schoolForm.number; 
    cout<<"Enter the value of sallery: "; cin>>schoolForm.sallery; 
    cout<<"Enter your name: "; cin>>schoolForm.name; 
    cout<<"Enter your school name: "; cin>>schoolForm.schoolName; 
    // array.push_back({
    //     number: 1,
    //     sallery: 1000,
    //     name: "Tanish",
    //     schoolName: "Jhonson School",
    // });
    array.push_back(schoolForm);
    for(int i=0 ; i<array.size(); i++){
        cout<<"The value of number: "<<array[i].number<<endl;
        cout<<"The value of sallery: "<<array[i].sallery<<endl;
        cout<<"Your name: "<<array[i].name<<endl;
        cout<<"Your school name: "<<array[i].schoolName<<endl;
    }

}