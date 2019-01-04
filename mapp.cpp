#include<iostream>
#include<conio.h>
#include<map>
#include<iterator>
#include<string.h>
using namespace std;
int main()
{
	map<string, string> phone;
	string name;
	string number;
	int i,z=0;
	for(i=0;i<5;i++)
	{
		cout<<"Enter 5 names and phone numbers\n";
		cin>>name;
		cin>>number;
		phone.insert(pair<string,string>(name,number));
	}
	map<string,string>::iterator itr;
	cout<<"Enter name to be searched\n";
	cin>>name;
	for(itr=phone.begin();itr!=phone.end();itr++)
	{
		if(itr->first==name)
		{
			cout<<"His number is =\n";
			cout<<itr->second;
		}
		else
		{
			z++;
		}
    }
	return 0;
}

