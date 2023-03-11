#include <iostream>
#include <algorithm>

using namespace std ;

int main()
{
    int a , b ; cin >> a >> b ;
    
    int d_sock = min(a , b) ;
    a -= d_sock ,  b -= d_sock ;
    int s_sock = a/2 + b/2 ;
    
    cout << d_sock << " " << s_sock ;

    return 0 ;
}