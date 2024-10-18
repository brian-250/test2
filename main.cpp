#include <iostream>

int num = 1;

void maybe_return_hello() {
    if (num == 1) {
        std::cout << "hello" << std::endl;
    } else {
        std::cout << "bye" << std::endl;
    }

}

int main() {
    std::cout << "Hello World!" << std::endl;

    maybe_return_hello();
    
    return 0;
}