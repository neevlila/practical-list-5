#include<iostream>
using namespace std;
class vehicle
{
	public:
	vehicle()
	{
		cout<<"Enrollment no.220130318021"<<endl;
		cout<<"Name: Neev Lila"<<endl;
		cout<<"This is vehicle";
	}
};
class car : public vehicle
{
};
int main()
{
	car obj;
}
