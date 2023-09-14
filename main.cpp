#include "header.hpp"

int main()
{

    eigenmatrix a ; 

    int row = 2 ; 
    int coloumn = 2; 

    std::vector<std::vector<int> > matrix1 = a.Matrixproduction(row,coloumn);
    std::cout <<"The first matrix: " << "\n" ; 
    a.printmatrix(matrix1); 

    std::vector<std::vector<int> > matrix2 = a.Matrixproduction(row,coloumn);
    std::cout <<"The second matrix: " << "\n"; 
    a.printmatrix(matrix2); 

    std::vector<std::vector<int> > matrix3 = a.matrixMultiplication(matrix1, matrix2);
    std::cout << "The multiplication: " << "\n" ; 
    a.printmatrix(matrix3); 
}