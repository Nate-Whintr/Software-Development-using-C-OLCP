#include <iostream>

int main() {
    int x = 6;
    while (x > 0){
        std::cout << x%2;
        x = x/2;
    }

    return 0;
}
