#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[10000];
    char c;
    while(cin >> s)
    {
        cin >> c;
        
        for(int i = 0; i < strlen(s); i++)
            if(s[i] != c)
                cout << s[i];
        cout << endl;
    }
    return 0;
}