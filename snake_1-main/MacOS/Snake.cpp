//
// Created by Gabriele Preti
//

#include "Snake.hpp"
#include <iostream>
using namespace std;

Snake::Snake() : Position::Position(){
    for (int i = 0; i < rows; i++) { //imposta tutta la matrice booleana a 0/false
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = false;
        }
    }
    for (int k = 0; k < snake_length; k++) {
        matrix[coord[k][0]][coord[k][1]] = true; //imposta le coordinate di riferimento della matrice booleana a true
                                                 //se tali coordinate solo inserite all'interno dell'array bidimensionale
                                                 //definito in Position.hpp/Position.cpp
    }
    head_row = coord[0][0]; //copia delle coordinate della testa per lavorare più velocemente
    head_col = coord[0][1];
}

void Snake::position() { //Debug
    for (int i = 0; i < snake_length; i++) {
        mvprintw(i + 2,2,"%d", coord[i][0]);
        mvprintw(i + 2,2,"%d", coord[i][1]);
    }
}
void Snake::offsegment() {//imposto le coordinate associate alla matrice che sono definite all'interno dell'array bidimensionale uguali a false
    matrix[coord[snake_length-1][0]][coord[snake_length-1][1]] = false;
    //ESEMPIO coord[0][0] = 1 e coord[0][1] = 2 ==> matrix[1][2] = 0/false
}
void Snake::onsegment() {//imposto le coordinate associate alla matrice che sono definite all'interno dell'array bidimensionale uguali a true
    matrix[coord[0][0]][coord[0][1]] = true;
    //ESEMPIO coord[0][0] = 1 e coord[0][1] = 2 ==> matrix[1][2] = 1/true
}

void Snake::moveup() {
    Snake::offsegment(); //spengo la coda
    Position::Pop(); //la rimuovo dall'array che gestisce i segmenti
    head_row = head_row - 1; //mi sposto verso l'alto, diminuisco le righe
    if (head_row < 0) {head_row = rows - 1; } //controllo sul bordo
    Position::Push(head_row, head_col);  //inserisco nuova testa
    Snake::onsegment(); //riaccendo segmenti associato alla matrice
}

void Snake::movedown() {
    Snake::offsegment();
    Position::Pop();
    head_row = head_row + 1; //mi sposto verso il basso, aumento le righe
    if (head_row > rows - 1) {head_row = 0; }
    Position::Push(head_row, head_col);
    Snake::onsegment();
}

void Snake::moveleft() {
    Snake::offsegment();
    Position::Pop();
    head_col = head_col - 1; //mi sposto verso sinistra, diminuisco le colonne
    if (head_col < 0) {head_col = cols - 1; }
    Position::Push(head_row, head_col);
    Snake::onsegment();
}

void Snake::moveright() {
    Snake::offsegment();
    Position::Pop();
    head_col = head_col + 1; //mi sposto verso destra, aumento le colonne
    if (head_col > cols - 1) {head_col = 0; }
    Position::Push(head_row, head_col);
    Snake::onsegment();
}
