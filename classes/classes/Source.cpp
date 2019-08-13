#include <iostream>

#define LOG(x) std::cout << x << std::endl

class Player
{
public:
	int x, y;
	int speed;

	void Move(int xa, int ya) //This method doesn't require object because it's already inside the object
	{
		x += xa;
		y += ya;
	}
};

//void Move(Player& player, int xa, int ya) //You pass player by reference to modify the object
//{
//	player.x += xa;
//	player.y += ya;
//}

int main()
{
	Player player1;
	player1.x = 5;
	player1.Move(1, -1);
	//Move(player1, 1, -1);
	std::cin.get();
}