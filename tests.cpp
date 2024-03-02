#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "number_check.h"

TEST_CASE("Testing perfect numbers") { //googled perfect number examples
    auto isPerfect = [](int n) -> bool { //lambda function has to be defined again for unit testing
        if (n == 0) return false;
        int sum = 0;
        for (int i = 1; i <= n / 2; i++) {
            if (n % i == 0) sum += i;
        }
        return sum == n;
    };
    CHECK(isPerfect(6) == true);
    CHECK(isPerfect(28) == true); 
    CHECK(isPerfect(496) == true);
    CHECK(isPerfect(8128) == true);
    CHECK(isPerfect(33550336) == true); 

    CHECK(isPerfect(0) == false); 
    CHECK(isPerfect(7) == false); 
    CHECK(isPerfect(29) == false); 
}
