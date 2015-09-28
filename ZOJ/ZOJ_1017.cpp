#include <iostream>
#include <cstring>
using namespace std;

#define INF 0x7fffffff
#define MAX 105

int N;
int graph[MAX][MAX];
int dist[MAX];
bool visited[MAX];

void prime()
{
	int sum = 0;
	
	memset(visited, false, sizeof(visited));
	visited[1] = true;
	
	for(int i = 1; i <= N; i++)
	{
		if(visited[i] == false && dist[i] > graph[1][i])
			dist[i] = graph[1][i];
	}
	
	for(int i = 1; i < N; i++)
	{
		int min = INF, index;
		for(int j = 1; j <= N; j++)
		{
			if(visited[j] == false && min > dist[j])
			{
				min = dist[j];
				index = j;
			}
		}
		visited[index] = true;
		sum += min;
		for(int j = 1; j <= N; j++)
		{
			if(visited[j] == false && dist[j] > graph[index][j])
				dist[j] = graph[index][j];
		}
	}
	
	cout << sum << endl;
}

void InitData()
{
	for(int i = 0; i <= N; i++)
	{
		for(int j = 0; j <= N; j++)
		{
			graph[i][j] = INF;
		}
		dist[i] = INF;
	}
}

int main()
{
	int a, b, value;
	while(cin >> N, N)
	{
		InitData();
		int m = (N - 1) * N / 2;
		for(int i = 0; i < m; i++)
		{
			cin >> a >> b >> value;
			graph[a][b] = graph[b][a] = value;
		}
		prime();
	}
}
