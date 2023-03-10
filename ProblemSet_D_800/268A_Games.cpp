#include <iostream>

using namespace std ;

struct color
{
    int home ;
    int guest ;
};

typedef struct color color ;

int main()
{
    int n ; cin >> n ;
    color a[n] ;
    int pt = 0 ;
    while(n--)
    {
        int h , g ;
        cin >> h >> g ;
        a[pt].home = h ;
        a[pt].guest = g ;
        pt++ ;
    }

    int cnt = 0 ;
    for(int i=0 ; i<pt ; i++)
    {
        for(int j=0 ; j<pt ; j++)
        {
            if(i != j)
            {
                int x = a[i].home ;
                int y = a[j].guest ;
                if(x == y)
                {
                    cnt ++ ;
                }
            }
        }
    }

    cout << cnt ;

    return 0 ;
}