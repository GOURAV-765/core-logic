#include<iostream>
#include<vector>
using namespace std;


int main() {
    vector<int> vec;
    vec.push_back(25);
    vec.push_back(23);
    vec.push_back(21);
    vec.push_back(78);//after print add 2 more
    vec.push_back(91);

    cout<<vec.size()<<endl;
    cout<<vec.capacity()<<endl;
   

    return 0;
}