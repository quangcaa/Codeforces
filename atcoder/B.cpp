#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n+1];
    int check[n+1] ;
    for(int i=1 ; i<=n ; i++)
    {
        check[i] = 0 ;
    }
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (check[i] == 0)
        {
            check[a[i]] = 1;
        }
    }

    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        if(check[i] == 0)
        {
            cnt ++ ;
        }
    }

    cout << cnt << endl ;
    for(int i=1 ; i<=n ; i++)
    {
        if(check[i] ==0)
        {
            cout << i << " " ;
        }
    }

    return 0;
}