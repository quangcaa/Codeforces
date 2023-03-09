#include <iostream>
#include <algorithm>

using namespace std ;

int main()
{
    int cl[4] ;
    int cnt = 0 ;
    for(int i=0 ; i<4 ; i++)
    {
        cin >> cl[i] ;
    }
    for(int i=0 ; i<4-1 ; i++)
    {
        int pos = i ;
        for(int j=i+1 ; j<4 ; j++)
        {
            if(cl[j] < cl[pos])
            {
                pos = j ;
            }
        }
        swap(cl[i] , cl[pos]) ;
    }
    for(int i=0 ; i<4-1 ; i++)
    {
        if(cl[i] == cl[i+1])
        {
            cnt ++ ;
        }
    }
    cout << cnt ; 
    return 0 ;
}