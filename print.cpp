#include "print.h"
void print(int n)
{

    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (x[i] == j)
            {
                cout << "Q ";
            }
            else
            {
                cout << "* ";
            }
        }
        cout << endl;
    }
    c++;
}
