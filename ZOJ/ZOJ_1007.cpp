#include<iostream>

using namespace std;

struct Node{
    int gold_medal;
    int medal;
    int population;
    double g_m_r;
    double m_r;
    int rank[4]; //按四种方式的排名
}nation[300];

int mark[300];
 
int main()
{
	int n,m;
	while(cin>>n>>m){
		int gold_medal,medal,population;
		int i,j,k,sign;
		for(i=0;i<n;++i){
			cin>>gold_medal>>medal>>population;
			nation[i].gold_medal=gold_medal;
			nation[i].medal=medal;
			nation[i].population=population;
			nation[i].g_m_r=(double)gold_medal/(double)population;
			nation[i].m_r=(double)medal/(double)population;
		}
		for(i=0,j=0;i<m;++i){
			cin>>sign;
			mark[j++]=sign;
		}
		k=j;
		for(i=0;i<k;++i){
			//按金牌数排名
			nation[mark[i]].rank[0]=1;
			for(j=0;j<k;++j){
				if(nation[mark[i]].gold_medal<nation[mark[j]].gold_medal){
					nation[mark[i]].rank[0]++;
				}
			}
			
			//按奖牌数排名
			nation[mark[i]].rank[1]=1;
			for(j=0;j<k;++j){
				if(nation[mark[i]].medal<nation[mark[j]].medal){
					nation[mark[i]].rank[1]++;
				}
			}
			
			//按金牌人口比例排名
			nation[mark[i]].rank[2]=1;
			for(j=0;j<k;++j){
				if(nation[mark[i]].g_m_r<nation[mark[j]].g_m_r){
					nation[mark[i]].rank[2]++;
				}
			}
		
			//按奖牌人口比例排名
			nation[mark[i]].rank[3]=1;
			for(j=0;j<k;++j){
				if(nation[mark[i]].m_r<nation[mark[j]].m_r){
					nation[mark[i]].rank[3]++;
				}
			}
		
			int l,ind=1,tmp=nation[mark[i]].rank[0];
			for(l=1;l<4;++l){
				if(tmp>nation[mark[i]].rank[l]){
					tmp=nation[mark[i]].rank[l];
					ind=l+1;
				}
			}
			cout<<tmp<<":"<<ind<<endl;
		}
		cout<<endl;
	}
	return 0;
}