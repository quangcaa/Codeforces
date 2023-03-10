#include <iostream>

using namespace std ;

int word[256] = {0} ;

int main()
{
    string guest_name , host_name , pile ;
    cin >> guest_name >> host_name >> pile ;

    for(int i=0 ; i<guest_name.length() ; i++)
    {
        char x = guest_name[i] ;
        word[x] ++ ;
    }
    for(int i=0 ; i<host_name.length() ; i++)
    {
        char x = host_name[i] ;
        word[x] ++ ;
    }

    for(int i=0 ; i<pile.length() ; i++)
    {
        char x = pile[i] ;
        word[x] -- ;
    }

    for(int i=0 ; i<256 ; i++)
    {
        if(word[i] != 0)
        {
            cout << "NO" ;
            return 0 ;
        }
    }
    cout << "YES" ;
    return 0 ;
}