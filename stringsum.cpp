#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
int main(){
	int i,j,k,l,m=0,t,n,n1;
	string s,s1,s2;
	cout<<"Enter the number of testcases\n";
	cin>>t;
	while(t>0){
		cout<<"Enter the first string\n"<<flush;
		cin>>s;
		cout<<"Enter the second string\n"<<flush;
		cin>>s1;
		i=0,j=0;
		while(i<s.size()||j<s1.size()){
			n=(int)s[i];
			n1=(int)s1[j];
			if(n<n1){
				s2[m]=s[i];
			}
			else if(n>n1){
				s2[m]=s1[j];
			}
			else{
				k=1;l=1;
				while(s[i+k]==s1[j+l]){
					k++;
					l++;
				}
				n=(int)s[i+k];
				n1=(int)s1[j+l];
				if(n>n1){
					s2[m]=s[i];
				}
				else{
					s2[m]=s1[j];
				}
			}
			m++;
		}
		cout<<"Result is = "<<s2;
		t--;
	}
	return 0;
}
