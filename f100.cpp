#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <string>


using namespace std;

void write(int *arr, int x) {
	for (int i = 0; i < x; i++)
	{
		cout << arr[i];
	}
	cout << endl;
}

void sup(int *arr1, int *arr2, int N, int n) {
	for (int k = 0; k < n; k++) { //multiplication of numbers
		for (int i = N-1; i > 1; i--) //adding numbers
		{
			arr2[i] += (arr1[i]);
			if (arr2[i] >= 10) {
				arr2[i] %= 10;
				arr2[i - 1]++;
			}
		}		
	}
	for (int i = 0; i < N; i++)
	{
		arr1[i] = arr2[i]; arr2[i] = 0;
	}
}

int main() {
	int N = 200; //number of digits
	int *arr1 = new int[N];
	int *arr2 = new int[N];
	arr1[199] = 1;
	arr2[199] = {0};

	for (int i = 1; i <= 100; i++)
	{
		sup(arr1,arr2,N,i);
	}
	write(arr1,N);

}
