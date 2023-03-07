#include <iostream>

using namespace std ;

int main()
{
    int n , t ; cin >> n >> t ;
    string s ; cin >> s ;
    while(t--)
    {
        for(int i=0 ; i<s.length()-1 ; i++)
        {
            if(s[i] < s[i+1])
            {
                swap(s[i] , s[i+1]) ;
                i++ ;
            }
        }
    }
    for(int i=0 ; i<s.length() ; i++)
    {
        cout << s[i] ;
    }
    return 0 ;
}