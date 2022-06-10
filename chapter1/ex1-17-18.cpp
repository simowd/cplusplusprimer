/*
 * 1-17 Answer
 * The program will never output anything since the number is never changed
 * once end-of-file is hit, the program prints the number and number of times
 */
#include <iostream>

int main(){
    int currVal = 0, val = 0;
    
    if(std::cin >> currVal){
        int cnt = 1;
        while(std::cin >> val){
            if(val == currVal){
                ++cnt;
            }
            else {
                std::cout << currVal << " occurs " << cnt << " times" << std::endl;
                currVal = val;
                cnt = 1;
            }
        }
        std::cout << currVal << " occurs " << cnt << " times" << std::endl;
    }
    return 0;
}
