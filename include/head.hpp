#ifndef HEAD_HPP
#define HEAD_HPP


#include <vector>
#include <cstdlib>
#include<iostream>
#include <random>


class eigenmatrix
{
 public:
 eigenmatrix(int Row, int Column)
        :row(Row), column(Column){}
 void printmatrix(std::vector<std::vector<int> >& matrix);
 std::vector<std::vector<int> > Matrixproduction();
 std::vector<std::vector<int> > MatrixMultiplication(std::vector<std::vector<int> >& matrix1, std::vector<std::vector<int> >& matrix2);

 private:
 int row; 
 int column; 


};

#endif // HEAD_HPP