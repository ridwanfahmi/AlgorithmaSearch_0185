#include <iostream>
using namespace std;

int arr[];
int n;
int i;

void input()
{
	while (true)
	{
		cout << "Enter the number of elements in the array: ";
		cin >> n;
		if ((n > 0) && (n <= 20))
			break;
		else
			cout << "\nArray should have minimum 1 and maximum 20 elements.\n\n";
	}

	//accept array elements
	cout << "\n--------------------\n";
	cout << "Enter array elements\n";
	cout << "--------------------\n";
	for (i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << "> ";
		cin >> arr[i];
	}
}

void LinearSearch()
{
	char ch;
	int ctr; //number of comparisons
	int item;

	do
	{
		//accept the number to be searched
		cout << "\nEnter the element you want to search: "; //step 1
		cin >> item;
	} while ((ch == 'y') || (ch == 'Y'));
}

int main() {

}
