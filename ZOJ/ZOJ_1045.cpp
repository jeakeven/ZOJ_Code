#include <iostream>

using namespace std;

int main()
{
	float n;	
	while(cin >> n)	{
		for(int x = 0; x <= n / 5; x++)
		for(int y = 0; y <= n / 3; y++)
		for(int z = 0; z <= 3 * n; z++)
			if((x + y + z == 100) && (15 * x + 9 * y + z <= 3 * n))
				cout << "x=" << x  << ",y=" << y << ",z=" << z << endl;
	}
}