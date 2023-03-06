#include <iostream>

using namespace std ;

int main()
{
    int n ; cin >> n ;
    int capacity = 0 ;
    int stop = 0 ;
    while(n--)
    {
        int a , b ; cin >> a >> b ;
        stop = stop - a + b ;
        if(stop > capacity)
        {
            capacity = stop ;
        }
    }
    cout << capacity ;
    return 0 ;
}