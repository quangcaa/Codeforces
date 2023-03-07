#include <iostream>

using namespace std ;

int check(int n)
{
    int a[10] = {0} ;
    while(n)
    {
        int x = n % 10 ;
        a[x]++ ;
        if(a[x]==2)
        {
            return 0 ;
        }
        n /= 10 ;
    }
    return 1 ;
}

int main()
{
    int y ; cin >> y ;
    int res = y+1 ;
    while(1)
    {
        if(check(res))
        {
            cout << res ;
            return 0 ;
        }
        res += 1 ;
    }
    return 0 ;
}