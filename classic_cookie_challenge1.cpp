#include<iostream>
#include<conio.h>
using namespace std;
int main(){
int i,j,m,n,c,d,num=1;//I have taken num = 1 because to count the number of 1's present in a line
int matrix[10][10];
//Initialisation of matrix
cout<<"Enter rows and columns\n";
cin>>m>>n;
for(i=0;i<m;i++){
	for(j=0;j<n;j++){
		cout<<"Enter the number = ";
		cin>>matrix[i][j];
	}
}
//printed [ because to give output in an array bracket for looks only
cout<<"[ ";
for(i=0;i<m;i++){
	for(j=0;j<n;j++){
		num = 1;//Refreshing the value of num for next line
		if(matrix[i][j]==1){
			c=i;
			d=j;
			matrix[c][d]=0;//Once element is checked as 1 then initialise it as 0 to not checked again
			while(c+1<m&&matrix[c+1][d]==1){//check for next element in row vertically
				matrix[c][d]=0;
				c++;
				num++;
			}
			matrix[c][d]=0;
			while(d+1<n&&matrix[c][d+1]==1){//check for next element in row horizontally
				matrix[c][d]=0;
				d++;
				num++;
			}
			matrix[c][d]=0;
			cout<<num<<"' ";
		}
	}
	if(matrix==0){
		break;
	}//once all lines are checked matrix will become a null matrix all elements will be 0
}
cout<<"]";
return 0;
}
