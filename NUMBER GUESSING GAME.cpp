#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(static_cast<unsigned int>(std::time(nullptr))); // Seed the random number generator
    int randomNumber = std::rand() % 100 + 1; // Generate a random number between 1 and 100
    int userGuess = 0;

    while (true) {
        std::cout << "Guess the number (between 1 and 100): ";
        std::cin >> userGuess;

        if (userGuess == randomNumber) {
            std::cout << "Congratulations! You guessed the correct number." << std::endl;
            break;
        } else if (userGuess < randomNumber) {
            std::cout << "Too low. Try again." << std::endl;
        } else {
            std::cout << "Too high. Try again." << std::endl;
        }
    }

    return 0;
}
