#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "ENTER THE VALUE OF N: ";
    cin >> n;
    for(int row=1; row<=n; row++)
    {
        for(int col=1; col<=n; col++)
            if(row+col <= n+1)
                cout << col;
            else
                cout << " ";
        for(int col=n; col>=1; col--)
            if(row+col > n+1)
                cout << " ";
            else
                cout << col;
        cout << endl;
    }
    
    for(int row=1; row<=n; row++)
    {
        for(int col=1; col<=n; col++)
            if(row >= col)
                cout << col;
            else
                cout << " ";
        for(int col=n; col>=1; col--)
            if(row < col)
                cout << " ";
            else
               cout << col;
        cout << endl;
    }
    return 0;
}
/*
ENTER THE VALUE OF N: 5
1234554321
1234  4321
123    321
12      21
1        1
1        1
12      21
123    321
1234  4321
1234554321
*/
