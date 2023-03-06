#include <iostream>
#include <string>
#include <algorithm>

using namespace std ;

int main()
{
    string a , b ; cin >> a >> b ;
    for(int i=0 ; i<a.size() ; i++)
    {
        a[i] = tolower(a[i]) ;
        b[i] = tolower(b[i]) ;
    }

    int cmp = a.compare(b) ;
    if(cmp<0)
    {
        cout << -1 ;
    }
    else if(cmp>0)
    {
        cout << 1 ;
    }
    else
    {
        cout << 0 ;
    }
    return 0 ;
}