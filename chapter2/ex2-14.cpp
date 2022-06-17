#include <iostream>

int main() {
    int i = 100, sum = 0;
    for (int i = 0; i != 10; ++i)
        sum += i;

    std::cout << i << " " << sum << std::endl;
    return 0;
}

/*
 * Yes, the program is legal
 * It is because we reassign the variable i inside the for loop.
 * Then, we print the old value of i on the std::cout statement
 * */
