#include <iostream>
using namespace std;
 
int main() 
    {
    int i;
    double grades[500], sum, count, Percent,Average;
 
  
    cout << "Enter The Subjects You enrolled This Sem \n";
    cin >> count;
     
 cout << "Enter " << count << " grades randomly\n";
    
    for(i = 0; i<count; i++) {
        cin >> grades[i];
    }
     
    sum = 0;
    for(i = 0; i < count; i++) 
        {
        sum += grades[i]; 
        }
   cout<<" \nThe Sum of Input Grades\n"<<sum<<endl;
 
    Average = sum / count;
    cout << "Your Average is \n"<<Average<<endl;
    
    Percent = (Average/100 )* 100;
    cout<<"The Percentage of Your Grades is \n"<<Percent<<endl;
    
 
    return 0;
}