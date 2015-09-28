#include <iostream>
using namespace std;
 
bool IsWanShu( int num )
{
    int i;
    int sum = 0;
    for(i=1; i<=num/2; i++)
    {
        if(num%i == 0)
        {
            sum += i;
        }
    }
    if(sum == num)
        return true;
    else
        return false;
     
}
 
int main()
{
    int n, i, j;
    int flag;
    int nWanShu[100];
    while(cin >> n )
    {
        j = 0;
        for(i=6; i<=n; i++)
        {
            if( IsWanShu(i))
            {
                nWanShu[j++] = i;
            }
        }
        flag = j-1;
        for(i=0; i<j; i++)
        {
            cout << nWanShu[i];
            if(flag != 0)
            {
                cout << ' ';
                flag--;
            }
        }
                cout << endl;
 
    }
    return 0;
}