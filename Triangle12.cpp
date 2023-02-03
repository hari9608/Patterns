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
        for(int col=1; col<=n-row+1; col++)
        {
            cout << col;
        }
        cout << endl;
    }
    return 0;
}
/*
ENTER THE NUMBER OF N VALUE: 5
12345
 1234
  123
   12
    1
*/
