#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> b(n);
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        int max_likes = 0, min_likes = 0, cur_likes = 0;
        vector<int> max_likes_arr(n), min_likes_arr(n);
        for (int i = 0; i < n; i++) {
            cur_likes += b[i] > 0 ? 1 : -1;
            max_likes = max(max_likes, cur_likes);
            min_likes = min(min_likes, cur_likes);
            max_likes_arr[i] = max_likes;
            min_likes_arr[i] = min_likes;
        }
        for (int i = 0; i < n; i++) {
            cout << max_likes_arr[i] << " ";
        }
        cout << endl;
        for (int i = 0; i < n; i++) {
            cout << abs(min_likes_arr[i]) << " ";
        }
        cout << endl;
    }
    return 0;
}
