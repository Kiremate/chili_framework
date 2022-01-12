#ifndef POSITION_H
#define POSITION_H
class Position {
public:
	int x;
	int y;


	void Add(const Position& pos_inc) {
		x += pos_inc.x;
		y += pos_inc.y;
	}

	bool operator == (const Position& pos_inc) const {
		return x == pos_inc.x && y == pos_inc.y;
	}

	bool operator != (const Position& pos_inc) const {
		return !(*this == pos_inc);
	}
	Position operator-() const {
		return { -x, -y };
	}
};
#endif // !POSITION_H
