#include <iostream>

using namespace std ;

int main()
{
    int k , l , m , n , d ;
    cin >> k >> l >> m >> n >> d ;
    int dragon[d+1] = {0} ;
    int escaped = 0 ;
    for(int i=1 ; i<=d ; i++)
    {
        if(i%k==0)
        {
            dragon[i] = 1 ;
        }
        else if(i%l==0)
        {
            dragon[i] = 1 ;
        }
        else if(i%m==0)
        {
            dragon[i] = 1 ;
        }
        else if(i%n==0)
        {
            dragon[i] = 1 ;
        }
    }
    for(int i=1 ; i<=d ; i++)
    {
        if(dragon[i] == 0)
        {
            escaped ++ ;
        }
    }
    cout << d-escaped ;
    return 0 ;
}