// Ca va groooos ?
//============================================================================
// Name        : Deepov.cpp
// Author      : Romain Goussault
// Version     :
// Copyright   :
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include "Position.hpp"
#include "Color.hpp"
#include "Board.hpp"
#include "Rook.hpp"
using namespace std;

int main()
{
	Position position(3, 4);
	Position position2(7, 4);
	Rook rook(position, BLACK);
	Rook rook2(position2, WHITE);

    bool b = rook.areColorDifferent(rook2);
    cout << b << endl;


	Board board;
	board.addPiece(rook);

    std::vector<Move> rookMoves = rook.getPseudoLegalMoves(board);

    for( std::vector<Move>::const_iterator i = rookMoves.begin(); i != rookMoves.end(); ++i)
    {
        cout << *i << endl;
    }

	return 0;
}
