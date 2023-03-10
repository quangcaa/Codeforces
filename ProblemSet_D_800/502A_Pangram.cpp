#include <iostream>

using namespace std ;

int main()
{
    int n ; cin >> n ;
    string s ; cin >> s ;
    int apb[256] = {0} ;
    for(int i=0 ; i<s.length() ; i++)
    {
        char x = tolower(s[i]) ;
        apb[x] ++ ;
    }
    for(int i=(int)('a') ; i<=(int)('z') ; i++)
    {
        if(apb[i] == 0)
        {
            cout << "NO" ;
            return 0 ;
        }
    }
    cout << "YES" ;
    return 0 ;
}