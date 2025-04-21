#ifndef sigma_h
#define sigma_h
#pragma once
#include <vector>
#include <string>


//originalrin was here :P
void greet();
void display_board();
bool win(char player);
void turn(bool& pturn, char player);
bool is_filled(int pos, char player);
bool is_draw();
#endif
