#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> numbers { 1, 2, 3, 4, 5, 10, 15, 20, 25, 35, 45, 50 };

    cout << "\nall: ";
    for_each(numbers.begin(), numbers.end(), [](int n) {
        cout << n << ' ';
    });

    cout << "\nodd: ";
    for_each(numbers.begin(), numbers.end(), [](int n) {
        if (n % 2 == 1) cout << n << ' ';
    });

    cout << "\neven: ";
    for_each(numbers.begin(), numbers.end(), [](int n) {
        if (n % 2 == 0) cout << n << ' ';
    });

    srand(time(NULL));
    auto divisor = rand()%4+2; // Random: {2,5}
    cout << "\ndiv " << divisor << ": ";
    for_each(numbers.begin(), numbers.end(), [divisor](int n) {
        if (n % divisor == 0) cout << n << ' ';
    });

    auto is_divisible_by_n = [](int n, int divisor)->bool {
        return (n % divisor == 0);
    };
    cout << "\ndiv A: ";
    for_each(numbers.begin(), numbers.end(), [divisor, is_divisible_by_n](int n) {
        if (is_divisible_by_n(n, divisor)) cout << n << ' ';
    });

    auto is_divisible = [divisor](int n)->bool {
        return (n % divisor == 0);
    };
    cout << "\ndiv B: ";
    for_each(numbers.begin(), numbers.end(), [is_divisible](int n) {
        if (is_divisible(n)) cout << n << ' ';
    });


    cout << "\n\n";
}
