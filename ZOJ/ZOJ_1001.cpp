#include <iostream>

using namespace std;

const int MAX = 11;

int N, M;
int arr[MAX][MAX];

int main()
{
	int i, j;
	int tmp, cnt;
	while(cin >> M >> N, M)
	{
		cnt = 0;
		for(i = 0; i < M; i++)
		{
			for(j = 0; j < N; j++)
			{
				cin >> arr[i][j];
			}
		}
		
		for(i = 0; i < M; i++)
		{
			for(j = 0; j < N; j++)
			{
				cin >> tmp;
				arr[i][j] += tmp;
			}
		}
		
		for(i = 0; i < M; i++)
		{
			for(j = 0; j < N; j++)
			{
				if(arr[i][j] != 0 ) break;	
			}
			if(j == N) cnt++;
		}
		
		for(i = 0; i < N; i++)
		{
			for(j = 0; j < M; j++)
			{
				if(arr[j][i] != 0 ) break;
			}
			if(j == M) cnt++;
		}
		
		cout << cnt << endl;					
	}
}
