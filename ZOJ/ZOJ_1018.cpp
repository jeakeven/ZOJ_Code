#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	int n,score,hash[110];
	while (cin>>n,n)
	{
	    memset(hash,0,sizeof(hash));
	    for (int i=0;i<n;i++)
	    {
	        cin>>score;
	        hash[score]++;
	    }
	    cin>>score;
	    cout<<hash[score]<<endl;
	}
	
	return 0;
}