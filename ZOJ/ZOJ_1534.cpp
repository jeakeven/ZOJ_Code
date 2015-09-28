#include<stdio.h>
#include<string.h>
#include<queue>
#include<algorithm>
using namespace std;
  
long long A[100005],B[100005],n,m,k;
  
int judge(long long v,long long k){
    int i,j=m-1;
    long long sum=0;
    for(i=0;i<n;i++){
        while(j>=0&&B[j]+A[i]>v)j--;
        if(j<0) break;
        sum+=j+1;
        if(sum>=k) return 1;
    }
    return sum>=k;
}
  
int main()
{
    int i,j;
    while(scanf("%lld%lld%lld",&m,&n,&k)!=EOF){
        for(i=0;i<m;i++) scanf("%lld",&A[i]);
        for(i=0;i<n;i++) scanf("%lld",&B[i]);
        sort(A,A+n);sort(B,B+m);
        long long l=A[0]+B[0],r=A[m-1]+B[n-1],mid;
        while(l<r){
            mid=(l+r+1)>>1;
            if(judge(mid-1,k)) r=mid-1;
            else l=mid;
        }
        printf("%lld\n",l);
    }
    return 0;
}