#include <iostream>

using namespace std ;

int main()
{
    int mt[5][5] ;
    int cnti , cntj ;
    for(int i=0 ; i<5 ; i++)
    {
        for(int j=0 ; j<5 ; j++)
        {
            cin >> mt[i][j] ;
            if(mt[i][j])
            {
                cnti = i ;
                cntj = j ;
            }
        }
    }
    int min_step = abs(cnti-2) + abs(cntj-2) ;
    cout << min_step ;
    return 0 ;
}