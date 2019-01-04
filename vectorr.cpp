#include<iostream>
#include<algorithm>
#include<vector>
#include<iterator>
#include<conio.h>
using namespace std;
vector<int> a;
class vec{
	int c;
	char s[25];
	public:
		void getval(){
		cout<<"Enter the inputs\na x adds the element\nb sorts elements\nc reverse\nd size\ne prints\nf descending\n";
		cin>>s;
	    } 
	    void oper(){
		for(int k=0;k<25;k++){
			if(s[k]=='a'){
				int ia=(int)s[k+2];
			    a.push_back (ia);
			}
		}
		for(int i=0;i<25;i++){
			if(s[i]=='b'){
				sort(a.begin(),a.end());
			}
			if(s[i]=='c'){
				reverse(a.begin(),a.end());
			}
			if(s[i]=='d'){
				cout<<"\nSize is = "<<a.size();
			}
			if(s[i]=='e'){
				for(int z=0;z<25;z++){
					cout<<a[z]<<" ";
				}
			}
		}
	}
};
int main(){
	vec ob;
	ob.getval();
	ob.oper();
	return 0;
}
