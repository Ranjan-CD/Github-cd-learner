#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;
char a[100];
int n, i;
int main()

{
    cout << "\nenter string: ";
    cin >> a;
    n = strlen(a);

    if (a[0] == 'a' && (a[n - 1] == 'a' || a[n - 1] == 'b') && a[n - 2] == 'c')
    {
        for (i = 1; i < n - 2; i++)
        {
            if (a[i] != 'b')
            {
                cout << "string is not accepted";
                exit(0);
            }
        }
        cout << "string is accepted";
    }

    else
        cout << "string is not accepted";
}
