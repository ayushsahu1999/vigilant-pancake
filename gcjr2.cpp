// google code jam round 2
N people from an elementary school — one teacher and N-1 kids — are on a field trip. They are exploring a grassy field that is an infinite two-dimensional grid of unit cells. Each person is currently occupying one of the cells; there may be multiple people in the same cell.

When it is time to go home, the teacher and kids must all gather in one cell; it does not matter which one, since their bus can pick them up anywhere. The kids have been taught an algorithm that makes it easier to gather:

The teacher is person number 1, and the kids are numbered 2 through N.
An action taken by a person consists of either moving to one of the 8 cells sharing at least one edge or corner with that person's current cell, or choosing to remain in their current cell.
When the signal for the end of the field trip sounds, the teacher checks to see if all N people are in the same cell. If they are, no further action is necessary. Otherwise, the teacher begins a turn:
First, the teacher takes an action, as described above. It is up to the teacher to decide where, if anywhere, to move.
Then, each kid takes an action, starting with kid 2, and so on up to kid N; the i-th kid does not take their action until the (i-1)th person has taken their action. The kids' actions are deterministic: the i-th kid must choose the option that minimizes the center-to-center distance from their cell to the cell of the (i-1)th person. This is never ambiguous; one of the 9 options will uniquely minimize that distance.
Once the turn is complete, the teacher checks again to see if all people are in the same cell. If they are not, another turn begins, and so on, until everyone is in one cell.
If the teacher makes choices that minimize the number of turns, what is that number of turns?

Input
The first line of the input gives the number of test cases, T. T test cases follow. Each begins with one line with an integer N: the number of people on the field trip. Then, there are N more lines. The i-th of these represents the i-th person, and has two integers Ri and Ci: the row and column numbers (on the grid) of the cell that the i-th person initially occupies.

Output
For each test case, output one line containing Case #x: y, where x is the test case number (starting from 1) and y is the smallest possible number of turns required, as described above.
5
3
3 2
0 2
0 0
3
2 2
2 2
2 2
9
1 1
0 0
0 1
0 2
1 0
1 2
2 0
2 1
2 2
2
8 0
0 8
4
1 0
1 3
2 2
0 2

Case #1: 2
Case #2: 0
Case #3: 1
Case #4: 4
Case #5: 2

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
