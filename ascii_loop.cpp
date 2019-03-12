

/*
Precious Idehen
 19-feb-19
 cs203 - Computer Programming I
 
 program: Write a program that uses a loop to display the characters for each ASCII code 32 through
		  127. Display 16 characters on each line with one space between characters.


*/
#include <iostream>
using namespace std;

int main() {
	
	for(int count = 0; count<1; count++) {
		
		for(int i = 32; i<=47; i++)
			cout<<char(i)<<" ";
		cout<<endl;
		for(int j = 48; j<=63; j++)
			cout<<char(j)<<" ";
		cout<<endl;
		for(int k = 64; k<=79; k++)
			cout<<char(k)<<" ";
		cout<<endl;
		for(int p = 80; p<=95; p++)
			cout<<char(p)<<" ";
		cout<<endl;
		for(int q = 96; q<=111; q++)
			cout<<char(q)<<" ";
		cout<<endl;
		for(int num = 112; num<=127; num++)
			cout<<char(num)<<" ";
		cout<<endl;
	}
	
	
	
	
	
	return 0;
}
