#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "ENTER THE NUMBER OF N VALUE: ";
    cin >> n;
    for(int row=1; row<=n; row++)
    {
        for(int spa=1; spa<=n-row; spa++)
        {
            cout << " ";    
        }
        for(int col=n; col>=n-row+1; col--)
        {
            cout << col;
        }
        cout << endl;
    }
    return 0;
}
/*
ENTER THE NUMBER OF N VALUE: 5
    5
   54
  543
 5432
54321
*/
