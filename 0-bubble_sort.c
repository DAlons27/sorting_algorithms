#include "sort.h"

/**
 * bubble_sort - Function tha sorts an array of integers in
 * ascending order usin the Bubble sort algorithm.
 * @arr: Array to apply sortin algorithm.
 * @size: size of element in array.
 */
void bubble_sort(int *arr, size_t size)
{
	int Ncycle; /*cycles traversed*/
	int cpsize = size - 1; /*Decremental value per cycle*/
	int ssize = size; /*Original value of size*/

	for (; cpsize >= 0 ; cpsize--)
	{
		for (Ncycle = 0; Ncycle <= cpsize; Ncycle++)
		{
			if (arr[Ncycle] > arr[Ncycle + 1] && (Ncycle + 1) < ssize)
			{
				arr[Ncycle] = arr[Ncycle] ^ arr[Ncycle + 1];
				arr[Ncycle + 1] = arr[Ncycle] ^ arr[Ncycle + 1];
				arr[Ncycle] = arr[Ncycle] ^ arr[Ncycle + 1];
				print_array(arr, size);
			}
		}
	}
}
