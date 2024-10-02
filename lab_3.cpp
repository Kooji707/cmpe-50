#include <iostream>
#include <iomanip>

using namespace std;

int main () {
    double grades[2][5];
    double homeworkBest, homeworkWorst, homeworkAverage = 0;
    double labBest, labWorst, labAverage = 0;
    double temp = 0;

    cout << "Please enter five HW scores [0 - 100]: \n";
    for (int i = 0; i < 5; i++) {
        cin >> grades[0][i];
    }
    
    cout << "Please enter five lab scores [0 - 100]: \n";
    for (int i = 0; i < 5; i++) {
        cin >> grades[1][i];
    }

    // cout << "Best homework score: ";
    homeworkBest = grades[0][0];
    for (int i = 0; i < 5; i++) {
        if (grades[0][i] > homeworkBest) {
            homeworkBest = grades[0][i];
        }
    }
    // cout << homeworkBest << "\n";

    homeworkWorst = grades[0][0];
    // cout << "Worst homework score: ";
    for (int i = 0; i < 5; i++) {
        if (grades[0][i] < homeworkWorst) {
            homeworkWorst = grades[0][i];
        }
    }
    // cout << homeworkWorst << "\n";

    temp = 0;
    // cout << "Average homework score: ";
    for (int i = 0; i < 5; i++) {
        temp += grades[0][i]; 
    }
    homeworkAverage = temp/5;
    // cout << homeworkAverage << "\n";

    // cout << "Best lab score: ";
    labBest = grades[1][0];
    for (int i = 0; i < 5; i++) {
        if (grades[1][i] > labBest) {
            labBest = grades[1][i];
        }
    }
    // cout << labBest << "\n";

    // cout << "Worst lab score: ";
    labWorst = grades[1][0];
    for (int i = 0; i < 5; i++) {
        if (grades[1][i] < labWorst) {
            labWorst = grades[1][i];
        }
    }
    // cout << labWorst << "\n";

    temp = 0;
    // cout << "Average lab score: ";
    for (int i = 0; i < 5; i++) {
        temp += grades[1][i];
    }
    labAverage = temp/5;
    // cout << labAverage << "\n";\

    double overallAverage = (homeworkAverage + labAverage) / 2;
    bool is_passed;

    // cout << "Overall average: " << overallAverage << "\n";

    cout << "    ";
    for (int i = 1; i <= 5; i++) {
        cout << setw(4) << i << "   ";
    }
    cout << setw(6) << "BEST" << setw(7) << "WORST" << setw(7) << "AVG\n";

    cout << "     ";
    for (int i = 0; i < 56; i++) {
        cout << "*";
    }
    cout << "\n";

    cout << left << setw(4) << "HW";
    for (int i = 0; i < 5; i++) {
        cout << right << fixed << showpoint << setprecision(2) << setw(7) << grades[0][i];
    }
    cout << right << setw(7) << homeworkBest;
    cout << right << setw(7) << homeworkWorst;
    cout << right << setw(7) << homeworkAverage;
    cout << "\n";
    
    cout << left << setw(4) << "LAB";
    for (int i = 0; i < 5; i++) {
        cout << right << fixed << showpoint << setprecision(2) << setw(7) << grades[1][i];
    }
    cout << right << setw(7) << labBest;
    cout << right << setw(7) << labWorst;
    cout << right << setw(7) << labAverage;
    cout << "\n\n";

    double columnAverage;
    cout << left << setw(4) << "AVG";
    for (int i = 0; i < 5; i++) {
        columnAverage = (grades[0][i] + grades[1][i]) / 2;
        cout << right << setw(7) << columnAverage;
    }
    cout << "  Overall: " << overallAverage << "\n";

    if ( homeworkAverage < 50 ) {
        is_passed = false;
        cout << "I'm sorry to inform you that you failed the class, because your performance in homework was <50%. Try again next semester.\n";
    } else if ( labAverage < 50 ) {
        is_passed = false;
        cout << "I'm sorry to inform you that you failed the class, because your performance in lab was <50%. Try again next semester.\n";
    } else {
        is_passed = true;
    }

    return 0;
}

// Output:
// Please enter five HW scores [0 - 100]: 
// 45
// 32
// 90
// 99
// 70
// Please enter five lab scores [0 - 100]: 
// 12
// 30
// 50
// 22
// 3.5
//        1      2      3      4      5     BEST  WORST   AVG
//      ********************************************************
// HW    45.00  32.00  90.00  99.00  70.00  99.00  32.00  67.20
// LAB   12.00  30.00  50.00  22.00   3.50  50.00   3.50  23.50

// AVG   28.50  31.00  70.00  60.50  36.75  Overall: 45.35
// I'm sorry to inform you that you failed the class, because your performance in lab was <50%. Try again next semester.

// #include <iostream>

// using namespace std;

// int main () {
//     int arr[3][3];

//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//             cin >> arr[i][j];
//         }
//     }
    
//     cout << "Array inputted: \n";
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//             cout << arr[i][j] << " ";
//         }
//         cout << "\n"; 
//     }
    
//     if (arr[1][0] == 0 && arr[2][0] == 0 && arr[2][1] == 0 ) {
//         cout << "This is matrix is upper triangular. \n";
//     } else if (arr[0][1] == 0 && arr[0][2] == 0 && arr[1][2] == 0 ) {
//         cout << "This is matrix is lower triangular. \n";
//     } else {
//         cout << "This is matrix is neither upper triangular nor lower triangular. \n";
//     }
    
//     return 0;
// }