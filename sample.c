#include<stdio.h>
#include<math.h>

#include<conio.h>

void factor(int n) {
int i;
    for(i=2;i<=(int)sqrt(n);i++) {
        while(n % i == 0) {
        printf("%d ",i);
        n /= i;
        }
    }
    if (n > 1) printf("%d",n);
        printf("\n");
}

int main(){
    factor(5);
    factor(9);
    factor(7);

    factor(1);
    factor();
    factor(9);

    getch();
    return 0;

}