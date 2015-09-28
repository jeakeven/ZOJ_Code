#include <iostream>
 
using namespace std;
 
int N;
 
bool IsPrime(int n)
{
    if(n < 2) return false;
 
    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0) return false;
    }
    return true;
}
 
int main()
{
    while(cin >> N) {
        if(IsPrime(N))
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
}