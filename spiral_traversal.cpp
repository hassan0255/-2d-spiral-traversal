#include<iostream>
using namespace std;

int main()
{
	const int row = 4, col = 3;
	int array[row][col];

	for (int i = 0; i < row; i++)
	{
		for (int  j = 0; j < col; j++)
		{
			cin >> array[i][j];
		}
	}

	int top = 0, right=col-1 , left = 0,bottom = row -1;

	while (top<=bottom || left <= right)
	{

		for (int i = left; i <= right; i++)
		{
			cout << array[top][i] << " ";
		}

		top++;


		for (int i = top; i <= bottom; i++)
		{
			cout << array[i][right] << " ";
		}

		right--;


		for (int i = right; i >= left; i--)
		{
			cout << array[bottom][i] << " ";
		}

		bottom--;

		for (int i = bottom; i >= top; i--)
		{
			cout << array[i][left] << " ";
		}

		left++;

	}

	
}
