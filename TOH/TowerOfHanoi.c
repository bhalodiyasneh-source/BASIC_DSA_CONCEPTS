#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
void TOH(int n,char src,char help,char des)
{
    if(n>=1)
    {
        TOH(n-1,src,des,help);
        printf("\n Move disk %d from %c to %c",n,src,des);
        TOH(n-1,help,src,des);
    }
}
int main()
{
    int m;
    printf("\n Enter Number Of Disks\n");
    scanf("%d",&m);
    printf("S-> Source , H-> Helper , D-> Destination");
    TOH(m,'S','H','D');
    return 0;
}