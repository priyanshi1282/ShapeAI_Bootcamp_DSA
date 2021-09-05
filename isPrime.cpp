// date : 04-09-2021
// prog5 : check given number is prime nor not
#include <iostream>
using namespace std;
bool isPrime(long num);  // returns true for prime number else false
int main()
{
    long num;

    //takes integer as inpout
    cout << "Enter an integer number : ";
    cin >> num;
    if (num <= 1)
    {
        cout << "Prime numbers are greater than 1 " << endl;
        return 0;
    }
    if (isPrime(num))
    {
        cout << num << " is Prime number" << endl;
    }
    else
    {
        cout << num << " is not a Prime number" << endl;
    }
    return 0;
}
bool isPrime(long num){
    for(int i=2;i*i<=num;i++)
    {
        if(num%i==0)     // checkinng for non-prime number
        return false;
    }
    return true;
}