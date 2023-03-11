#include <iostream>

using namespace std ;

long long mu(long long n , long long i , long long m )
{
    long long res = 1 ;
    for(int i=1 ; i<=n ; i++)
    {
        res *= n ;
        res % m ;
    }
    return res ;
}

int main()
{
    long long a , x , m ; cin >> a >> x >> m ;
    long long res = 1 ;
    for(int i=1 ; i<x ; i++)
    {
        res += mu(a,i,m) ;
        res %= m ;
    }

    cout << res ;

    return 0 ;
}