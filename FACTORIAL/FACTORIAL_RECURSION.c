#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int fact(int m)
{
    if (m==1)
    {
        return m;
    }
    else
    {
        return m * fact(m-1);
    }
    
}
int for_loop(int z,int anss1)
{
    for(int i=1;i<=z;i++)
            {
                anss1=anss1 * i;
            }
    return anss1;        
}
void main()
{
    int n,ch,ans,i,ans1=1,A;
    printf("\n _Enter NUmber_ \n");
    scanf("%d",&n);
  
    do{
        printf("\n____|| 1. Using_Recursion , 2 Loop , 3 Exit _____||  \n");
        printf("\n_____||  Enter the Choise _____||\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                ans= fact(n);
                printf("\n Answere Is %d \n",ans);
                break;
            case 2:
                A=for_loop(n,1);
                printf("\n Using A For_Loop_ %d\n ",A);
                break;
            case 3:
                exit(0);
                break;
        }
    }
    while (ch != 0);
    
    
}