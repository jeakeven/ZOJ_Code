#include <iostream>
using namespace std;

unsigned int stack[1000];

int main()
{
	unsigned int m, a, b;
	unsigned long int sum;
	int top = -1;
	while(cin >> m, m)
	{
		cin >> a >> b;
		sum = a + b;
		if(sum == 0) stack[++top] = 0;
		while(sum != 0)
		{
			stack[++top] = sum % m;
			sum /= m;
		}
		while(top != -1) cout << stack[top--];
		cout << endl;
	}	
}