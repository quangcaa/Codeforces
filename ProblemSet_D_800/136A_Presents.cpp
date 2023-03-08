#include <iostream>

using namespace std ;

int main()
{
    int n ; cin >> n ;
    int giver[n+1] ;
    for(int i=1 ; i<=n ; i++)
    {
        int x ; cin >> x ;
        giver[x] = i ;
    }
    for(int i=1 ; i<=n ; i++)
    {
        cout << giver[i] << " " ;
    }
    return 0 ;
}