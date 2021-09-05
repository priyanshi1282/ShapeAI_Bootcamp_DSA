// date : 04-09-2021    
// prog1 : swap two numbers
#include <iostream>
using namespace std;
void swap(float *num1,float *num2);  // call by address ,changes reflected on actual parameters
int main()
{
    float num1,num2;

    // takes input of two numbers 
    cout<<"Enter First number : ";
    cin>>num1;
    cout<<"Enter Second number : ";
    cin>>num2;

    cout<<"\nBefore Swapping :"<<endl;
    cout<<"num1="<<num1<<"\tnum2="<<num2<<endl;

    //function callling 
    swap(&num1,&num2);

    cout<<"\nAfter Swapping :"<<endl;
    cout<<"num1="<<num1<<"\tnum2="<<num2<<endl;

    return 0;
}
void swap(float *num1,float *num2)
{
    float temp;
    temp= *num1;
    *num1= *num2;
    *num2=temp;
}