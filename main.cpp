#include <iostream>
#include <cstdlib>  // Required for srand() and rand()

using namespace std;

int main() {
    string message = "bassant ali kamal";
    int seed = 4;
    srand(seed);

    for (int i = 0; i < message.length(); i++) {
        message[i] ^= rand();
    }

    srand(seed);

    for (int i = 0; i < message.length(); i++) {
        message[i] ^= rand();
    }

    cout << message << endl;

    return 0;
}
