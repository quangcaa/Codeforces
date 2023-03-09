#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int sld[n];
    int cnt = 0;
    int min_pos = 0 , max_pos = 0 ;
    int min_val = 1e9 , max_val = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> sld[i];
        if (sld[i] <= min_val)
        {
            min_pos = i ;
            min_val = sld[i];
        }
        if (sld[i] > max_val)
        {
            max_pos = i ;
            max_val = sld[i];
        }
    }
    if (max_pos < min_pos)
    {
        cnt += (max_pos - 0) + (n - 1 - min_pos);
    }
    else
    {
        cnt += (max_pos - 0) + (n - 1 - min_pos) - 1 ;
    }
    cout << cnt ; 
    return 0 ;
}