#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int a_len, b_len;
    int A;
    vector<int> a;
    vector<int> b;

    cin >> a_len >> b_len;
    for(int i = 0; i < a_len; i++){
        cin >> A;
        a.push_back(A);
    }

    for(int i = 0; i < b_len; i++){
        cin >> A;
        a.push_back(A);
    }

    sort(a.begin(), a.end());

    for(int i = 0; i < a.size(); i++){
        cout << a[i] << ' ';
    }
    return 0;
}