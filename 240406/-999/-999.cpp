#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int num;
    int max_ans = 0;
    int min_ans = 999;
    while(1){
        cin >> num;
        if(num == -999) break;
        max_ans = max(max_ans, num);
        min_ans = min(min_ans, num);
    }

    cout << max_ans << ' ' << min_ans;
    return 0;
}