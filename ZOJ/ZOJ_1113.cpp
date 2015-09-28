#include <iostream>
#include <math.h>
using namespace std;
 
int main()
{
    int n, m, left, right;
    int deep_n, deep_m, deep_diff;
    int count;
     
    while(cin >> m >> n)
    {
        count = 0;
        if(m==0 && n== 0)
            break;
        deep_n = (int)(log(n)/log(2)+1);
        deep_m = (int)(log(m)/log(2)+1);
         
        deep_diff = deep_n - deep_m;
         
        count = (int)pow(2.0, deep_diff);
             
        left = count * m;
        right = left + count - 1;
         
        count -= 1;
         
        if(n>=left && n<=right)
            count += n-left+1;
        if(deep_n == deep_m)
            count = 1;
             
        cout << count << endl;  
    }
     
    return 0;
}