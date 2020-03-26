#include<stdio.h>
#include<conio.h>
int main(){
    int yr, ref_yr=1990, diff, lpyr, nmyr, td, day; 
    int T;
    scanf("%d",&T);
    while (T-->0){
        scanf("%d", &yr);
        diff=yr-ref_yr; 
        lpyr=diff/4; 
        nmyr=diff-lpyr; 
        td=((nmyr*365)+(lpyr*366)); 
        day=td%7; 
        if (day==0)
            //printf("\nMonday\n");
            printf("noodles\n");
        else if (day==1)
            //printf("\nTuesday\n");
            printf("momos\n");
        else if (day==2)
            //printf("\nWednesday\n");
            printf("roll\n");
        else if (day==3)
            //printf("\nThursday\n");
            printf("pasta");
        else if (day==4)
            //printf("\nFriday\n");
            printf("soup\n");
        else if (day==5)
            //printf("\nSaturday\n");
            printf("chicken\n");
        else if (day==6)
            //printf("\nSunday\n");
            printf("egg\n");
    }
getch();
return 0;
}