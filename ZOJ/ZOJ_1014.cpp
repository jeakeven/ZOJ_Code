#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
 
using namespace std;
 
const int MAX = 1005;
 
struct Rank{
    string strStuID;
    int nScoreSum;
}Ans[MAX];
 
int score[11];
 
bool cmp(const Rank a, const Rank b)
{
    if(a.nScoreSum > b.nScoreSum)
        return true;
    else if(a.nScoreSum == b.nScoreSum && a.strStuID < b.strStuID)
        return true;
    return false;
}
 
int main()
{
    int N, M, G;
    int n, index;
    string str;
    while(cin >> N, N)
    {
        cin >> M >> G;
        for(int i = 1; i <= M; i++) {
            cin >> score[i];
        }
        int cnt = 0;
        for(int i = 0; i < N; i++) {
            cin >> str;
            cin >> n;
            int sum = 0;
            while(n--) {
                cin >> index;
                sum += score[index];
            }
            if(sum >= G ) {
                Ans[cnt].strStuID = str;
                Ans[cnt++].nScoreSum = sum;
            }
        }
        sort(Ans, Ans+cnt, cmp);
        cout << cnt << endl;
        for(int i =0; i < cnt; i++) {
            cout << Ans[i].strStuID << ' ' << Ans[i].nScoreSum << endl;
        }
    }
}