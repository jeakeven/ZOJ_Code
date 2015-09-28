#include <cstdio>
#include <iostream>
#include <iomanip>
 
using namespace std;
 
const int MAX = 30 + 5;
double expense[MAX];           // a[i] = j����i�ſɱ�����Ʊ�Ľ����j
int cnt;                       // �ܱ����ķ�Ʊ������
double Q;                      // �������
int N, M;                       // ��Ʊ����  ��Ʒ����
double maxValue;                // �������
 
void Dfs( double value, int level )
{
    if( value > Q )
    {
        return;
    }
    if( value > maxValue )
    {
        maxValue = value;
    }
    if( level >= cnt )
    {
        return;
    }
    if( value + expense[level] <= Q && level < cnt )
    {
        Dfs( value + expense[level], level+1 ); // ѡ���level�ŷ�Ʊ
    }
 
    Dfs( value, level+1 ); // ��ѡ��level�ŷ�Ʊ
}
 
int main()
{
    char ch;
    bool ok;
    double price, sum;
 
    while( cin >> Q >> N, N )
    {
        cnt = 0;
        for( int i = 1; i <= N; i++ )
        {
            sum = 0;
            ok = true;
 
            cin >> M;
            for( int j = 1; j <= M; j++ )
            {
                cin >> ch;
                cin.ignore( 1, ':' );
                cin >> price;
                sum += price;
 
                if( ch != 'A' && ch != 'B' && ch != 'C' )
                {
                    ok = false;
                }
                if( price > 600 || sum > 1000 )
                {
                    ok = false;
                }
            }
            if( ok )
            {
                expense[cnt++] = sum;
            }
        }
 
        maxValue = -1;
        Dfs( 0, 0 );
 
        cout << setiosflags( ios::fixed )<< setprecision( 2 ) << maxValue << endl;
    }
}