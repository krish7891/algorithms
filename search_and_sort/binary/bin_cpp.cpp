#include <iostream>
#include <time.h>

using namespace std;

int binary_search(int arr[], int lt, int rt, int x)
{
	int mid = lt + (rt - lt)/2;
	if(rt >= lt)
	{
		if(arr[mid] == x)
			return mid;

		if(arr[mid] > x)
			return binary_search(arr, lt, mid-1, x);
		else
			return binary_search(arr, mid+1, rt, x);	
	}
	return -1;
}

int main(int argc, char* argv[])
{
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int index = 0;

	int val = 5;

	if (argc > 1)
		val = atoi(argv[1]);

	index = binary_search(arr, 0, sizeof(arr)/sizeof(arr[0]), val);
	(index == -1) ? cout << "Element not found" << endl : cout << "Element found at index : " << index << endl;
	return 0;
}
