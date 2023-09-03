#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    int balance = 0; // Keeps track of the balance of parentheses
    vector<bool> remove(n, false); // Mark whether a parenthesis should be removed

    // Mark parentheses to be removed
    for (int i = 0; i < n; ++i) {
        if (s[i] == '(') {
            if (balance < k) {
                remove[i] = true;
                ++balance;
            }
        } else if (s[i] == ')') {
            if (balance < k) {
                remove[i] = true;
                ++balance;
            }
        }
    }

    string result;
    for (int i = 0; i < n; ++i) {
        if (!remove[i]) {
            result += s[i];
        }
    }

    cout << result << endl;

    return 0;
}
