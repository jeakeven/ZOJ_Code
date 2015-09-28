#include <iostream>
#include <cstring>
 
using namespace std;
 
int g[1000][1000];
 
int main()
{
    int n, m;
    int x, y, i, j;
    int sum;
    while(cin >> n)
    {
        if(!n) break;
        cin >> m;
        memset(g, 0, n*n);
        for(i = 0; i < m; i++)
         {
             cin >> x >> y;
             g[x-1][y-1] = 1;
             g[y-1][x-1] = 1;
         }
         for(i = 0; i < n; i++)
         {
            sum = 0;
            for(j = 0; j < n; j++)
                sum += g[i][j];
            if(sum % 2 == 1)
            {
                cout << '0' << endl;
                break;
            }
         }
         if(i == n)
            cout << '1' << endl;
    }
}