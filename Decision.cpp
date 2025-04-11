#include <iostream>
#include <cstdio>
#include <string>
int main() {
    int userinput;

    std::cout << "chose one ( 1.numbers, 2.words ): ";
    std::cin >> userinput;
    if (userinput == 1){
    std::cout << "chose one (1, 2, 3): ";
    std::cin >> userinput;
    switch(userinput){
        case 1:
        std::cout << "Number 1";
        break;
        case 2:
        std::cout << "Number 2";
        break;
        case 3:
        std::cout << "Number 3";
        break;
    }
 }
    else if (userinput == 2){
    char userinput;
    std::cout << "chose one (a, b, c): ";
    std::cin >> userinput;
    switch(userinput) {
        case 'a':
        std::cout << "Letter a";
        break;
        case 'b':
        std::cout << "Letter b";
        break;
        case 'c':
        std::cout << "Letter c";
        break;
    }
    
    }
    return 0;
}
