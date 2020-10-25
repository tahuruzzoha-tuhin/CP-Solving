// Problem: Triangle Types
// Contest: URI Online Judge - Beginner
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1045
// Memory Limit: 1024 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

/*Read 3 double numbers (A, B and C) representing the sides of a triangle and arrange them in decreasing order, so that the side A is the biggest of the three sides. Next, determine the type of triangle that they can make, based on the following cases always writing an appropriate message:
if A ≥ B + C, write the message: NAO FORMA TRIANGULO
if A2 = B2 + C2, write the message: TRIANGULO RETANGULO
if A2 > B2 + C2, write the message: TRIANGULO OBTUSANGULO
if A2 < B2 + C2, write the message: TRIANGULO ACUTANGULO
if the three sides are the same size, write the message: TRIANGULO EQUILATERO
if only two sides are the same and the third one is different, write the message: TRIANGULO ISOSCELES
Input
The input contains three double numbers, A (0 < A) , B (0 < B) and C (0 < C).

Output
Print all the classifications of the triangle presented in the input.*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	double a, b, c;
	cin >> a >> b >> c;
	// a = max(a, max(b, c));
	// b = max(b, c);
	// c = c;
	if(a==b && b==c) cout << "TRIANGULO EQUILATERO" << endl;
	if(a==b || a==c || b==c) cout << "TRIANGULO ISOSCELES" << endl;
	if(a>=b+c) cout << "NAO FORMA TRIANGULO" << endl;
	if(a=b+c) cout << "TRIANGULO RETANGULO" << endl;
	if(a>b+c) cout << "TRIANGULO OBTUSANGULO" << endl;
	if(a<b+c) cout << "TRIANGULO ACUTANGULO" << endl;
}