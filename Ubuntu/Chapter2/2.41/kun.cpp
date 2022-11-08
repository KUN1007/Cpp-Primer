#include<iostream>

struct game {
    std::string name;
    int quantity = 0;
    int gamers = 0;
    double price = 0;
    double revenue = 0;
};

int main() {
    game game1, game2, game3;
    std::cout << "Please input the game's attribute(name, gamers, quantity, price): "
    std::cin >> game1.name >> game1.gamers >> game1.quantity >> game1.price;
    std::cin >> game2.name >> game2.gamers >> game2.quantity >> game2.price;
    std::cin >> game3.name >> game3.gamers >> game3.quantity >> game3.price;
    game1.revenue = game1.quantity * game1.price;
    game2.revenue = game2.quantity * game2.price;
    game3.revenue = game3.quantity * game3.price;

    if (game1.gamers > game2.gamers & game1.gamers) {
        std::cout << game1.name << " is excellent!" << std::endl;
        std::cout << game1.name << "'s attributes is: "
    }
}