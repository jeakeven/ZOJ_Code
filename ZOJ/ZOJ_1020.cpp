#include <iostream>
using namespace std;

int main()
{
	int x, y, minX, minY, maxX, maxY;
	
	while(cin >> x >> y && (x || y))
	{
		 minX = minY = 232;
		 maxX = maxY = -232;
		 while(x || y)
		 {
		 	 if(x < minX) minX = x;
			 if(y < minY) minY = y;
			 if(x > maxX) maxX = x;
			 if(y > maxY) maxY = y;
			 cin >> x >> y;
		 }
		 cout << minX << ' ' << minY << ' ' << maxX << ' ' << maxY << endl;
	}
}