#include <iostream>
#include <cstring>
 
using namespace std;
 
int main()
{
    int a[10005];
    int count,i,j;
    int begin,end;
    int t_beg,t_end;
    int max,temp;
    while(cin>>count && count>0) {
        for(i=0;i<count;i++)
            cin>>a[i];
        i=0;
        begin=end=0;
        t_beg=t_end=0;
        max=temp=a[0];
        for(i=1; i<count; i++) {
            if(temp<0&&a[i]>temp) {
                temp=a[i];
                t_beg=t_end=i;
            }
            else {
                temp+=a[i];
                t_end=i;
            }
            if(temp>max) {
                max=temp;
                begin=t_beg;
                end=t_end;
            }
 
 
        }
        if(max>=0)
        cout<<max<<" "<<a[begin]<<" "<<a[end]<<endl;
        else
        cout<<0<<" "<<a[0]<<" "<<a[count-1]<<endl;
    }
    return 0;
}