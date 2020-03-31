#include<stdio.h>
#include<conio.h>
int main(){
int *p;
int a = 5;
p = &a;
printf("%d",&*p);
printf("\n");
printf("%d",*&p);
}

