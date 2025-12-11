
#include <iostream>
#include <string>
using namespace std;

enum Player
{
    X,
    O,
    MT
};

class Tile
{
private:
    Player p;

public:
    Tile(Player p)
    {
        this->p = p;
    }

    Tile()
    {
        this->p = MT;
    }

    Player getPlayer()
    {
        return p;
    }

    void setPlayer(Player p)
    {
        this->p = p;
    }
};

// Function Prototypes
void printBoard(Tile board[3][3]);
string playerToString(Player p);

int main()
{
    Tile board[3][3] = {{X, X, O}, {O, O, MT}, {X, O, X}};
    printBoard(board);
    return 0;
}

void printBoard(Tile board[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << playerToString(board[i][j].getPlayer());
        }
        if (i == 2)
        {
            cout << endl;
        }
        else
        {
            cout << "\n";
        }
    }
}

string playerToString(Player p)
{
    string output;
    if (p == X)
    {
        output = "X";
    }
    else if (p == O)
    {
        output = "O";
    }
    else
    {
        output = "-";
    }
    return output;
}
