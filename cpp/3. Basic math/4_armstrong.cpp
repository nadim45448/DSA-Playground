#include <bits/stdc++.h>
using namespace std;

int power(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}

bool armstrong(int x) {
    int len = to_string(x).length();
    int copy = x;
    int sum = 0;
    while (x > 0) {
        int ld = x % 10;
        sum += power(ld, len); //pow() func return float value , as a result it will give wrong op
        x /= 10;
    }
    return sum == copy;
}

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;
    bool ans = armstrong(n);
    if (ans)
        cout << n << " is armstrong";
    else
        cout << n << " is not armstrong";
    
    return 0;
}
