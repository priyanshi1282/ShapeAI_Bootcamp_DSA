// date : 04-09-2021
// prog2 : largest number amongest three number
#include <iostream>
using namespace std;
double maxNumber(double num1, double num2, double num3);  //returns max out of three passed parameters
int main()
{
    double num1, num2, num3;

    //takes three number
    cout << "Enter first number : ";
    cin >> num1;
    cout << "Enter second number : ";
    cin >> num2;
    cout << "Enter third number : ";
    cin >> num3;

    // calling function maxNumber()
    double max= maxNumber(num1,num2,num3);
    cout<<"\nLargest number is "<<max;

    return 0;
}
double maxNumber(double num1, double num2, double num3)
{
    if (num1 > num2 && num1 > num3)
        return num1;
    else if (num2 > num1 && num2 > num3)
        return num2;
    return num3;
}
