#include <iostream>

using namespace std ;

int main()
{
    int n , k ; 
    cin >> n >> k ;

    int ctt[n] ;
    for(int i=0 ; i<n ; i++)
    {
        cin >> ctt[i] ;
    }

    int cnt = 0 ;
    for(int i=0 ; i<n ; i++)
    {
        if(( ctt[i]>=ctt[k-1]) && ctt[i]!=0 )
        {
            cnt++ ;
        }
    }

    cout << cnt ;
    return 0 ; 
}