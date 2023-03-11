#include <iostream>

using namespace std ;

int cnt (int n)
{
    int cnt = 0 ;
    while(n)
    {
        if(n%10 != 0)
        {
            cnt ++ ;
        }
        n/=10 ;
    }
    return cnt ; 
}

void in (int n)
{
    int x = 10 ;
    while(n)
    {
        int z = n%x ;
        if(z != 0)
        {
            cout << z << " " ;
        }
        x *= 10 ;
        n -= z ;
    }
    cout << endl ;
    return ;
}

int main()
{
    int t ; cin >> t ;
    while(t--)
    {
        int n ; cin >> n ;
        cout << cnt(n) << endl ;
        in(n) ;
    }
    return 0 ;
}