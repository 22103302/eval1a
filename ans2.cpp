
#include <bits/stdc++.h>
using namespace std;

bool is_prime(int num) {
    if (num <= 1) return false;
    if (num <= 3) return true;
    if (num % 2 == 0 || num % 3 == 0) return false;
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) return false;
    }
    return true;
}

int main() {
    int max;
    cout << "enter an integer: ";
    cin >> max;

    cout << "Prime numbers upto: "<< endl;
    for (int i = 2; i <= max; i++) {
        if (is_prime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}
