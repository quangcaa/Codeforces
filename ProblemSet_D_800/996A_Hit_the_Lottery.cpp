#include <iostream>

using namespace std ;

int main()
{
    int cash ; cin >> cash ;

    long long ans = 0 ;
    ans += cash/100 ; cash%=100 ;
    ans += cash/20 ; cash%=20 ;
    ans += cash/10 ; cash%=10 ;
    ans += cash/5 ; cash%=5 ;
    ans += cash ;
    
    cout << ans ;
    return 0 ;
}