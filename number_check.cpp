#include "number_check.h"
#include <iostream>
#include <algorithm>

using namespace std;

void checkPerfect(const vector<int>& numbers) {
    auto isPerfect = [](int n) -> bool {
        if (n == 0) return false;
        int sum = 0;
        for (int i = 1; i <= n / 2; i++) {
            if (n % i == 0) sum += i;
        }
        return sum == n;
    };

    for_each(numbers.begin(), numbers.end(), [&](int n) {
        if (isPerfect(n)) {
            cout << n << " is a perfect number.\n";
        } else {
            cout << n << " is not a perfect number.\n";
        }
    });
}