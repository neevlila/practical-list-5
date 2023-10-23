#include<iostream>
using namespace std;
class vehicle
{
	public:
	vehicle()
	{
     		cout<<"220130318021"<<endl;
		cout<<"Lila Neev"<<endl;
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
