#include <iostream>

using namespace std ;

int main()
{
    int n ; cin >> n ;
    while(n--)
    {
        int x ; cin >> x ;
        if(x!=0)
        {
            cout << "HARD" ;
            return 0 ;
        }
    }
    cout << "EASY" ;
    return 0 ;
}