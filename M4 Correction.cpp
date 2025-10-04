#include <iostream>
using namespace std;

int main() {
    int count = 5;

    // Intentional Error 1: Missing semicolon
    for (int i = 0; i < count; i++) {
        cout << "This is line number " << i << endl;
    }

    // Intentional Error 2: Using an undefined variable
    cout << "The loop ran " << count << " times." << endl;

    return 0;
}