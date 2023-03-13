#include <iostream>
#include <cmath>

using namespace std ;

int cnt(int a , int b)
{
    if(a==b)
    {
        return 0 ;
    }

    int x = abs(a-b) ;
    int cnt = x/10 ;
    if(x%10 != 0)
    {
        cnt++ ;
    }
    return cnt ;
}

int main()
{
    int n ; cin >> n ;
    
    while(n--)
    {
        int a , b ; cin >> a >> b ;
        cout << cnt(a,b) << endl ;
    }

    return 0 ;
}