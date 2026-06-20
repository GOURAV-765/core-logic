#include<iostream>
using namespace std;

int linearsearch(int arr[], int size, int target) {

    for(int i= 0; i<size; i++) {
        if(arr[i] == target) { //Found
            return i;
        }
    }
    return -1;//Not Found
}

int main() {
    int arr[] = {1, 5, 3, 9, 6, 8, 71, 56};
    int size = 8;
    int target = 71;

    cout<<linearsearch(arr, size, target)<<endl;

    return 0;
}