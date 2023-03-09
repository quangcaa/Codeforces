#include <iostream>

using namespace std ;

int main()
{
    int n ; cin >> n ;
    int lv[n+1] = {0} ;
    for(int i=1 ; i<=2 ; i++)
    {
        int p ; cin >> p ;
        while(p--)
        {
            int x ; cin >> x ;
            lv[x] = 1 ;
        }
    }

    string res1 = "I become the guy." , res2 = "Oh, my keyboard!" ;
    for(int i=1 ; i<=n ; i++)
    {
        if(lv[i]==0)
        {
            cout << res2 ;
            return 0 ;
        }
    }
    cout << res1 ;
    return 0 ;
}