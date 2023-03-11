#include <iostream>

using namespace std ;

int main()
{
    int k , r ; cin >> k >> r ;
    int sv = 0 ;
    int bb = k ;
    while(1)
    {
        if(k <= r && r%k==0)
        {
            cout << r/k ;
            return 0 ;
        }
        if(bb%10 == 0)
        {
            cout << bb/k ;
            return 0 ;
        }
        if(bb%10 == r)
        {
            cout << (bb+r)/k ;
            return 0 ;
        }
        bb+=k ;
    }
    return 0 ;
}