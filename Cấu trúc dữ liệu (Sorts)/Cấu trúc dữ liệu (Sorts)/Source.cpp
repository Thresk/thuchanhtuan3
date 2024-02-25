#include <iostream>
#include <fstream>
using namespace std;

void SelectionSort(int n, int array[]);
void InsertionSort(int n, int array[]);
void BubbleSort(int n, int array[]);

int main()
{
	int n;
	int array[100];

	ifstream sort;
	sort.open("selection1.txt");
	sort >> n;
	for (int i = 0; i < n; i++)
	{
		sort >> array[i];
	}

	for (int i = 0; i < n; i++)
	{
		cout << array[i] << "\t";
	}

	SelectionSort(n, array);
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		cout << array[i] << "\t";
	}

	InsertionSort(n, array);
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		cout << array[i] << "\t";
	}

	BubbleSort(n, array);
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		cout << array[i] << "\t";
	}
}

void SelectionSort(int n, int array[])
{
	for (int i = 0; i < n; i++)
	{
		int min = i;
		for (int j = i + 1; j < n; j++)
		{
			if (array[j] < array[min])
			{
				min = j;
			}
		}
		if (min != i)
		{
			swap(array[i], array[min]);
		}
	}
}

void InsertionSort(int n, int array[])
{
	for (int i = 1; i < n; i++)
	{
		for (int j = i; j >= 0; j--)
		{
			if (array[j - 1] > array[j])
			{
				swap(array[j], array[j - 1]);
			}
		}
	}
}

void BubbleSort(int n, int array[])
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (array[i] < array[j])
				swap(array[i], array[j]);
		}
	}
}