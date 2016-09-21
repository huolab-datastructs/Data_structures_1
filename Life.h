// Alex Schrepfer
// ## CS151212
//
// Life.h
#ifndef _life_h_
#define _life_h_
#include "..\..\C\UTILITY.H"

const int maxrow = 10, maxcol = 50;    //  grid dimensions

class Life {

public:

   void initialize();

   int total_count();

   int row_count(int row);

   void print();

   void update();

private:

   int grid[maxrow + 2][maxcol + 2];  //  allows for two extra rows and columns

   int neighbor_count(int row, int col);


};
void instructions();

#endif
