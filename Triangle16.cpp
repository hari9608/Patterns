#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "ENTER THE NUMBER OF N VALUE: ";
    cin >> n;
    for(int row=1; row<=n; row++)
    {
        for(int spa=1; spa<=row-1; spa++)
        {
            cout << " ";    
        }
        for(int col=n; col>=row; col--)
        {
            cout << col;
        }
        cout << endl;
    }
    return 0;
}
/*
ENTER THE NUMBER OF N VALUE: 5
54321
 5432
  543
   54
    5
*/    
