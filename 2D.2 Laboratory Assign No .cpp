#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	 int arrayA[2][2];
   int arrayB[2][2];
    
    cout<<"Enter a first 4 Numbers \n";
    for (int i=0; i<2;i++)
    {
    for(int j=0;j<2;j++)
        {
        cin>>arrayA[i][j];
    }
}
    cout<<"Enter a second 4 Numbers \n";
    for (int i=0; i<2;i++)
    {
    for(int j=0;j<2;j++)
        {
        cin>>arrayB[i][j];
    }
}
    cout<<"Addition of two inputed arrays are \n";
    for (int i=0; i<2;i++)
    {
    for(int j=0;j<2;j++)
        {
        cout<<arrayA[i][j]+arrayB[i][j]<<endl;
    }
}
    
    }