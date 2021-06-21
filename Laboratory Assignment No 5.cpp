#include <iostream>
using namespace std;

int main() {
    int grades[5] = {75, 85, 90, 82, 95};

 cout << "\nThe grades are: ";

  
    for (int i = 0; i < 5; ++i) {
        cout << grades[i] << "  ";
    }

    return 0;
}