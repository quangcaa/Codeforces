#include <iostream>
#include <ctype.h>

using namespace std ;

int main()
{
    string s ; cin >> s ;
    int cnt_lwr = 0 ;
    for(int i=0 ; i<s.length() ; i++)
    {
        if(islower(s[i]))
        {
            cnt_lwr ++ ;
        }
    }
    int cnt_upr = s.length() - cnt_lwr ;
    if(cnt_upr > cnt_lwr)
    {
        for(int i=0 ; i<s.length() ; i++)
        {
            char x = toupper(s[i]) ;
            cout << x ;
        }
    }
    else
    {
        for(int i=0 ; i<s.length() ; i++)
        {
            char x = tolower(s[i]) ;
            cout << x ;
        }        
    }
    return 0 ;
}