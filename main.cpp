#include <iostream>
#include <Windows.h>


void isPrime(int n, bool& result) {
    result = true;  

    if (n <= 1) {
        result = false;  
        return;
    }

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            result = false;  // 
            return;
        }
    }
}

int main() {
    system("chcp 1251");
    system("cls");
    int num;
    bool isPrimeResult;

    std::cout << "Введіть число для перевірки, чи воно є простим: ";
    std::cin >> num;

    isPrime(num, isPrimeResult);

    if (isPrimeResult) {
        std::cout << num << " є простим числом." << std::endl;
    }
    else {
        std::cout << num << " не є простим числом." << std::endl;
    }

    return 0;
}
