#include <iostream>

using namespace std ;

int main()
{
    int n ; cin >> n ;
    int a[n] ;
    for(int i=0 ; i<n ; i++)
    {
        cin >> a[i] ;
    }

    int ans = 0 ;
    int hired = 0 ;
    for(int i=0 ; i<n ; i++)
    {
        if(a[i] > 0)
        {
            hired += a[i] ;
            continue ;
        }
        if(hired > 0)
        {
            hired += a[i] ;
            continue ;
        }
        ans ++  ;
    }

    cout << ans ;

    return 0 ;
}