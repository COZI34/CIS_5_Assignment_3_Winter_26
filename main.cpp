// CIS_5 Week 3 Example – Score Analyzer with Pre-filled Data

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    const int SIZE = 30;
    int scores[SIZE] = {
        78, 92, 65, 88, 45, 100, 72, 81, 59, 96,
        84, 67, 91, 53, 77, 89, 62, 98, 74, 85,
        48, 93, 70, 82, 66, 95, 55, 87, 79, 64
    };

    int sum = 0;
    int highest = scores[0];
    int lowest = scores[0];
    int passedCount = 0;
    int aCount = 0;

    for (int i = 0; i < SIZE; i++) {
        sum += scores[i];

        if (scores[i] > highest)
            highest = scores[i];

        if (scores[i] < lowest)
            lowest = scores[i];

        if (scores[i] >= 60)
            passedCount++;

        if (scores[i] >= 90)
            aCount++;
    }
    double average = static_cast<double>(sum) / SIZE;
    cout << "Number of students: " << SIZE << endl;
    cout << fixed << setprecision(2);
    cout << "Average score:      " << average << endl;
    cout << "Highest score:      " << highest << endl;
    cout << "Lowest score:       " << lowest << endl;
    cout << "Students passed:    " << passedCount << "  (>= 60)" << endl;
    cout << "Students with A:    " << aCount << "   (>= 90)" << endl;

    cout << "Scores in original order:" << endl;
    for (int score : scores) {
        cout << score << " ";
    }
    
    cout << endl;

    cout << "Scores in reverse order:" << endl;
    for (int i = SIZE - 1; i >= 0; i--) {
        cout << scores[i] << " ";
    }
    cout << endl;

    return 0;
}
