// date : 04--09-2021
/* prog6 : print star pattern for n=5

    *
   * *
  * * *
 * * * *
* * * * *

 */
#include <iostream>
using namespace std;
int main()
{
    int n = 5, i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = n - i; j >= 1; j--)
            printf(" ");

        for (j = 1; j <= i; j++)
            cout << "* ";
            
        cout << endl;
    }

    return 0;
}
