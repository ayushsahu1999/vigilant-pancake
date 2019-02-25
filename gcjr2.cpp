// google code jam round 2
#include<iostream>
#include<conio.h>
using namespace std;

int main(){

int mx = 20000;
int Mx = 0;
int my = 20000;
int My = 0;

cout<<"Start the program\n";

int N;
cin>>N;

int i,r,c;
for(i=0;i<N;i++){
	cin>>r;
	cin>>c;
	mx = min(r, mx);
	Mx = max(r, Mx);
	my = min(c, my);
	My = max(c, My);
}

int dis = max((Mx - mx), (My - my));
int count = (dis + 1)/2;

cout<<count;
return 0;
}
