#include <iostream>
#include <stack>
using namespace std;
 
int main()
{
    int a, n,i, c;
    while(cin >> a && cin  >> n)
    {
        stack<int> s;
        for(c=0, i=1; i<=n; i++)
        {
            int t = (n - i +1) *a;
            s.push( (t+c)%10);
            c = (t+c) / 10;
        }
        if(c > 0)
        {
            s.push(c);
        }
        while(!s.empty())
        {
            cout << s.top();
            s.pop();
        }
        cout << endl;
    }
}