#include <iostream>

using namespace std ; 

int main()
{
    int n ; cin >> n ;
    int cnt = 0 ;
    string bef ;
    while(n--)
    {
        string s ; cin >> s ;
        if(s != bef)
        {
            cnt ++ ; 
        }
        bef = s ;
    }
    cout << cnt ; 
    return 0 ;
}