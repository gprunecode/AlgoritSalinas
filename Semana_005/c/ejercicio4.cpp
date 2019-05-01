#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
using namespace std;
void intercambiar(int *x, int *y);

int main() {
	int a, b;
	scanf("%d",&a);
	scanf("%d",&b);
	printf("%d %d\n",a,b);
	intercambiar(&a,&b);
	printf("%d %d",a,b);
}

void intercambiar(int *x, int *y){
   int aux;
	aux=*x;
	*x=*y;
	*y=aux;
}
