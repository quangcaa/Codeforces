#include<iostream>

using namespace std ;

int main()
{
    int n ; cin >> n ;
    string s ; 
    while(cin >> s)
    {
        int sz = s.size() ;
        if(sz<=10)
        {
            cout << s << endl ;
        }
        else 
        {
            cout << s[0] << sz-2 << s[sz-1] << endl ;
        }
    }
    return 0 ;
}