// #include<iostream>
// using namespace std;
// int main() {
 
//     int num = 2;

//     cout<< endl;
//     switch(num){
//         case 1: cout<<"First"<<endl;
//         break;

//         case 2: cout<<"second"<<endl;
//         break;

//         default: cout<< " It is default case"<<endl;
//     }
// }




//calculator program basic
// #include <iostream>
// using namespace std;

// int main() {
//     int a, b;

//     cout<<"Enter value of a"<<endl;
//     cin>>a;
//     cout<<"Enter value of b"<<endl;
//     cin>>b;

//     char op;
//     cout<<"Enter the Operation"<<endl;
//     cin >> op;

//     switch (op)
//     {
//     case '+': cout<<(a+b)<<endl;
//     break;
        
//     case '-':  cout<<(a-b)<<endl;
//     break;

//     case '*': cout<<(a*b)<<endl;
//     break;

//     case '/': cout<<(a/b)<<endl;
//     break;

//     case '%': cout<<(a%b)<<endl;
//     break;
    
//     default:  cout<<"Enter the valid operation"<<endl;
//         break;
//     }

// How many notes need
// #include<iostream>
// using namespace std;
// int main() {

//     int n;


//     cout<<"Enter th value "<<endl;
//     cin>>n;

//     int note100, note20, note10;

//     switch (1)
//     {
//     case 1: {
//         note100 = n/100;
//         n = n % 100;
//         cout<<"100 notes are "<< note100 <<endl;

//         case 2:
//         note20 = n / 20;
//         n = n % 20;
//         cout<<"20 notes are "<<note20<<endl;

//         case 3: 
//         note10 = n/10;
//         n = n % 10;
//         cout<< "10 Rupee Notes are " << note10 << endl;
//         break;
//     }

// }
// } 





//Square
// #include <iostream>
// #include <math.h>
// using namespace std;


//     int power(int a, int b) {

//         int ans = 1;

//         for(int i = 1; i<=b; i++) {
//             ans = ans * a;
//         }
//         return ans;
//     }
    

//     int main() {
//     int a , b;
//     cin>> a >> b;

//    int answer = power(a,b);
//    cout<<"answer is "<<answer<<endl;

//     return 0;


// }


// //Even or odd

// #include<iostream>
// using namespace std;

// bool isEven(int a) {
//     if(a&1) {
//         return 0;
//     }
//     else {
//         return 1;
//     }
// }
// int main() {

//     int num;
//     cin>>num;

//     if(isEven(num)) {
//         cout<<"its Even "<<endl;
//     }
//     else{
//         cout<<"Its odd"<<endl;
//     }

// }


//ncr
// #include<iostream>
// using namespace std;

// int factorial(int n) {

//     int fact = 1;

//     for(int i = 1; i<=n; i++){
//         fact = fact * i;
//     }
//     return fact;
// }

// int nCr(int n, int r) {

//     int num = factorial(n);

//     int denom = factorial(r) * factorial(n-r);

//    int ans = num/denom;
//    return ans;
// }

// int main() {

//       int n, r;

//     cout << "Enter n and r: ";
//     cin >> n >> r;

//     cout << "nCr = " << nCr(n, r) << endl;

//     return 0;
// }


// //Counting
// #include<iostream>
// using namespace std;

// //Function signature
// void printcounting(int n) {
// //Function Body
//     for (int i = 1; i<=n ; i++) {
//         cout<< i <<" ";
//     }
// }

// int main() {
//     int n;
//     cin>>n;


//     //callFunction
//     printcounting(n);

//     return 0;
// }


//prime or not
  #include<iostream>
  using namespace std;

  bool isprime(int n) {

    for( int i = 2; i<n; i++) {
        if (n%i == 0) {
            return  0;
        }
    }
    return 1;
    }
    int main() {

        int n;
        cin>>n;

        if (isprime(n)) {
            cout<<" is a prime no "<<endl;
        }
        else {
            cout<<"Not a prime no "<<endl;
        }
            return 0;
    }
  































