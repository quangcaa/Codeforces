#include <iostream>

using namespace std ;

int main()
{
    int n , k ; cin >> n >> k ;

    int cnt = 0 ;
    int time_problem = 1 ;
    int time = k ;
    while(cnt < n)
    {
        time = time + time_problem*5 ;
        if(time <= 240)
        {
            cnt ++ ;
            time_problem ++ ;
        }
        else
        {
            break ;
        }
    }

    cout << cnt ;

    return 0 ;
}