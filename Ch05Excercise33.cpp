// Charles Edge
// CS310-T301
// M4:Assignment

#include <iostream>
using namespace std;

//Int A is time for first dish,INT B for additional time per dish,INT T is total time
int main() {
    int a, b, t;
    cout << "Enter preparation time for the first dish: ";
    cin >> a;
    cout << "Enter additional time it will take per dish: ";
    cin >> b;
    cout << "Enter total preparation time available: ";
    cin >> t;

    int total_time = 0, dishes = 0;

//Math part, figures out how many dishes can be prepared within the time available
    while (total_time + a + dishes * b <= t) {
        total_time += a + dishes * b;
        dishes++;
    }
//Print total number of dishes Bianca can prepare
    cout << "Bianca can prepare a total of " << dishes << " dishes." << endl;
    return 0;
}
