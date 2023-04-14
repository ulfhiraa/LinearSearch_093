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
	cout << "\n--------------------\n";
	cout << " Enter array elements \n";
	cout << "----------------------\n";
	for (i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << ">";
		cin >> arr[i];
	}
}

void LinearSearch()
{
	char ch;
	int comparasions;       // Number of comparasions

	do																			  
	{
		   // Accept the number to be searched
		cout << "\nEnter the element you want to search: ";							 // Langkah 1
		int item;
		cin >> item;

		comparasions = 0;
		for (i = 0; i < n; i++)													// langkah 2,3 dan 4
		{
			comparasions++;
			if (arr[i] == item)														// langkah 5A found
			{
				cout << "\n" << item << " Found at position " << (i + 1) << endl;
				break;
			}
		}

		if (i == n)														 // Langkah 5B not found
			cout << "\n" << item << " not found in the array\n";
		cout << "\nNumber of comparasions : " << comparasions << endl;

		cout << "\nContinue search (y/n): ";
		cin >> ch;
	} while ((ch == 'y') || (ch == 'Y'));
}

int main()
{
	input();
	LinearSearch();
}
