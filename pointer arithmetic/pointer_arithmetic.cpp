#include<iostream>

using namespace std;

int main(){
    int a = 10; // address 800
    int* ap = &a; // pointer address 900

    // prints same value of a variable
    cout<<a<<endl;
    cout<<*ap<<endl;
    
    // prints same  address of a variable
    cout<<&a<<endl;
    cout<<ap<<endl;

    // prints address of pointer
    cout<<&ap<<endl;



    // addition on variable a 
    cout<<a<<endl;
    a = a + 1; // 800 = 800 + 1 value of memory 10 will be changed ( 10 = 10 + 1 )
    cout<<a<<endl;

    cout<<*ap<<endl;
    *ap = *ap + 1;
    cout<< *ap;
   


    cout<<ap<<endl;
    ap = ap+1; // 900 = 900 + 1 value of memory is address 800 ( 800 = 800 + 1)
    cout<<ap<<endl;


    

}