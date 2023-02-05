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
        if(row > 1)
        {
            int bs = row-2;
            for(int spa=1; spa<=(pow(bs, 2) + bs + 1); spa++) 
                cout << " ";
        }
    
    
        for(int col=1; col<=N-row+1; col++)
        {
            int coliN;
            
            for( coliN=1; coliN<row; coliN++)
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
/*
ENTER THE NO OF TRIANGLE: 5
1 1  1    1      1
 1 21 2  1 2    1 2
   1 2 31 2 3  1 2 3 
       1 2 3 41 2 3 4
             1 2 3 4 5
             */
