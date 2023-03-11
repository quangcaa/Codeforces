#include <iostream>
#include <cmath>

using namespace std ;

int main()
{
    int x1 , x2 , x3 ; cin >> x1 >> x2 >> x3 ;
    int max_val = max({x1,x2,x3}) ;
    int min_val = min({x1,x2,x3}) ;
    int mid_val = x1+x2+x3 - max_val - min_val ;
    cout << (max_val - mid_val) + (mid_val - min_val) ;
    return 0; 
}