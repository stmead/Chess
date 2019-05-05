#include <iostream>
#include <cstdlib>
#include "ChessBoard.h"
#include "ChessPieces.h"
#include "Check.h"
#include "gui.h"

class ChessGame {
private:
  ChessBoard board;
  char PlayerTurn;
public:
  ChessGame() {
    PlayerTurn = ‘W’;
  }
  void Start() {
    
  }
};

int main() {
  ChessGame game;
  game.Start();
  
  return 0;
}
