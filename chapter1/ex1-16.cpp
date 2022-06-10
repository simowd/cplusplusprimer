#include <iostream>

int main(){
    int n = 0, sum = 0;
    std::cout << "Please enter the numbers to be summed (Press ctrl-d to exit)" << std::endl;
    while(std::cin >> n)
        sum += n;
    std::cout << "The sum of the numbers is: " << sum << std::endl;
    return 0;
}
