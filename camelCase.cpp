// date : 05-09-2021
// prog : https://www.hackerrank.com/challenges/camelcase/problem
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    string str;

    //takes string as input
    cout << "Enter string : ";
    getline(cin, str);
    int i, count = 1;

    for (i = 0; i < str.size(); i++)
    {
         if (str[i] >= 'A' && str[i] <= 'Z')
        {
            count++;
        }
    }

    //print total number of words
    cout << "\nNumber of words : " << count;
    return 0;
}
