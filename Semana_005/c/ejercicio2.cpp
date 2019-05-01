#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
using namespace std;
void suma(int x, int y, int *z);

int main() {
	int a, b, c;
	scanf("%d",&a);
	scanf("%d",&b);
	suma(a,b, &c);
	printf("%d",c);
}

void suma(int x, int y, int *z){
   int s;
	s=(x+y);
	*z=s;
}
