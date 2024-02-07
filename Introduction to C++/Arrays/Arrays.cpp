#include <iostream>

void ft_PrintArray(int array[], int size)
{
	for(int i = 0; i < size; i++)
	{
		std::cout << array[i] << std::endl;
	}

	return;
}

int main()
{
	int numbers[10] = { 0, 0, 1, 0, 0, 1, 0, 0, 1, 1 }; //valid

	//int matrix[5] = { 1, 2, 3, 4, 5, 6, 7 }; //invalid

	//double radii[10] = (3.2, 4.7}; //invalid, wrong bracket

	//int table[7] = { 2, , , 27, , 45, 39 }; //Invalid

	//char codes[] = { 'A', 'X', '1', '2', 's' }; //valid

	//int blanks[]; //valid

	//int collection[-20]; //invalid

	//int hours[3] = 8, 12, 16; //invlaid?

	ft_PrintArray(numbers, 10);
}