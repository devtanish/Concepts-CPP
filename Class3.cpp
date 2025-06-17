#include<iostream>
using namespace std;

class dukkan {

    int userId[100];
    int Price[100];
    int count;

    public: 
        void initCount(void){
            count = 0;
        }

        void setUserData(int ID, int price){
            userId[count] = ID;
            Price[count] = price;
            count++;
        }

        void display(void){
            for(int i=0 ; i<count ; i++){
                cout<<userId[i]<<endl;
                cout<<Price[i]<<endl;
            }
        }
};

int main() {
    dukkan d;
    d.initCount();
    d.setUserData(23, 10000);
    d.display();
}