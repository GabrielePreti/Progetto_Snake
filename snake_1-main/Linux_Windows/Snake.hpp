//
// Created by Gabriele Preti
//

#ifndef SNAKE_H
#define SNAKE_H
#include <ncurses.h>
#include <iostream>
using namespace std;
#include "Position.hpp"
#include "Constant.hpp"

class Snake : public Position {
protected:
    bool matrix[rows][cols]; // matrice booleana
    int head_row; // riga della testa
    int head_col; // colonna della testa


public:
    Snake(); // Costruttore
    void position(); // Debug
    void offsegment(); // imposta uguale a false la coordinata della matrice booleana corrispondente a quella salvata nell'array bidimensionale in Position.hpp /Position.cpp
    void onsegment(); // imposta uguale a true la coordinata della matrice booleana corrispondente a quella salvata nell'array bidimensionale in Position.hpp /Position.cpp
    void moveup(); // movimento verso l'alto
    void movedown(); // movimento verso il basso
    void moveleft(); // movimento a sinistra
    void moveright(); // movimento a destra
};



#endif //SNAKE_H