#include <iostream>

using namespace std ;

int main()
{
    int n ; cin >> n ;
    string s ; cin >> s ;
    int A_wins = 0 , D_wins = 0 ;
    for(int i=0 ; i<s.length() ; i++)
    {
        if(s[i] == 'A')
        {
            A_wins ++ ;
        }
        else
        {
            D_wins ++ ;
        }
    }

    string A = "Anton" , D = "Danik" , o = "Friendship" ;
    if(A_wins > D_wins)
    {
        cout << A ;
    }
    else if(A_wins < D_wins)
    {
        cout << D ;
    }
    else
    {
        cout << o ;
    }
    
    return 0 ;
}