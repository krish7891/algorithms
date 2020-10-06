#include <iostream>
#include <stdlib.h>

using namespace std;

int interp_search(int arr[], int hi, int lo, int x)
{
	int pos = 0;
	hi = hi-1;
	while( lo < hi && x >= arr[lo]  && x <= arr[hi])
	{
		if(lo == hi)
		{
			if(arr[lo] == x)
			{
				return lo;
			}
			return -1;
		}
		pos = lo + ((double)(hi - lo)/(arr[hi] - arr[lo])*(x - arr[lo]));
		printf("Position : %d\n", pos);

		if(arr[pos] == x)
			return pos;

		if(arr[pos] < x)
			lo = pos + 1;
		else
			hi = pos - 1;

	}
	return -1;
}

int main(int argc, char* argv[])
{
	int arr[] = { 10, 12, 13, 16, 18, 19, 20, 21, 22, 23, 24, 33, 35, 42, 47 };
	int lo = 0, hi = (sizeof(arr)/sizeof(arr[0])), index = 0;
	int x = 47;
	index = interp_search(arr, hi, lo, x);
	(index == -1) ? cout << "Element not found\n" << endl : cout << "Element found at index : " <<  index << endl;
	return 0;
}
