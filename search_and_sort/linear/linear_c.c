#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int linear_search(int arr[], u_int8_t count, u_int8_t x)
{
	for(int loop = 0; loop < count; loop++)
	{
		if( arr[loop] == x)
		{
			return loop;
		}
	}
	return (-1);
}

int main(int argc, char* argv[])
{
	printf("Linear search algorithm..\n");
	u_int8_t total_elements = 0;
	int index = 0;

	if (argc > 1 && argc < 4)
	{
		total_elements = atoi(argv[1]);
	}else
	{
		total_elements = 37;
	}
	printf("Total number of element is : %d\n", total_elements);

	int arr[total_elements];

	//Generate random number in range of 0 to toal_element
	
	srand(time(0));
	int lower = 0;
	int upper = total_elements;
	printf("Now generate loop\n");
	for(int loop = 0; loop < total_elements; loop++)
	{
		arr[loop] = (rand() % (upper - lower + 1)) + lower;
		printf("%d,", arr[loop]);
		
	}

	//Apply liner serach
	index = linear_search(arr, total_elements, atoi(argv[2]));
	if (index != -1)
	{
		printf("\nElement found at %d index\n", index);
	}else
	{
		printf("\nElement not found in array, Better luck next time haha :) \n");
	}
	return 0;
}
