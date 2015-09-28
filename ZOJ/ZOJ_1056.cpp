#include <iostream>
 
using namespace std;
 
int N, M;
 
void GCD(int a, int b)
{
    int c;
    while(b != 0) {
        c = a % b;
        a = b;
        b = c;
    }
 
    cout << a << endl;
}
 
int main( int argc, char** argv )
{
    while(cin >> N >> M) {
#if 0
        int tmp = N + M;
        N = N > M ? N : M;
        M = tmp - N;
#endif
        GCD(N, M);
     
    }
         
}