// Problem: Triangle
// Contest: URI Online Judge - Beginner
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1043
// Memory Limit: 1024 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

/*Read three point floating values (A, B and C) and verify if is possible to make a triangle with them. If it is possible, calculate the perimeter of the triangle and print the message:


Perimetro = XX.X


If it is not possible, calculate the area of the trapezium which basis A and B and C as height, and print the message:


Area = XX.X*/

#include<bits/stdc++.h>
using namespace std;
int main(){
	double a, b, c;
	cin >> a >> b >> c;
	if(a+b > c) 
	{
		if(a+c > b)
		{
			if(b+c > a)
			{
				cout << fixed << setprecision(1) << "Perimetro = " << a+b+c << endl;
			}
			else cout <<  fixed << setprecision(1) << "Area = " << (a+b)*c*(0.5) << endl;
		}
	}
	else cout << "Area = " << (a+b)*c*(0.5) << endl;
	
	return 0;
}