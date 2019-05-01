#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
using namespace std;
int multi3();
bool verifMulti3(int x);

int main() {
  multi3();
}

int multi3(){
   int i, sm3, conti, n;
   i=1;
   sm3=0;
   conti=0;
   scanf("%d",&n);
   while(conti<n){
      if(verifMulti3(i)){
         sm3=sm3+i;
         conti=conti+1;
      }
      i=i+1;
   }
   printf("%d",sm3);
}

bool verifMulti3(int x){
   if(x%3==0){
      return true;
   }else{
      return false;
   }
}
