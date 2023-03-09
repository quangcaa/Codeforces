#include <iostream>
#include <algorithm>

using namespace std ;

int main()
{
    int n ; cin >> n ;
    while(n--)
    {
        int a , b ;
        cin >> a >> b ;
        int cnt = 0 ;
        if(a%b==0)
        {
            cout << cnt << endl ; 
        }
        else if(a<b)
        {
            cnt = b-a ;
            cout << cnt << endl ;
        }
        else
        {
            int x = a%b ;
            cnt = b - a%b ;
            cout << cnt << endl ;
        }
    }
    return 0 ;
}