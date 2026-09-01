#include <iostream>
#include <set>
#include <cmath>

int f(int x) {
    return pow(x, 4) - pow(x, 3) + pow(x, 2) - 1;
}

int main() {
    std::set<int> setA, setB;
    int sizeA, sizeB;


    std::cout << "Enter the size of Set A: ";
    std::cin >> sizeA;
    std::cout << "Enter the elements of Set A (separated by spaces): ";
    for (int i = 0; i < sizeA; ++i) {
        int element;
        std::cin >> element;
        setA.insert(element);
    }
    std::cout << "Enter the size of Set B: ";
    std::cin >> sizeB;
    std::cout << "Enter the elements of Set B (separated by spaces): ";
    for (int i = 0; i < sizeB; ++i) {
        int element;
        std::cin >> element;
        setB.insert(element);
    }

    bool isOneToOne = true;
    bool isOnto = true;

    std::set<int> imageSet;

    for (int element : setA) {
        int result = f(element);

        if (imageSet.count(result) > 0) {
            isOneToOne = false;
            break;
        }
        imageSet.insert(result);

        if (setB.count(result) == 0) {
            isOnto = false;
            break;
        }
    }

    if (isOneToOne && isOnto) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }

    return 0;
}
