#include <iostream>
#include <string>
using namespace std;

void stringLength () {
    int stringLength = 11;
    char originalString [stringLength];
    int counter = 0;
    cout << "Input the string and signify the ending with a \"!\"\n";
    while (counter < stringLength) {
        cin >> originalString [counter];
        if (originalString [counter] == '!') {
            break;
        }
        counter++;
    }

    cout << "string you gave was: " << originalString << "\n";
    cout << "string length is: " << counter << "\n";
    
    char reversedString [counter];

    for (int i = counter-1; i >= 0; i--) {
        cout << originalString [i];
    }

    cout << "\n";

    return;
}

void intArray () {

    int integerArray[10];
    cout << "Enter 10 integers:\n";
    for (int i = 0; i < 10; i++) {
        cin >> integerArray[i];
    }

    cout << "The integer array is: ";
    for (int i = 0; i < 10; i++) {
        cout << integerArray[i] << " ";
    }
    cout << "\n";

    for (int i = 0; i < 10; i++) {
        for (int j = i+1; j < 10; j++) {
            if (integerArray[i] < integerArray[j]) {
                int temp = integerArray[i];
                integerArray[i] = integerArray[j];
                integerArray[j] = temp;
            }
        }
    }

    int largest = integerArray[0];
    for (int i = 0; i < 10; i++) {
        if (integerArray[i] < largest) {
            cout << "The second largest is: " << integerArray[i] << "\n";
            break;
        }
    }

    return;
}

int main () {
    int selection;
    while (selection != 3) {
        cout << "Would you like to select stringLength (1) or intArray (2) program? 3 to exit.\n";
        cin >> selection;
        if (selection == 1) {
            stringLength ();
        }
        else if (selection == 2) {
            intArray ();
        } else if (selection == 3) {
            break;
        }
    }
    cout << "Thank you for your patronage!\n";
}