#include <stdio.h>
 
int Prime(int n)
{
        int i;
        for(i=2;i<=n/2;i++)
        {
                if(n%i==0)
                        return 0;
        }
        return 1;
}
 
int getPrime(int n)
{
        int i;
        for(i=n+1;;i++)
        {
                if(Prime(i)==1)
                        return i;
        }
}
 
void Add(int a[],int b[],int m,int n)
{
        int t[30]={0};
        int i,j,l,temp=1;
        for(i=m,j=n,l=0,l;i>=0&&j>=0;i--,j--,l++)
        {
                temp=getPrime(temp);
                 
                t[l]=t[l]+a[i]+b[j];
 
                if(t[l]>=temp)
                {
                        t[l]-=temp;
                        t[l+1]+=1;
                }
        }
        if(i==-1&&j>-1)
        {
                while(j>=0)
                {
                        t[l]+=b[j];
                        temp=getPrime(temp);
                        if(t[l]>=temp)
                        {
                                t[l]-=temp;
                                t[l+1]+=1;
                        }
                        l++;
                        j--;
                }
        }
        else if(i>-1&&j==-1)
        {
                while(i>=0)
                {
                        t[l]+=a[i];
                        temp=getPrime(temp);
                        if(t[l]>=temp)
                        {
                                t[l]-=temp;
                                t[l+1]+=1;
                        }
                        l++;
                        i--;
                }
        }
        if(t[l]==0)
                        l--;
        for(i=l;i>0;i--)
                printf("%d,",t[i]);
        printf("%d\n",t[i]);
         
}
 
int main()
{
        char c;
        int i,j,a[30],b[30];
        while(1)
        {
                for(i=0;;i++)
                {
                        scanf("%d",&a[i]);
                        if((c=getchar())==' ')
                                break;
                }
                for(j=0;;j++)
                {
                        scanf("%d",&b[j]);
                        if((c=getchar())!=',')
                                break;
                }
                if((i==0&&a[0]==0)||(j==0&&b[0]==0))
                        break;
                Add(a,b,i,j);
        }
        return 0;
}