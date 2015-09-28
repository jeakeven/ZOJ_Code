#include <iostream>
#include <vector>
using namespace std;
 
#define MAX 200000
 
vector<int> vec;
int N;
 
bool isPrime(int n)
{
    if(n < 2) return false;
 
    for(int i = 2; i * i <= n; i++)
        if(n % i == 0)
            return false;
    return true;
}
 
int main( int argc, char** argv )
{
    for(int i = 2; i <= MAX; i++)
        if(isPrime(i))
            vec.push_back(i);
         
    int len = vec.size();
    while(cin >> N) {
        if(N < 0 || N > len) continue;
 
        cout << vec.at(N - 1) << endl;
    }
         
}