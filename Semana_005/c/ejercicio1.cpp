#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
using namespace std; 
int suma(int n1, int n2);

int main() {
	int a, b, c;
	scanf("%d",&a);
	scanf("%d",&b);
	c=suma(a,b);
	printf("%d",c);

}

int suma(int n1, int n2){
	int s;
	s = n1+n2;
	return(s);
}
