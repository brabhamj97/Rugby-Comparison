#include <iostream>

// Used struct to have public members
struct RugbyPlayer {
    std::string name;
    int tries;
    int conversions;
    int penalties;
    int drop_goals;
};

// 5 points for a try, 2 for conversion, 3 for penalties and drop goals
void comparePlayers(RugbyPlayer player1, RugbyPlayer player2) {
    int player1Score = player1.tries * 5 + player1.conversions * 2 + player1.penalties * 3 + player1.drop_goals * 3;
    int player2Score = player2.tries * 5 + player2.conversions * 2 + player2.penalties * 3 + player2.drop_goals * 3;

    std::cout << player1.name << ": " << player1Score << " points" << "\n";
    std::cout << player2.name << ": " << player2Score << " points" << "\n";

    if (player1Score > player2Score) {
        std::cout << player1.name << " is a better player than " << player2.name << "\n";
    } else if (player1Score < player2Score) {
        std::cout << player2.name << " is a better player than " << player1.name << "\n";
    } else {
        std::cout << player1.name << " and " << player2.name << " have the same score" << "\n";
    }
}

int main() {
    RugbyPlayer player1 = { "Finn Russell", 10, 5, 3, 2 };
    RugbyPlayer player2 = { "Owen Farrell", 8, 6, 4, 1 };

    comparePlayers(player1, player2);
}
