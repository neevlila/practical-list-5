#include<iostream>
using namespace std;
class vehicle
{
	public:
		vehicle()
		{
      			cout<<"220130318021";
      			cout<<"Lila Neev";
			    cout<<"This is vehicle"<<endl;
		}
};
class car
{
	public:
		car()
		{
			cout<<"This is car"<<endl;
		}
};
class four : public car,public vehicle
 {
	public:
		four()
		{
			cout<<"Four wheeler";
		}
}; 
int main()
{
	four f;
}
