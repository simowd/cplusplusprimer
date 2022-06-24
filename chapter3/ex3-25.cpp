#include <iostream>
#include <string>
#include <vector>
#include <cctype>

using std::vector;
using std::string;
using std::cin;
using std::cout; using std::endl;

int main(){
    // count the number of grades by clusters of ten: 0--9, 10--19, . .. 90--99, 100
    vector<unsigned> scores(11, 0); // 11 buckets, all initially 0
    unsigned grade;
    while (cin >> grade) {
        // read the grades
        auto b = scores.begin();
        if (grade <= 100)
            // handle only valid grades
           *(b + (grade/10)) += 1;
    }

    for (auto n : scores)
        cout << n << endl;

    return 0;
}
