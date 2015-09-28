#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
	int n, m, i,k;
	vector<long> vec;

	while(cin >> n)
	{
		vec.clear();
		for(i = 0; i < n; i++)
		{
			cin >> k;
			vec.push_back(k);
		}
		cin >> m;
		for(; i < m + n; i++)
		{
			cin >> k;
			vec.push_back(k);
		}
		sort(vec.begin(), vec.end());
		
		k = (vec.size() - 1) / 2;
		
		cout << vec.at(k) << endl;
	}
	return 0;
}