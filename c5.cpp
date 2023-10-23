#include<iostream>
using namespace std;
class vehicle
{
	public:
		string name;
		int age;

	vehicle(string ,int)
	{
		this->name=name;
		this->age=age;		
	}
	vehicle(int age,string name)
	{
		cout<<"Name :: "<<name<<endl;
		cout<<"Age :: "<<age<<endl;
	}
};
int main()
{
	vehicle v(7,"Bugati");
	
	cout<<endl<<"Name: Neev Lila"<<endl;
	cout<<"Enrollment no.220130318021";

}
