2) Number Guessing Game                                                                                                                                                                                                                       #include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    // Initialize random seed
    srand(time(0));

    // Generate a random number between 1 and 100
    int secretNumber = rand() % 100 + 1;
    int guess;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I have chosen a number between 1 and 100." << endl;

    // Game loop
    do {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess < secretNumber) {
            cout << "Too low! Try again." << endl;
        } else if (guess > secretNumber) {
            cout << "Too high! Try again." << endl;
        } else {
            cout << "Congratulations! You guessed the correct number." << endl;
        }

    } while (guess != secretNumber);

    return 0;
}
