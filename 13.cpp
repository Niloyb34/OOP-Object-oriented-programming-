#include<bits/stdc++.h>
using namespace std;
/*
	Write a C++ Program in which Create a class called 'Matrix' containing constructor
	that initializes the number of rows and the number of columns of a new Matrix object.
	The Matrix class has the following information:
	1 - number of rows of matrix
	2 - number of columns of matrix
	3 - elements of matrix (You can use 2D vector)

	The Matrix class has functions for each of the following:
	1 - get the number of rows
	2 - get the number of columns
	3 - set the elements of the matrix at a given position (i,j)
	4 - adding two matrices.
	5 - multiplying the two matrices
	You can assume that the dimensions are correct for the multiplication and addition
*/
///SIR assalamalikim net teke help nite ciecilam kintu bujtesi  na tie asa kori aktu bujie diben
///SIR assalamalikim net teke help nite ciecilam kintu bujtesi  na tie asa kori aktu bujie diben
///SIR assalamalikim net teke help nite ciecilam kintu bujtesi  na tie asa kori aktu bujie diben
///SIR assalamalikim net teke help nite ciecilam kintu bujtesi  na tie asa kori aktu bujie diben
///SIR assalamalikim net teke help nite ciecilam kintu bujtesi  na tie asa kori aktu bujie diben
///SIR assalamalikim net teke help nite ciecilam kintu bujtesi  na tie asa kori aktu bujie diben
///SIR assalamalikim net teke help nite ciecilam kintu bujtesi  na tie asa kori aktu bujie diben
class Matrix
{
	public:
		int Rows,Cols;
		int Mat[Rows][Cols];
		void GetRows(void)
		{
			cout<<"\n\tEnter No. of Rows: ";cin>>Rows;
		}
		void GetCols(void)
		{
			cout<<"\n\tEnter No. of Columns: ";cin>>Cols;
		}
		void SetElemenst(int i, int j, int e)
		{
			Mat[i][j] = e;
		}
		void AddMatrices(int r1, int r2, intr2, int c2, int m1, int m2)
		{
			int r,c,m[r1][c1];
			for(r=0;r<r1;r++)
			{
				for(c=0;c<c1;c++)
				{
					m[r][c] = m1[r][c]+m2[r][c];
				}
			}
		}
}
int main()
{
	int r,c,e;
	class Matrix M1,M2;
	M1.GetRows();
	M1.GetCols();
	M2.GetRows();
	M2.GetCols();
	for(r=0;r<M1.Rows;r++)
	{
		for(c=0;c<M1.Cols;c++)
		{
			cout<<"\nEnter M1["<<r<<"]["<<c<<"] Element = "; cin>>e;
			M1.SetElemenst(r,c,e)
		}
	}
	for(r=0;r<M2.Rows;r++)
	{
		for(c=0;c<M2.Cols;c++)
		{
			cout<<"\nEnter M2["<<r<<"]["<<c<<"] Element = "; cin>>e;
			M2.SetElemenst(r,c,e)
		}
	}
	M1.AddMatrices(M1.Rows,M1.Cols,M2.Rows,M2.Cols,M1.Mat,M2.Mat);
	return(0);
}
