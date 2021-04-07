#ifndef BOARD_H
#define BOARD_H
#include <string>
#include "Direction.hpp"
#include <unordered_map>
using namespace std;
namespace ariel{
    class Board{
    public:
    unsigned int maxLeft;
    unsigned int minRight;
    unsigned int maxTop;
    unsigned int minBottom;
    unordered_map<unsigned int, unordered_map<unsigned int, char>> board;  
    Board();
    void setForPost(unsigned int raw,unsigned int cul,Direction Dir,unsigned int nummOfChar);
    void post(unsigned int raw, unsigned int cul, ariel::Direction Dir, string post);
    string read(unsigned int raw, unsigned int cul, ariel::Direction Dir,unsigned int numOfChar );
    string read(unsigned int raw, unsigned int cul, ariel::Direction Dir,int numOfChar );

    void show();
    };

}
#endif