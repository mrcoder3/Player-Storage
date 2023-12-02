#include <iostream>
#include <string>
using namespace std;

struct Player {
	std::string playerName;
	int playerScore;

};

int main() {

	Player currentPlayer;

    // Get player information (you can use user input or any other method)
    std::cout << "Enter player name: ";
    std::getline(std::cin, currentPlayer.playerName);

    std::cout << "Enter player score: ";
    std::cin >> currentPlayer.playerScore;

    // Display player information
    std::cout << "Player Information:\n";
    std::cout << "Name: " << currentPlayer.playerName << "\n";
    std::cout << "Score: " << currentPlayer.playerScore << "\n";

    // After the game session, the player information will be automatically deleted when the program ends

    return 0;
}
