#include <iostream>

using namespace std ;

int main()
{
    string a , b ; cin >> a >> b ;
    for(int i=0 ; i<a.length() ; i++)
    {
        int x = a[i] ^ b[i] ;
        cout << x ;
    }
    return 0 ;
}