#include <iostream>

using namespace std ;

int main()
{
    int n , h ; cin >> n >> h ;
    int width = 0 ;
    while(n--)
    {
        int x ; cin >> x ;
        if(x<=h)
        {
            width += 1 ;
        }
        else
        {
            width += 2 ;
        }
    }
    cout << width ;
    return 0 ;
}