#include<iostream>
#include"/Users/ali/Desktop/MPM/MPM/include/head.hpp"

int main()
{
    
    eigenmatrix a(2,2) ;
 
    std::vector<std::vector<int> > matrix1 = a.Matrixproduction();
    std::cout <<"The first matrix: " << "\n" ; 
    a.printmatrix(matrix1); 

    std::vector<std::vector<int> > matrix2 = a.Matrixproduction();
    std::cout <<"The second matrix: " << "\n"; 
    a.printmatrix(matrix2); 

    std::vector<std::vector<int> > matrix3 = a.MatrixMultiplication(matrix1, matrix2);
    std::cout << "The multiplication: " << "\n" ; 
    a.printmatrix(matrix3); 
}
