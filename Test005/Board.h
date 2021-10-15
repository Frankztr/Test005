
#pragma once
#ifndef _BOARD_H
#define _BOARD_H

#include <iostream>
class Board
{
private:
    char board[8][8] = {
        {'r','n','b','q','k','b','n','r'},
        {'p','p','p','p','p','p','p','p'},
        {'/','/','/','/','/','/','/','/'},
        {'/','/','/','/','/','/','/','/'},
        {'/','/','/','/','/','/','/','/'},
        {'/','/','/','/','/','/','/','/'},
        {'P','P','P','P','P','P','P','P'},
        {'R','N','B','Q','K','B','N','R'}
    };
    bool canMoveTo(int i, int j);
    bool isWhite;
public:
    void showBoard();

};


#endif