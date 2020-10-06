#include <iostream>
#include <stdlib.h>
#include <time.h>

typedef u_int8_t u8;
using namespace std;

int linear_search(int arr[], int count, int x)
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
	int total_elements = 0;
	int index = 0;

	cout << "argc : " <<  argc << endl;
	if (argc > 1 && argc < 4)
	{
		total_elements = atoi(argv[1]);
	}else
	{
		total_elements = 37;
	}
	cout << "Total number of element is : " << total_elements << endl;

	int arr[total_elements];

	//Generate random number in range of 0 to toal_element
	
	srand(time(0));
	u8 lower = 0;
	u8 upper = total_elements;
	for(int loop = 0; loop < total_elements; loop++)
	{
		arr[loop] = rand() % (upper - lower + 1) + lower;
		cout <<  arr[loop] << ",";
		
	}

	//Apply liner serach
	index = linear_search(arr, total_elements,atoi(argv[2]));
	(index != -1) ? cout << "\nElement found at index " << index << endl : cout << "\nElement not found in array, Better luck next time haha :) " << endl;
	return 0;
}
