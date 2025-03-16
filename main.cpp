#include <iostream>
#include <vector>

using std::vector;

vector<int> prime_factors(int n) {
    vector<int> primes;
    int number = n;
    for (int i = 2; i <= n/2; i++) {
        if (number % i == 0) {
            primes.push_back(i);
            number/=i;
            --i;
        }
    }
    return primes;
}

int main() {
    int number;
    std::cin >>number;

    for (auto prime : prime_factors(number)) {
        std::cout << prime << " ";
    }
}