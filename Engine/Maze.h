#ifndef MAZE_H
#define MAZE_H
#include <cstddef>
#include <vector>
#include "Graphics.h"


namespace BloodAI {

	
	class Maze {

	public:

		enum class EDirections
		{
			UP,
			RIGHT,
			DOWN,
			LEFT

		};
		enum class CellType {
			EMPTY,
			OBSTACLE,
			MINE,
			REWARD
		};


		std::size_t GoalCell;
		int dimension;
		int width;
		int height;
		static constexpr int borderWidth = 4;
		static constexpr int borderPadding = 2;

		static constexpr int x = 70;
		static constexpr int y = 50;

		std::vector<CellType> cells;
		// Reference to graphics
		Graphics& gfx;

		const float DEFAULT_REWARD_VAL = 100.0;
		float Reward(std::size_t cellDest);
	private:




	};
}
#endif // !MAZE_H
