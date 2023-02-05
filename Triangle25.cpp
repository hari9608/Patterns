#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cout << "ENTER THE NO OF TRIANGLE: ";
    cin >> N;
    int f=0;
    
    for(int row=1; row<=N; row++)
    {
        int col;
        if(row > 1)                                             // the first row doesn't contain any space 
        {
            int bs = row-2;                                     // n = row - 2 is used to find no of spaces before starting the eac row 
            for(int spa=1; spa<=(pow(bs, 2) + bs + 1); spa++)   // spa before start printing every row in series of 0, 1, 3, 7,.. 
                cout << " ";                                    // (pow(n, 2) + n + 1) is used to find the series of each row if row is greater than 1
        }
    
    
        for(int col=1; col<=N-row+1; col++)
        {
            int coliN;
            
            for( coliN=1; coliN<row; coliN++)                   // coliN is used to print the each row contain row+1-col time values  1 to row  
                cout << coliN << " ";
                
            cout << coliN;
                
            if(!f && col==1 && col==1)
                cout << " ";
    
            for(int spa=1; spa<=(col-1)*2; spa++) 
                cout << " ";
                
            f=1;
        }
        cout << endl;
    }

    return 0;
}
