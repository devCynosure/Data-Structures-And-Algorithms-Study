#include<iostream>

using namespace std;

// & = address of
// * = d reference 

int main(){
    //declare variable
    // step 1 : allocate 4 byte memory 
    // step 2 : symbol table [ make entry "int a" to its memory allocated "eg - 900"]
    // step 3 : initialise a with value 10 
    int a = 10;

    // declare pointer *pa
    // step 1 : allocate 8 bytes of memory 
    // step 2 : symbol table [ make entry "ponter p to its memory allocated "eg - 950" ]
    // step 3 : initalise pa with address of any variable or 0 ( garbage is really danger in pointers)

    int* pa = &a;
    
    cout<< a <<endl; // checks a in symbol table and output its value
    cout<< *pa <<endl; // pointer routing to another variable by call by reference 

    cout<<&a<<endl; // outputs the address of a variable by refering symbol table
    cout<< pa <<endl; // outputs the address with is stored in pointer variable.

    cout<< &pa <<endl; // outputs the address of poointer variable which is storing a's address

    cout<< sizeof(a)<<endl; // outputs size of variable type
    cout<< sizeof(*pa)<<endl; // outputs size of a because it is refering to a's memory location only
    cout<< sizeof(pa)<<endl; //outputs size of pointer variable 

}