#include "Rook.h"

Rook::Rook(const Point& loc, const char color, const char type) : Piece(loc, color, type)
{
}

Rook::~Rook()
{
}

int Rook::checkIfMoveValid(Board*** board) const
{
	return 0;
}

bool Rook::checkIfChessKing(Board*** board) const
{
	return false;
}
