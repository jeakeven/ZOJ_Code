#include<iostream>
#include<string>
#include<algorithm>
#include<fstream>
#include<functional>

using namespace std;

typedef struct
{
        string id;
        string cometime;
        string levetime;
}Person;

bool comp_cometime(Person p1,Person p2)
{
        return p1.cometime<p2.cometime;
}

bool comp_levetime(Person p1,Person p2)
{
        return p1.levetime>p2.levetime;
}

int main()
{
	int i,j,n,m;
	Person p[100];
	while (cin>>n)
	{
		for (i=0;i<n;i++)
		{
			cin>>m;
			for (j=0;j<m;j++)
			{
				cin>>p[j].id;
				cin>>p[j].cometime;
				cin>>p[j].levetime;
			}
			sort(p,p+m,comp_cometime);
				cout<<p[0].id<<" ";
			sort(p,p+m,comp_levetime);
				cout<<p[0].id<<endl;
		}
	}
	return 0;
}