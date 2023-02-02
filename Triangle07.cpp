#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "ENTER THE NUMBER OF N VALUE: ";
    cin >> n;
    for(int row=n; row>=1; row--)
    {
        for(int col=row; col>=1; col--)
        {
            cout << col << " ";
        }
        cout << endl;
    }
    return 0;
}
/*
ENTER THE NUMBER OF N VALUE: 5
5 4 3 2 1 
4 3 2 1 
3 2 1 
2 1 
1
*/
