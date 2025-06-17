#include<iostream>
using namespace std;
int main(){
//  Pointers how to initilize a pointer and use of '*' and '&' in pointers
    int value = 2;
    int* address1 = &value;
    int** address2 = &address1;
    int*** address3 = &address2; 
 
    cout<<address1<<endl;
    cout<<address2<<endl;
    cout<<address3<<endl;
    cout<<&address1<<endl;  //& used to get the address of any variable
    cout<<*address1<<endl;  //* used to return the address value
    cout<<**address2<<endl;
    cout<<***address3<<endl<<endl<<endl;

//  Array of pointers
    int Array[] = {1,2,3,4,5,6};
    int* AddressOfArrays = Array;

    for(int i=0 ; i<sizeof(Array)/sizeof(Array[0]) ; i++){
        cout<<*AddressOfArrays<<endl;
        AddressOfArrays++;
    }
}