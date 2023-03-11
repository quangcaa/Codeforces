#include <iostream>

using namespace std ;

int ways(int n)
{
    if(n<2)
    {
        return 0 ;
    }
    int res = (n-1) - (n/2 + 1) + 1 ;
    return res ;
}

int main()
{
    int t ; cin >> t ;
    while(t--)
    {
        int n ; cin >> n ;
        cout << ways(n) << endl ;
    }
}