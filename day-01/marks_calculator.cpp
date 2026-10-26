
#include <iostream>
using namespace std;

int main()
{
    int maths, science, english, socialScience, hindi;
    int total;
    double percentage;
    const int maximumMarks = 500;

    cout << "Enter Maths marks: ";
    cin >> maths;

    cout << "Enter Science marks: ";
    cin >> science;

    cout << "Enter English marks: ";
    cin >> english;

    cout << "Enter Social Science marks: ";
    cin >> socialScience;

    cout << "Enter Hindi marks: ";
    cin >> hindi;

    total = maths + science + english + socialScience + hindi;
    percentage = total * 100.0 / maximumMarks;

    cout << "Total marks: " << total
         << "/" << maximumMarks << endl;
    cout << "Percentage: " << percentage << "%" << endl;

    return 0;
}
