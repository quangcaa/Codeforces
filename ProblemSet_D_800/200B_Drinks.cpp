#include <iostream>

using namespace std ;

int main()
{
    int n ; cin >> n ;
    int oj = 0 ;
    int vol = 0 ;
    while(n--)
    {
        int x ; cin >> x ;
        oj += x ;
        vol += 100 ;
    }
    double res = 100 * 1.0*oj/vol ;
    cout << res ;
    return 0 ;
}