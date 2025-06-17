#include<iostream>
#include<string>
using namespace std;

class binary {
    string s;

    public:
        void getData(void);
        void printData(void);
        void reverseBinary(void);
};

void binary :: getData(){
    cout<<"enter any valid binary number: ";
    cin>>s;
}

void binary :: printData(void){
    for(int i=0 ; i<s.length() ; i++){
        if(s.at(i) != '1' && s.at(i) != '0'){
            cout<<endl<<s<<" is not a valid binary number!!"<<endl;
            exit(0);
        }
    }
    cout<<endl<<"This is a valid binary number"<<endl;
}

void binary :: reverseBinary(void){
    for(int i=0 ; i<s.length() ; i++){
        if(s.at(i) == '1'){
            s.at(i) = '0';
        }
        else if (s.at(i) == '0'){
            s.at(i) = '1';
        }
    }
    cout<<s;
}

int main(){  
    binary b;
    b.getData();
    b.printData();
    b.reverseBinary();
}