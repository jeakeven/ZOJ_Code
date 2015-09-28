#include <iostream>
using namespace std;
 
int N;
int Answer;
 
int main()
{
    while(cin >> N, N)
    {
        Answer = 0;
        if(N < 1 || N > 10000) break;
 
        while(N != 1) {
            Answer++;
            if(N % 2 == 0) N /= 2;
            else N = (N * 3 + 1) / 2;
        }
        cout << Answer << endl;
    }
}