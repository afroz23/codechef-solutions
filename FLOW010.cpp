#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t-->0)
	{
		char c;
		cin>>c;
		if(c=='b' || c=='B')
		{
			cout<<"BattleShip\n";
		}
		else if(c=='c' || c=='C')
		{
			cout<<"Cruiser\n";			
		}
		else if(c=='d' || c=='D')
		{
			cout<<"Destroyer\n";			
		}
		else
		{
			cout<<"Frigate\n";		
		}
	}
}
