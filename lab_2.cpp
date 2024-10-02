// #include <iostream>
// #include <string>
// using namespace std;

// void add(double doubleA, double doubleB) {
//     cout << "Input 2 doubles:\n";
//     cin >> doubleA;
//     cin >> doubleB;
//     cout << "The sum of " << doubleA << " and " << doubleB << " is " << (doubleA + doubleB) << "\n";

//     return;
// }

// void add(int intA, int intB) {
//     cout << "Input 2 integers:\n";
//     cin >> intA;
//     cin >> intB;
//     cout << "The sum of " << intA << " and " << intB << " is " << (intA + intB) << "\n";

//     return;
// }

// void add(string& stringA, string& stringB) {
//     cout << "Input 2 strings:\n";
//     cin >> stringA;
//     cin >> stringB;
//     string stringSum = stringA + " " + stringB;
//     cout << "The sum of " << stringA << " and " << stringB << " is " << stringSum << "\n";

//     return;
// }


// int main () {
//     int exit = 0;
//     int selection;
//     double doubleA, doubleB;
//     int intA, intB;
//     string stringA;
//     string stringB;
//     cout << "Would like to add two doubles, two int, or two strings? (Enter 1 for double, Enter 2 for int, Enter 3 for strings)\n";
//     while (exit == 0) {
//         cin >> selection;
//         if (selection == 1) {
//             add(doubleA, doubleB);
//             exit = 1;
//             break;
//         } else if (selection == 2) {
//             add(intA, intB);
//             exit = 1;
//             break;
//         } else if (selection == 3) {
//             add(stringA, stringB);
//             exit = 1;
//             break;
//         } 
//         cout << "must select 1, 2, or 3\n";
//     }
//     return 0;
// }

// // Output:
// // Would like to add two doubles, two int, or two strings? (Enter 1 for double, Enter 2 for int, Enter 3 for strings)
// // 1
// // Input 2 doubles:
// // 11.11
// // 22.23
// // The sum of 11.11 and 22.23 is 33.34

// // Would like to add two doubles, two int, or two strings? (Enter 1 for double, Enter 2 for int, Enter 3 for strings)
// // 2
// // Input 2 integers:
// // 6
// // 4
// // The sum of 6 and 4 is 10

// // Would like to add two doubles, two int, or two strings? (Enter 1 for double, Enter 2 for int, Enter 3 for strings)
// // 3
// // Input 2 strings:
// // hi
// // hello
// // The sum of hi and hello is hi hello



// #include <iostream>
// #include <string>
// using namespace std;

// int main () {
//     int stringLength = 11;
//     char originalString [stringLength];
//     int counter = 0;
//     cout << "Input the string and signify the ending with a \"!\"\n";
//     while (counter < stringLength) {
//         cin >> originalString [counter];
//         if (originalString [counter] == '!') {
//             break;
//         }
//         counter++;
//     }

//     cout << "string you gave was: " << originalString << "\n";
//     cout << "string length is: " << counter << "\n";
    
//     char reversedString [counter];

//     for (int i = counter-1; i >= 0; i--) {
//         cout << originalString [i];
//     }

//     cout << "\n";

//     return 0;
// }

// Input the string and signify the ending with a "!"
// cmpe50!
// string you gave was: cmpe50!
// string length is: 6
// 05epmc

// #include <iostream>
// #include <string>
// using namespace std;

// int main () {

//     int integerArray[10];
//     cout << "Enter 10 integers:\n";
//     for (int i = 0; i < 10; i++) {
//         cin >> integerArray[i];
//     }

//     cout << "The integer array is: ";
//     for (int i = 0; i < 10; i++) {
//         cout << integerArray[i] << " ";
//     }
//     cout << "\n";

//     for (int i = 0; i < 10; i++) {
//         for (int j = i+1; j < 10; j++) {
//             if (integerArray[i] < integerArray[j]) {
//                 int temp = integerArray[i];
//                 integerArray[i] = integerArray[j];
//                 integerArray[j] = temp;
//             }
//         }
//     }

//     int largest = integerArray[0];
//     for (int i = 0; i < 10; i++) {
//         if (integerArray[i] < largest) {
//             cout << "The second largest is: " << integerArray[i] << "\n";
//             break;
//         }
//     }

//     return 0;
// }

// Enter 10 integers:
// 1
// 2
// 3
// 4
// 5
// 1
// 2
// 3
// 4
// 5
// The integer array is: 1 2 3 4 5 1 2 3 4 5 
// The second largest is: 4