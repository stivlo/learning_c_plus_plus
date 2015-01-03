#include <iostream>
#include <random>
#define SIZE 5

class RandomGenerator {
private:
    std::mt19937 generator{std::random_device{}()};
    std::uniform_int_distribution<> int_distribution{1, 20};
public:
    int nextInt() {
        return int_distribution(generator);
    }
};

void createAndPrintStaticArray() {
    int static_array[SIZE]; // all elements initialised with 0
    RandomGenerator random_generator;
    for (int i = 0; i < SIZE; ++i) {
        static_array[i] = random_generator.nextInt();
    }
    for (int i = 0; i < SIZE; ++ i) {
        std::cout << i << ": " << static_array[i] << '\n';
    }
}

void createAndPrintDynamicArray() {
    int *dynamic_array = new int(SIZE);
    RandomGenerator random_generator;
    for (int i = 0; i < SIZE; ++i) {
        dynamic_array[i] = random_generator.nextInt();
    }
    for (int i = 0; i < SIZE; ++ i) {
        std::cout << i << ": " << dynamic_array[i] << '\n';
    }
    delete [] dynamic_array;
}

void createAndPrintRandomVector() {
    std::vector<int> int_vector;
    RandomGenerator random_generator;
    for (int i = 0; i < SIZE; ++i) {
        int_vector.push_back(random_generator.nextInt());
    }
    for (unsigned int i = 0; i < int_vector.size(); ++ i) {
        std::cout << i << ": " << int_vector[i] << "\n";
    }
}

int main() {
    std::cout << "\nStatic Array\n";
    createAndPrintStaticArray();
    std::cout << "\nDynamic Array\n";
    createAndPrintDynamicArray();
    std::cout << "\nVector\n";
    createAndPrintRandomVector();
}
