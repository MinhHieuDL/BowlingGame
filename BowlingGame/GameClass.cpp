#include "GameClass.h"

void Game::roll(unsigned int points)
{
	score += points;
}

unsigned int Game::Score(void)
{
	return score;
}
