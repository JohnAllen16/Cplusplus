#include<iostream>
using namespace std;
int main()
{

	int array[500][500], rows, col, a, b;
	cout<<"Enter number of row  : ";
	cin>>rows;
	cout<<"Enter number of column: ";
	cin>>col;
   int result =rows*col;
	cout<<"Now Enter "<<result<<" Array Elements : \n";
	for(a=0; a<rows; a++)
	{
		for(b=0; b<col; b++)
		{
			cin>>array[a][b];
		}
	}
	cout<<"The Array is :\n";
	for(a=0; a<rows; a++)
	{
		for(b=0; b<col; b++)
		{
			cout<<array[a][b]<<" ";
		}
		cout<<"\n";
	}

}