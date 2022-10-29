/*Given a square matrix mat, return the sum of the matrix diagonals.Given a square matrix mat,
return the sum of the matrix diagonals.Only include the sum of all the elements on the primary
diagonal and all the elements on the secondary diagonal that are not part of the primary
diagonal
*/
#include <bits/stdc++.h>
using namespace std;

const int MAX = 100;

void printDiagonalSums(int mat[][MAX], int n)
{
	int principal = 0, secondary = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)	
		{
			// Condition for principal diagonal
			if (i == j)
				principal += mat[i][j];

			// Condition for secondary diagonal
			if ((i + j) == (n - 1))
				secondary += mat[i][j];
		}
	}

	cout << "Principal Diagonal:" <<
			principal << endl;
	cout << "Secondary Diagonal:" <<
			secondary << endl;
    cout<<"Sum of diagonal:"<<
             principal+secondary<<endl;
}

// Driver code
int main()
{
	int a[][MAX] = {{1, 2, 3, 4},
					{5, 6, 7, 8},
					{1, 2, 3, 4},
					{5, 6, 7, 8}};
	printDiagonalSums(a, 4);
	return 0;
}
