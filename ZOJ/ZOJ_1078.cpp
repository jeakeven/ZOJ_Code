#include<iostream>
#include<string>
using namespace std;
 
string s1,s2;
int a[101],k;
 
void postOrder(int l,int h){
	
	if( h >= l ){
		int n=a[k++];
		postOrder(l,n-1);
		postOrder(n+1,h); 
		cout<<s2[n];
	}
}
  
int main()
{
    while( cin>>s1>>s2 ){
		k = 0;
		for(int i=0;i<s1.length();++i)
		   for(int j=0;j<s2.length();++j)
		          if(s1[i]==s2[j]) a[i]=j;      
		
		postOrder(0,s2.length()-1);
		
		cout<<endl;
    }
}