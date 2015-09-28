//此题因为长度的特殊性，不需要用具体图相关的算法，直接找即可
#include <iostream>
using namespace std;
#include <vector>
#define LL long long int
 
int pow_n(int n)
{
    int sum=1;
    while(n--)
        sum*=2;
    return sum;
}
 
int get_mod(int n)
{
    LL sum=1;
    while(n>30)
    {
        sum *=pow_n(30)%100000;
        sum = sum%100000;
        n -=30;
    }
    sum *=pow_n(n)%100000;
    return sum%100000;
}
 
typedef struct
{
    int a;
    int b;
}Side;
 
int flag_side[100];
int len_side[100];
 
int main()
{
    int n,m;
    Side side;
    vector<Side> side_vect;
    int a,b;
    while(cin>>n>>m)
    {
        if(side_vect.size()>0)
            side_vect.clear();
        for(int i=0;i<m;i++)
        {
            cin>>side.a>>side.b;
            side_vect.push_back(side);
        }
        len_side[0]=0;
        flag_side[0]=1;
        for(int i=1;i<n;i++)
        {
            len_side[i]=-1;
            flag_side[i]=0;
        }
        while(1)
        {
            int i;
            for(i=0;i<m;i++)
            {
                a=side_vect[i].a;
                b=side_vect[i].b;
                if(flag_side[a]^flag_side[b])
                {
                    if(flag_side[a])
                    {
                        len_side[b]=(len_side[a]+get_mod(i))%100000;
                        flag_side[b]=1;
                    }
                    else
                    {
                        len_side[a]=(len_side[b]+get_mod(i))%100000;
                        flag_side[a]=1;
                    }
                    break;
 
                }
            }
            if(i==m)
                break;
        }
        for(int i=1;i<n;i++)
            cout<<len_side[i]<<endl;
 
    }
    return 0;
}