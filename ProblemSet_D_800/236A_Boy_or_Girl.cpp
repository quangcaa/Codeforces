#include <iostream>

using namespace std ;

int main()
{
    string s ; cin >> s ;
    int cnt[256] ;
    int res = 0 ;
    for(int i=0 ; i<s.length() ; i++)
    {
        char x = s[i] ;
        if(cnt[x] == 0)
        {
            cnt[x] = 1 ;
            res++ ;
        }
    }

    string fm = "CHAT WITH HER!" ;
    string m = "IGNORE HIM!" ;
    if(res%2==0)
    {
        cout << fm ;
    }
    else
    {
        cout << m ;
    }
    return 0 ;
}