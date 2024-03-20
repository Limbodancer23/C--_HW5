#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>
using namespace std;
int main()
{
	const size_t size = 6;
    int arr[size][size]{ {0,0}, {0,0}, {0,0}, {0,0}, {0,0}};

	for (size_t i = 0; i < size; i++)
	{
		for (size_t j = 0; j < size; j++)
		{
			arr[i][j] = i + j;
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	
	time_t t;
	time(&t);
	int day = localtime(&t)->tm_mday;

	size_t count = 0;
	for (size_t i = 0; i < size; i++)
	{
		if (day % size == i)
		{
			cout << i << endl;
			for (size_t j = 0; j < size; j++)
			{
				count = count + arr[i][j];
			}
		}
	}
	cout << count << endl;
}
