#include <iostream>

using namespace std;

int main()
{
    string str;
    cout << "ENTER THE STRING VALUE: ";
    cin >> str;
    int n = str.size();
    for(int row=1; row<=n; row++)
    {
        for(int col=0; col<row; col++)
        {
            cout << str[col];
        }
        cout << endl;
    }
    return 0;
}
/*
ENTER THE STRING VALUE: hello
h
he
hel
hell
hello
*/
