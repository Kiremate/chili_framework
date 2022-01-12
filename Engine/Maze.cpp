#include "Maze.h"



float BloodAI::Maze::Reward(std::size_t cellDest)
{
	if (GoalCell == cellDest) 
		return DEFAULT_REWARD_VAL;
	return -1;
}
