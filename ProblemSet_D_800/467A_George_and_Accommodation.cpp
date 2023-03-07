#include <iostream>

using namespace std ;

int main()
{
    int n ; cin >> n ;
    int room = 0 ;
    while(n--)
    {
        int p , q ; cin >> p >> q ;
        if(q-p >= 2)
        {
            room ++ ;
        }
    }
    cout << room ;
    return 0 ;
}