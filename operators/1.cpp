#include <iostream>
using namespace std;

int main() {

    int a = 4;
    int b = 6;

    cout<<" a&b " << (a&b) << endl; //AND Operator
    cout<<" a|b " << (a|b) << endl; //OR operator
    cout<<" ~a " << ~a << endl;     //NOT operator
    cout<<" a^b " << (a^b) << endl; //XOR Operator

     //Shift Operator
    cout<< (17<<1)<<endl;  //Right Shift Operator
    cout<<(17>>2)<<endl;   //Left Shift Operator
    cout<<(19<<1)<<endl;
    cout<<(19>>2)<<endl;

    //increament Operator
    int i =  7;

    cout<<(++i)<<endl;  //Pre Increment 
    cout<<(i++)<<endl;   // Post Increment
    cout<<(i--)<<endl;
    cout<<(--i)<<endl;





}