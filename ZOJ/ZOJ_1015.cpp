#include <iostream>
#include <cstdio>
#include <cstring>
 
using namespace std;
int a,b,k;
 
int main()
{
	while(cin >> a >> b >> k)
	{
		if(a == 0 && b == 0)break;
		int flag = 1;
		int t = a,t1 = b;
	
		while(k--)
		{
			int r = t % 10;
			t /= 10;
			int r1 = t1 % 10;
			t1 /= 10;
			if(r != r1) {flag = 0; break;}
		}
		if(!flag)cout << a + b << endl;
		else cout << "-1" << endl;
	}
	return 0;
}