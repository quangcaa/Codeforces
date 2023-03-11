#include <iostream>

using namespace std ;

int main()
{
    int n ; cin >> n ;
    int min = 1e9 ;
    int max = -1 ;
    int cnt = -2 ;
    
    while(n--)
    {
        int x ; cin >> x ;
        if(x < min)
        {
            min = x ;
            cnt ++ ;
        }
        if(x > max)
        {
            max = x ;
            cnt ++ ;
        }
    }

    cout << cnt ;
    
    return 0 ;
}