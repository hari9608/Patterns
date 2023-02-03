#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "ENTER THE NUMBER OF N VALUE: ";
    cin >> n;
    for(int row=1; row<=n; row++)
    {
        char pri = 'a';
        for(int col=1; col<=row; col++)
        {
            cout << pri++;
        }
        cout << endl;
    }
    return 0;
}
/*
ENTER THE NUMBER OF N VALUE: 5
a
ab 
abc
abcd
abcde
*/
