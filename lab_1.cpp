// #include <iostream>
// using namespace std;

// int main () {
//     cout << "This is the first Code in CMPE-50 Lab.\n";
//     return 0;
// }
// //The output of the Lab Exercise 1.1.
// //This is the first Code in CMPE-50 Lab.

// #include <iostream>
// #include <cmath>
// using namespace std;

// int main () {
//     int a;
//     int b;
//     cout << "Input a: \n";
//     cin >> a;
//     cout << "Input b: \n";
//     cin >> b;
//     double aToTheB = pow(a, b);
//     cout << a << " to the " << b << "th power is: " << aToTheB << "\n";

//     return 0;
// }

// // The output of the Lab Exercise 1.2.
// // Input a: 
// // 2
// // Input b: 
// // 3
// // 2 to the 3th power is: 8

// #include <iostream>
// #include <cmath>
// using namespace std;

// int main () {
//     int number;
//     int tempNumber = 1;

//     cout << "Input a number you want the factorial of (only accepts positive integers): \n";
//     cin >> number;
//     while (number < 0) {
//         cout << "Only input a positive integer: \n";
//         cin >> number;
//         if (number >= 0) {
//             break;
//         }
//     }
    
//     if (number == 0) {
//         cout << "The factorial " << number << " is 1.\n";
//     } else {
//         for (int i = 1; i <= number; i++) {
//             tempNumber *= i;
//         }
//         cout << "The factorial " << number << " is " << tempNumber << "\n";
//     }
    
// }

//The output of the Lab Exercise 1.4.
// Input a number you want the factorial of (only accepts positive integers): 
// 4
// The factorial 4 is 24

// #include <iostream>
// #include <cmath>
// using namespace std;

// #include <iostream>
// using namespace std;

// int main () {
//     int number;
//     bool is_prime = true;

//     cout << "Input a number bigger than 2 to print a list of the prime numbers from this number to 3: \n";
//     cin >> number;
//     while (number <= 2) {
//         cout << "Must be bigger than 2: \n";
//         cin >> number;
//         if (number > 2) {
//             break;
//         }
//     }

//     for (int i = 3; i <= number; i++) {
//         is_prime = true;
//         for (int j = 2; j < i/2+1; j++) {
//             if (i % j == 0) { 
//                 is_prime = false;
//             }
//         }
//         if(is_prime){
//             cout << i << " is a prime number." << "\n";
//         }
//     }

//     return 0;
// }

// //The output of the Lab Exercise 1.5.
// // Input a number bigger than 2 to print a list of the prime numbers from this number to 3: 
// // 12
// // 3 is a prime number.
// // 5 is a prime number.
// // 7 is a prime number.
// // 11 is a prime number.