#include <iostream>
#include <cstdlib>   // For rand() and srand()
#include <ctime>     // For time()

int main() {
    std::srand(static_cast<unsigned int>(std::time(0))); // Seed random number generator
    int secretNumber = std::rand() % 100 + 1; // Random number between 1 and 100
    int guess;
    int attempts = 0;

    std::cout << "Welcome to the Number Guessing Game!\n";
    std::cout << "I have selected a number between 1 and 100.\n";
    std::cout << "Can you guess what it is?\n";

    do {
        std::cout << "Enter your guess: ";
        std::cin >> guess;
        attempts++;

        if (guess > secretNumber) {
            std::cout << "Too high! Try again.\n";
        } else if (guess < secretNumber) {
            std::cout << "Too low! Try again.\n";
        } else {
            std::cout << "Congratulations! You guessed the number in " << attempts << " attempts.\n";
        }
    } while (guess != secretNumber);

    return 0;
}