#include<iostream>
#include<vector>
using namespace std;


int main() {
    vector<int> vec;

    cout<<"size = " <<vec.size()<<endl; //vector size function 
    vec.push_back(25);//push back
    vec.push_back(45);//push back
    vec.push_back(65);//push back

    cout<<"after pushback "<<vec.size()<<endl;

    vec.pop_back(); //65


    // for(int val : vec) { //For each loop
    //     cout<<val<<endl;
    // }

    cout<<vec.front()<<endl;  //front vec function
    cout<<vec.back()<<endl; //back vec function
    cout<<"at function are "<<vec.at(1)<<endl;  //at function


    return 0;
}