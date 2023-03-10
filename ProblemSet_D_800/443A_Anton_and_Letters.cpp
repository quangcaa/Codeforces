#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s ;
    getline(cin , s) ;

    int cnt = 0 ;
    int apb[256] = {0} ;
    for(int i=0 ; i<s.length() ; i++)
    {
        if(isalpha(s[i]))
        {
            if(apb[s[i]]==0)
            {
                cnt++ ;
            }
            apb[s[i]] = 1 ;
        }

    }

    cout << cnt ;
    return 0;
}