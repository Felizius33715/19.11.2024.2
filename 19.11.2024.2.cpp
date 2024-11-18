#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

int main() {
    int n;
    std::cout << "[IN]: " << std::endl;
    std::cin >> n;

    std::set<int> uniqueNumbers;

    for (int i = 0; i < n; ++i) {
        int num;
        std::cin >> num;
        uniqueNumbers.insert(num);
    }

    std::vector<int> sortedNumbers(uniqueNumbers.begin(), uniqueNumbers.end());

    std::sort(sortedNumbers.begin(), sortedNumbers.end(), std::greater<int>());

    std::cout << "[OUT]: " << std::endl;

    for (const auto& num : sortedNumbers) {
        std::cout << num << std::endl;
    }

    return 0;
}