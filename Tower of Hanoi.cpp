/* Tower of Hanoi Problem using Recursive Method */
//Data Structure using c and c++
//Kedar sedai 0548

#include<stdio.h>
#include<conio.h>>
void towers(int, char, char, char);
int main()
{
	int n;
	scanf("%d",&n);
	towers(n,'A','B','C');
}
void towers(int n,char frompeg, char topeg, char auxpeg)
{
	if (n == 1){
	printf("\n%s%c%s%c\n", "move disk 1 from peg",frompeg,"to peg",topeg);
	return;
	}
	towers(n-1, frompeg, auxpeg, topeg);
	printf("\n%s%d%s%c%s%c\n", "move disk",n,"from peg",frompeg,"to peg",topeg);
	towers(n-1, auxpeg,topeg,frompeg);	
	getch();
	}

