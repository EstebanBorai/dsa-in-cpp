#include <iostream>

class Player
{
	public:
		int x;
		int y;
		int speed;
};

void move(Player& player, int xa, int xb)
{
	player.x += (xa * player.speed);
	player.y += (xb * player.speed);
}

int main () {
	Player player;

	player.speed = 2;

	std::cout << player.x << std::endl; // 0
	std::cout << player.y << std::endl; // 1
	
	// Moves Player

	move(player, 2, 4);

	std::cout << player.x << std::endl; // 4
	std::cout << player.y << std::endl; // 8
}