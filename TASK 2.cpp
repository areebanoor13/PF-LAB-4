#include<iostream>
using namespace std;
int main()
{
	int age;
	cout<<"Enter age";
	cin>>age;
	
	if(age<0)
    	{
		cout<<"Invalid age"<<endl;
    	}
	else if(age>=0&&age<=12)
    	{
		cout<<"Child"<<endl;		
    	}
	else if(age>=13&&age<=19)
    	{
		if(age==13)
    
	{
		cout<<"Just a teen."<<endl;
		}
	else 
		{
			cout<<"Teenager."<<endl;
		}
	}
	else if(age>=20&& age<=60){
			cout<<"Adult."<<endl;
		}
	else 
		{
			cout<<"Senior citizen."<<endl;
		}
	
	return 0;
}
	