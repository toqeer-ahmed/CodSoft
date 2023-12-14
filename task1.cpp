#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand((unsigned int)time(NULL));

    cout << "Welcome to the number guessing game" << endl;

    int guess = 0, random;
    random = rand() % 100 + 1;

    do {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess < random) {
            cout << "Try a larger number" << endl;
        } else if (guess > random) {
            cout << "Try a smaller number" << endl;
        } else {
            cout << "Congratulations! You have guessed it!" << endl;
        }

    } while (guess != random);

    return 0;
}
