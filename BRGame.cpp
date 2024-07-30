#include <iostream>
#include <string>

class Player {
private:
    std::string name;
    int health;
    int damage;
public:
    Player(std::string name, int health, int damage) {
        this->name = name;
        this->health = health;
        this->damage = damage;
    }

    std::string getName() {
        return name;
    }

    int getHealth() {
        return health;
    }

    int getDamage() {
        return damage;
    }

    void attack(Player& opponent) {
        opponent.health -= this->damage;
        std::cout << this->name << " attacks " << opponent.name << " for " << this->damage << " damage!" << std::endl;
    }
};

int main() {
    Player player1("Warrior", 100, 20);
    Player player2("Wizard", 80, 25);

    player1.attack(player2);

    return 0;
}
