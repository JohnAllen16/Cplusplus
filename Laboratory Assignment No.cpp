#include <iostream>
using namespace std;
int main()
{
	int array[100], highest, size, a;
	
	cout<<"Enter the number of elements in array\n";
	cin>>size;
	
	cout<<"Enter "<< size<< " Numbers " <<endl;
	
	for (a = 0; a < size; a++)
		cin>>array[a];
	
	highest = array[0];
	
	for (a = 1; a < size; a++)
	{
		if (array[a] > highest)
		{
			highest = array[a];
			
		}
	}
	
	cout<<"The highest element value is .\n"<< highest;
	return 0;
}