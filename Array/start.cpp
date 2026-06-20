#include <iostream>
using namespace std;

void printArray(int arr[], int size) {
    cout << "Printing array" << endl;

    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
    cout << "Printing Done" << endl;
}

int main() {

    int number[15];

    int second[3] = {5, 7, 11};

    cout << "Value of index 2: " << second[2] << endl;

    int third[15] = {2, 7};
    printArray(third, 15);

    int fourth[10] = {0};
    printArray(fourth, 10);

    int fifth[10] = {1};
    printArray(fifth, 10);

    int fifthSize = sizeof(fifth) / sizeof(int);
    cout << "Size of fifth array = " << fifthSize << endl;

    char ch[5] = {'a', 'b', 'c' , 'd' , 'e'};
    cout<< ch[3] << endl;

    for(int i= 0; i<5; i++) {
      cout<<ch[i]<<" ";
    }

    cout<<"print done"<<endl;

    cout << "Everything is Fine"<<endl;

    return 0;
}