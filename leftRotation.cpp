// date : 04-09-2021 
// prog : https://www.hackerrank.com/challenges/array-left-rotation/problem
#include <iostream>
using namespace std;
int main()
{
    int n,d,j,temp;

    //takes size of array
    cout<<"enter size of integer array : ";
    cin>>n;

    //allocates array dynamically 
     int *arr= new int[n];

     //checks if memory is allocated or not
     if(!arr)
     {
         cout<<"Fail to allocate memomry.."<<endl;
         return 0;
     }

     //takes elements in array
     cout<<"Enter elements in array : ";
     for(int i=0;i<n;i++)
     cin>>arr[i];

    // takes number of rotation
    cout<<"Enter number of rotation to be performed : ";
    cin>>d;

     //prints array 
     cout<<"\nBefore roration : ";
      for(int i=0;i<n;i++)
        cout<<arr[i]<<"\t";

    //performing roration
    for(int i=1;i<=d;i++)
    {
        temp=arr[0];

        // shifts array one time
        for(j=0;j<n;j++)  
        {
            arr[j]=arr[j+1];
        }
        arr[n-1]=temp;
    }

    //printing output - resultant array after rotation
    printf("\nAfter %d rotations : ",d);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<"\t";
    return 0;
}
