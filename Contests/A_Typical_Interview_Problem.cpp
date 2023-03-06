#include <iostream>
#include <string>

using namespace std ;

char res[2046] ;

void dien()
{
    int i = 3 ;
    int cnt = 0 ;
    while(!res[2046])
    {
        if(i%3==0 && i%5!=0)
        {
            res[cnt++] = 'F' ;
        }
        else if(i%5==0 && i%3!=0)
        {
            res[cnt++] = 'B' ;
        }
        else if(i%3==0 && i%5==0)
        {
            res[cnt++] = 'F' ;
            res[cnt++] = 'B' ;
        }
        i++ ;
    }
}

bool check(char res[] , string s , int k)
{
    int i = 0 ;
    while(i<2046-k)
    {
        string ss ; 
        for(int q=i ; q<k+i ; q++)
        {
            ss += res[q] ;
        }
        if(ss == s)
        {
            return true ;
        }
        i++ ;
    }
    return false ;
}

int main()
{
    int t ; cin >> t ;
    dien() ;
    while(t--)
    {
        int k ; 
        string s ;
        cin >> k >> s ;
        if(check(res , s , k))
        {
            cout << "YES\n" ;
        }
        else
        {
            cout << "NO\n" ;
        }
    }
    return 0 ;
}