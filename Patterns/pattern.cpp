#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    int i = 1;

    while(i<=n) {
// j is column and i is row
        int j = 1;
        while(j<=n) {
            cout<< "*";
            j = j+1;
        }
        cout<<endl;
        i = i+1;

    }


}