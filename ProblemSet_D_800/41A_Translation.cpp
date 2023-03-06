#include <iostream>

using namespace std ;

int main()
{
    string s , t ; cin >> s >> t ;
    int cd = t.length() ;
    for(int i=0 ; i<cd ; i++)
    {
        if(s[i] != t[cd-1-i])
        {
            cout << "NO" ;
            return 0 ;
        }
    }
    cout << "YES" ;
    return 0 ;
}