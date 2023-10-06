#include "/Users/ali/Desktop/MPM/MPM/include/head.hpp"

void eigenmatrix::printmatrix(std::vector<std::vector<int> > &matrix)
{
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[0].size(); j++)
        {
            std::cout << matrix[i][j] << "\t";
        }
        std::cout << std::endl;
    }
}

std::vector<std::vector<int> > eigenmatrix::Matrixproduction()
{
    std::vector<std::vector<int> > matrixOne(row, std::vector<int>(column));
    std::random_device rd;
    std::mt19937 gen(rd());
    int min = 0;
    int max = 9;
    std::uniform_int_distribution<int> dis(min, max);

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            matrixOne[i][j] = dis(gen);
        }
    }
    return matrixOne;
}



 std::vector<std::vector<int> > eigenmatrix::MatrixMultiplication(std::vector<std::vector<int> > &matrix1, std::vector<std::vector<int> > &matrix2)
{
    int rows1 = matrix1.size();
    int columns1 = matrix1[0].size();
    int rows2 = matrix2.size();
    int columns2 = matrix2[0].size();


		if(columns1 != rows2)
		{

		throw std::runtime_error("Uncompatinle matrices!"); 

		}

    std::vector<std::vector<int> > result(rows1, std::vector<int>(columns2, 0));

    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < columns2; j++)
        {
            for (int k = 0; k < columns1; k++)
            {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    return result;
}

