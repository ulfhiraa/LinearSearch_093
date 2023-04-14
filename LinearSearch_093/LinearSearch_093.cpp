#include <iostream>
using namespace std;

int arr[20];     //Array to be search 
int n;           // Number of elements in the array
int i;           // Index of array element 

void input()
{
	while (true)
	{
		cout << "Enter the number of elements in the array : ";
		cin >> n;
		if ((n > 0) && (n <= 20))
			break;
		else
			cout << "\nArray should have minimum 1 and maximum 20 elements.\n\n";

	}

	// Accept array elements
	cout << "\n----------------------\n";
	cout << "\enter array elements \n";
	cout << "------------------------\n";
	for (i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << ">";
		cin >> arr[i];
	}
}

void LinearSearch()
{
	char ch;
	int comparasion;       // Number of comparasions

	do                 // Langkah 3
	{
		   // Accept the number to be searched
		cout << "\n Enter the element you want to search"  // Langkah 1
		int item;
		cin >> item;

		comparasion = 0;
		for (i = 0; i < n; i++)    // langkah 2 dan 4
		{
			comparasion++;
			if (arr[i] == item)		// langkah 5 a found
			{
				cout << "\n" << item << " Found at position " << (i + 1) << endl;
				break;
			}
		}

	}


}
