#include <iostream>

using namespace std ;

int main()
{
    int m , n ; cin >> m >> n ;
    int area = 1ll*m*n ;
    int dmn1 = m/2*n ;
    if(m%2==0)
    {
        cout << dmn1 ;
    }
    else
    {
        int dmn2 = n/2 ;
        cout << dmn1 + dmn2 ;
    }
    return 0 ;
}