#include <iostream>
#include <string>
 
using namespace std;
 
int main()
{
    string s1,s2;
    int i,j;
    while(getline(cin, s1))
    {
        if(s1[0] == '#') break;
        getline(cin, s2);
         
        for(i=0; i<s1.size(); i++)
        {
            int ans = 0;
            cout << s1[i];
            for(j=0; j<s2.size(); j++)
                if(s1[i] == s2[j]) ans++;
            cout << ' ' << ans << endl;
        }
    }
}