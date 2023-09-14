#include <iostream>
#include <vector>
#include <cstdlib>
#include <random>


class eigenmatrix
{
    public:

 void printmatrix(std::vector<std::vector<int> >& matrix)
{

    for(int i = 0 ; i < matrix.size(); i++)
    {
     for(int j = 0 ; j < matrix[0].size(); j++)
        {
             std::cout << matrix[i][j] << "\t" ; 
        }
        std::cout << std::endl; 
    }

}

std::vector<std::vector<int> > Matrixproduction(int& rows , int& coloumns)
{
    std::vector<std::vector<int> > matrixOne(rows, std::vector<int>(coloumns)) ; 
    std::random_device rd;
    std::mt19937 gen(rd());
    int min = 0 ; 
    int max = 9 ; 
    std::uniform_int_distribution<int> dis(min, max);

    for(int i = 0 ; i < rows ; i++)
    {
        for(int j = 0 ; j < coloumns ; j++)
        {
            matrixOne[i][j] = dis(gen) ; 
        }
    }
    return matrixOne ; 
}

std::vector<std::vector<int> > matrixMultiplication(std::vector<std::vector<int> >& matrix1, std::vector<std::vector<int> >& matrix2)
{
    int rows1 = matrix1.size(); 
    int coloumns1 = matrix1[0].size();
    int rows2 = matrix2.size(); 
    int coloumns2 = matrix2[0].size();  

    std::vector<std::vector<int> > result(rows1, std::vector<int>(coloumns2, 0)); 

    for(int i = 0 ; i < rows1 ; i++)
    {
        for(int j = 0 ; j < coloumns2 ; j++)
        {
            for (int k = 0 ; k < coloumns1 ; k++)
            {
                result[i][j] += matrix1[i][k] * matrix2[k][j] ; 
            }
        }
    }
    return result; 
}
};