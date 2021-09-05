// date : 04-09-2021
// prog4 : fibonacci series
#include <iostream>
using namespace std;
int main()
{
    int n;

    //takes number of terms to be printed of series
    cout << "Enter number of terms to be printed of Fibonacci series : ";
    cin >> n;
    int first_term = 0, second_term = 1, next_term;
    cout << "Fibonacci series :\n";

    //iteration method to calculate next term in series
    for (int i = 1; i <= n; i++)
    {
        cout << "\t" << first_term;
        next_term = first_term + second_term;
        first_term = second_term;
        second_term = next_term;
    }
    return 0;
}
