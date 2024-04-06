#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int num;
    cin >> num;

    for(int i = 1; i <= num/2 +1; i++){
        for(int k = 1; k <= i-1; k++){
            cout << ' ';
        }
        for(int j = 1; j <= i*2-1; j++){
            cout << '*';
        }
        cout << '\n';
    }

    for(int i = num/2+1 - 1; i > 0; i--){
        for(int j = i-1; j > 0; j--){
            cout << ' ';
        }
        for(int k = i*2-1; k > 0; k--){
            cout << '*';
        }
        cout << '\n';
    }
    return 0;
}