#include <iostream>
#include <stdlib.h>

#include <bits/stdc++.h>

using namespace std;

int jump_search(int arr[], int x, int n)
{
	int step = sqrt(n);
	int prev = 0;


	while(arr[min(step, n) - 1] < x )
	{
		prev = step;
		cout << "Min Step : " << step << endl;
		step += sqrt(n);
		if(prev  >= n)
			return -1;
	}

	while ( arr[prev] < x)
	{
		prev++;
		if(prev == min(step, n))
			return (-1);
	}

	if(arr[prev] == x)
		return prev;
	return (-1);
}

int main(int argc, char* argv[])
{
	int arr[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 
                34, 55, 89, 144, 233, 377, 610 };
	int x = 55;
	int n = sizeof(arr) / sizeof(arr[0]);
	
	// Find the index of 'x' using Jump Search
	int index = jump_search(arr, x, n);
	// Print the index where 'x' is located 
	cout << "\nNumber " << x << " is at index " << index; 
	return 0;
}
