#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
 
int main()
{
        float a[10], max;
        memset(a, 0, sizeof(a));
        while(cin >> a[0])
        {
                max = a[0];
                for(int i = 1; i < 10; i++)
                {
                        cin >> a[i];
                        max = (a[i] > max) ? a[i] : max;
                }
                cout << "max=" << max << endl;
        }
        return 0;
}