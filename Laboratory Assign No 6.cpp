#include <iostream>
using namespace std;

int main()
{

 
int  a, b, c, array[3][2][3], size;
size=3*2*3;
cout<<"Enter "<< size << " elements \n";

for(a = 0; a < 3; ++a)
{
for (b = 0; b < 2; ++b)
{
for(c = 0; c< 3; ++c)
{
cin>>array[a][b][c];
}
}
}
cout<<"The values are: "<<endl; 
for(a = 0; a < 3; a++)
{
for (b = 0; b < 2; b++)
{
for(c = 0; c< 3; c++)
{
cout<<"array [ "<< a <<" ][ "<< b << "] [ " << c << " ] = "<< array[a][b][c] <<endl;
}
}
}
return 0;
}