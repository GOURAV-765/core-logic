#include <iostream>
using namespace std;

int main() {

//     int n;
//     cin>>n;

//     int i = 1;

//     while(i<=n) {
//         cout<<i<<" ";
//         i = i+1;
//     }
                  
     // SUM//
    //  int n;
    //  cin>>n;

    //  int i = 1;
    //  int sum = 0;

    //  while(i<=n) {
    //     sum = sum + i;
    //     i = i+1;
    //  }

    //  cout<< " sum is "<< sum << endl;

    //sum of even number
    // int  n;
    // cin >>n;

    // int i = 2;
    // int sum = 0;

    // while(i<=n) {
    //     sum = sum + i;
    //     i = i+2;
    // }

    // cout <<" sum of even number is "<< sum << endl;


    // Prime or Not //
    int n;
    cin >> n;

    int i = 2;
    while(i<n) {
        if (n%i==0) {
            cout<< "Not Prime "<<endl;
        }
        else{
            cout<<" prime for "<<i<<endl;
        }
        i = i+1;
    }




 }