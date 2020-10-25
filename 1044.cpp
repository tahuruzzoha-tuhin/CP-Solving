// Problem: Multiples
// Contest: URI Online Judge - Beginner
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1044
// Memory Limit: 1024 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

/*Read two nteger values (A and B). After, the program should print the message "Sao Multiplos" (are multiples) or "Nao sao Multiplos" (aren’t multiples), corresponding to the read values.

Input
The input has two integer numbers.

Output
Print the relative message to the input as stated above.*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	
	if(b%a==0 || a%b==0) cout << "Sao Multiplos" << endl;
	else cout << "Nao sao Multiplos" << endl;
}