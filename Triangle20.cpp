#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "ENTER THE NUMBER OF N VALUE: ";
    cin >> n;
    for(int row=1; row<=n; row++)
    {
        for(int col=1; col<=n-row; col++)
        {
            cout << " ";
        }
        for(int col=1; col<=row; col++)
        {
            cout << col << " ";
        }
        cout << endl;
    }
    return 0;
}
/*
ENTER THE NUMBER OF N VALUE: 5
    1
   1 2
  1 2 3
 1 2 3 4
1 2 3 4 5
*/
