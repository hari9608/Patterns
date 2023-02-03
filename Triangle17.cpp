#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "ENTER THE NUMBER OF N VALUE: ";
    cin >> n;
    int pri = 1;
    for(int row=1; row<=n; row++)
    {
        for(int col=1; col<=row; col++)
        {
            cout << pri++ << " ";
        }
        cout << endl;
    }
    return 0;
}
/*
ENTER THE NUMBER OF N VALUE: 5
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*/
