include "NQueens.h"
include "place.h"
include "print.h"

int x[200];
static int c = 0;


int main()
{
    int i, n, j;
    cout << "Enter total Number of Queens" << endl;
    cin >> n;
    cout << endl;
    NQueens(1, n);
    return 0;

}
