#include <iostream>

using namespace std ;

long long pay(int w , int k)
{
    long long sum = 0 ;
    for(int i=1 ; i<=w ; i++)
    {
        int current_val = k*i ;
        sum += current_val ;
    }
    return sum ;
}

int main()
{
    int k , n , w ; 
    cin >> k >> n >> w ;
    long long res = pay(w , k) - n ;
    if(res < 0)
    {
        cout << 0 ;
    }
    else
    {
        cout << res ;
    }
    return 0 ;
}