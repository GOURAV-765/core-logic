#include<iostream>
using namespace std;

void update(int arr[], int n) {
    cout<<"inside func"<<endl;

    //updating arr 1st element
    arr[0] = 120;

    //printing arr
    for(int i=0; i<3; i++) {
        cout<<arr[i]<<" ";
    } cout<<endl;


    cout<<"going back func"<<endl;

}

int main() {

    int arr[3] = {1, 2, 3};

    update(arr, 3);

    //printing arr
    for(int i=0; i<3; i++) {
        cout<<arr[i]<<" ";
    }
}








//sum of array
// #include <iostream>
// using namespace std;

// int getSum(int arr[], int n) {
//     int sum = 0;

//     for(int i=0; i<n; i++) {
//         sum = sum + arr[i];
//     }

//     return sum;
// }

// int main() {
//     int size;
//    cin>>size;

//    int arr[100];

//    for(int i=0; i<size; i++) {
//     cin>>arr[i];
//    }

//    cout<< "sum of array is "<< getSum(arr, size) <<endl;

//    return 0;
// }






















