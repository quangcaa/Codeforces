#include <iostream>
#include <iomanip>
#include <algorithm>

using namespace std ;

int main()
{
    string s ; 
    cin >> s ;
    int x = s.length() ;
    int a[(x+1)/2] ;
    int i = 0 ;
    int cnt = 0 ;
    while(i<x)
    {
        if(s[i] != '+')
        {
            a[cnt] = s[i] - '0' ;
            cnt++ ;
        }
        i++ ;
    }
    int sl = (x+1)/2 ;
    for(int q=0 ; q<sl-1 ; q++)
    {
        int pos = q ;
        for(int j=q+1 ; j<sl ; j++)
        {
            if(a[j] < a[pos])
            {
                pos = j ;
            }
        }
        swap(a[pos] , a[q]) ;
    }
    for(int j=0 ; j<sl ; j++)
    {
        if(j==sl-1)
        {
            cout<< a[j] ;
            return 0 ;
        }
        cout << a[j] << '+' ;
    }
    return 0 ;
}