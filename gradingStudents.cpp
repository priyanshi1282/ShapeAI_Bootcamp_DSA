// date : 05-09-2021
// prog : https://www.hackerrank.com/challenges/grading/problem
#include <iostream>
using namespace std;
int main()
{
    int n;

    //takes total no. of student
    cout << "Enter total number of students : ";
    cin >> n;

    //dynamic array for marks of n students
    int *marks = new int[n];

    //checking memory allocation
    if (!marks)
    {
        cout << "failed to allocate memory.." << endl;
        return 0;
    }

    //takes marks as input
    cout << "Enter marks of students :" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter marks of student" << i + 1 << " : ";
        cin >> marks[i];
    }

    //printing marks
    cout << "\nBefore rounding off :\nMarks : ";
    for (int i = 0; i < n; i++)
        cout << marks[i] << "\t";

    int  lastDigit;
    for (int m = 0; m < n; m++)
    {
        lastDigit = marks[m] % 10;
        if (marks[m] < 38)
        {
            continue;
        }
        else if (lastDigit == 4 || lastDigit == 9)
        {
            marks[m] += 1;
        }
        else if (lastDigit == 3 || lastDigit == 8)
        {
            marks[m] += 2;
        }
    }

    //printing final marks
    cout << "\nAfter rounding off :\nMarks : ";
    for (int i = 0; i < n; i++)
        cout << marks[i] << "\t";

    // de-allocating memory
    delete marks;
    return 0;
}
