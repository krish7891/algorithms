#include <stdio.h>
#include <stdlib.h>


int arr[] = {1,2,3,4,5,6,7,8,9,10};

int binary_search(int index);

int binary_search(int index)
{
	int lt = 0, rt = sizeof(arr)/sizeof(arr[0]), mid = 0;

	while(lt <= rt)
	{
		mid = lt + (rt - lt)/2;

		//Check if element present at middle
		if(arr[mid] == index)
			return mid;

		if(arr[mid] < index)
			lt = mid + 1;
		else
			rt = mid - 1;
	}
	return -1;
}

int main(int argc, char* argv[])
{
	int val = 7, index = -1;
	if( argc > 1)
		val = atoi(argv[1]);

	index = binary_search(val);
	(index == -1) ? printf("Element not found\n") : printf("Element found at index : %d\n", index);
	return 0;
}
