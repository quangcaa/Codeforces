#include <iostream>

using namespace std ;

int main()
{
    int n , m ; cin >> n >> m ;

    int cnt = 0 ;
    for(int i=1 ; i<=n ; i++)
    {
        ++cnt ;
        for(int j=1 ; j<=m ; j++)
        {
            if(i%2!=0)
            {
                cout << '#' ;
            }
            else
            {
                if((cnt/2) % 2 == 1)
                {
                    if(j==m)
                    {
                        cout << '#' ;
                    }
                    else
                    {
                        cout << '.' ;
                    }
                }
                else
                {
                    if(j==1)
                    {
                        cout << '#' ;
                    }
                    else
                    {
                        cout << '.' ;
                    }
                }
            }
        }
        cout << endl ;
    }

    return 0 ;
}