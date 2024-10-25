#include <iostream>
using namespace std;
int main() 
{
int num,marks;
int sum=0;
cout<<"Enter number of subjects"<<endl;
cin>>num;
for(int i=1;i<=num;i++)
  {
    cout<<"Enter Marks"<<endl;
    cin>>marks;
    sum=sum+marks;
  }
float avg;
avg=sum/num;
cout<<"Average:"<<avg<<endl;
if(avg>=90&&avg<=100)
cout<<"Grade A";
else if(avg>=75&&avg<=89)
cout<<"Grade B";
else if(avg>=50&&avg<=74)
cout<<"Grade C";
else 
cout<<"Grade F";

    return 0;
}