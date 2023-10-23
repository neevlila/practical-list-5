#include<iostream>
using namespace std;
class vehicle
{
	public:
		vehicle()
		{
			cout<<"220130318021"<<endl;
			cout<<"Lila Neev"<<endl;
			cout<<"This is vehicle"<<endl;
			
		}
};
class car : public vehicle{
	public:
		car(){
			cout<<"This is car"<<endl;
		}
};
class four : public car{
	public:
		four(){
			cout<<"This is Four wheeler"<<endl;
		}
}; 
int main()
{
	four f;
}
