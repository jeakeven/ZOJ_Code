#include <iostream>
using namespace std;

#define MAX 1000

int pre[MAX];
int visit[MAX];
int N,M;

void InitPre()
{
	for(int i = 0; i <= N; i++)
	{
		pre[i] = i;
		visit[i] = 0;
	}
}
int find(int x)
{
	if(x == pre[x]) return x;
	return pre[x] = find(pre[x]);
}

void Merge(int a, int b)
{
	a = find(a);
	b = find(b);
	if(a != b)
		pre[b] = a;
}

int main()
{
	int i, j, a, b;
    while(cin >> N, N)
	{
		cin >> M;
		InitPre();
		for(i = 1; i <= M; i++)
		{
			cin >> a >> b;
			Merge(a, b);
		}
		for(i = 1; i <= N; i++)
		{
			visit[find(i)] = 1;
		}
		for(i = 1, j = 0; i <= N; i++)
		{
			if(visit[i]) j++;
		}
		cout << j - 1 << endl;
	}
}