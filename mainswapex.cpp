#include <iostream>
#include <iomanip>
using namespace std;

const int SIZE = 5;
int main(int argc, char** argv) {
	
	int inums[SIZE];
	for (int i = 0; i < SIZE; i++)
	{
		cout << "Enter number:";
		cin >> inums[i];
	}
	cout << "Before Swap: " << endl;
	for (int j = 0; j < SIZE; j++)
	{
		cout << setw(5) << inums[j];
	}
	//Swap the 0th index with the last
	int temp = inums[0];
	inums[0] = inums[SIZE - 1];
	inums[SIZE-1] = temp;
	cout << endl;
	cout << "After Swap: " << endl;
	for (int j = 0; j < SIZE; j++)
	{
		cout << setw(5) << inums[j];
	}
	
	return 0;
}
