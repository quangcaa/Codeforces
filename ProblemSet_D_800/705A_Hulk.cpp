#include <iostream>

using namespace std ;

int main()
{
    int n ; cin >> n ;
    for(int i=1 ; i<=n ; i++)
    {
        if(i%2==1)
        {
            cout << "I hate " ;
            if(i==n)
            {
                cout << "it" ;
                return 0 ;
            }
            else
            {
                cout << "that " ;
            }
        }
        else if(i%2==0)
        {
            cout << "I love " ;
            if(i==n)
            {
                cout << "it" ;
                return 0 ;
            }
            else
            {
                cout << "that " ;
            }
        }
    }
}