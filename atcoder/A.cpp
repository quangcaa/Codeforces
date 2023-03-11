#include <iostream>

using namespace std ;

int main()
{
    string s ; cin >> s ;
    int x = s.length() ;
    for(int i=0 ; i<x ; i+=2)
    {
        swap(s[i] , s[i+1]) ;
    }
    cout << s ;
    return 0 ;
}