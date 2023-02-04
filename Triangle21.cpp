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
            cout << "  ";
        }
        for(int col=1; col<=row; col++)
        {
            cout << col << " ";
        }
        for(int col=row-1; col>=1; col--)
        {
            cout << col << " ";
        }
        cout << endl;
    }
    
    
    for(int row=n-1; row>=1; row--)
    {
        for(int col=1; col<=n-row; col++)
        {
            cout << "  ";
        }
        for(int col=1; col<=row; col++)
        {
            cout << col << " ";
        }
        for(int col=row-1; col>=1; col--)
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
      1 2 1
    1 2 3 2 1
  1 2 3 4 3 2 1
1 2 3 4 5 4 3 2 1
  1 2 3 4 3 2 1 
    1 2 3 2 1 
      1 2 1
        1
*/
