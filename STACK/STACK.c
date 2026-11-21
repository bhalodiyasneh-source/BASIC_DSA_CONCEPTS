#include<stdlib.h>
#include<conio.h>
#include<stdio.h>
void main()
{
    int ch,n,top=-1,e,*poin,ee,i,in,inn,inx,innx;
    char ch1;
    printf("\n ||  Enter the size of stack  ||\n");
    scanf("%d",&n);
    int s[n];
    do
    {
        printf("\n || __   1.PUSH , 2.POP 3.PEEP  4.UPDATE 5.DISPLAY   __ || \n");
        printf("\n || __ Enter the choise __ || \n");
        scanf("%d",&ch);
        switch(ch)
        {
           case 1:
                printf("\n |_ Do you want to push? Enter y: _| ");
                ch1 = getch();
                while (ch1 == 'y')
                {
                    if (top >= n - 1)
                    {
                        printf("\n_______STACK_OVERFLOW__________\n");
                        break;
                    }
                    printf("\n__Enter element of stack ->   ");
                    scanf("%d", &e);
                    top = top + 1;
                    s[top] = e;
                    printf("\n__Do you continue? Enter y ->   ");
                    ch1 = getch();
                }
                break;
            case 2:
                if (top==-1)
                {
                    printf("\n  _STACK EMPTY_  \n");
                    break;
                }
                ee=s[top];
                top=top-1;
                printf("\n Delete element is ->   %d",ee);
                printf("\n");
                break;
          
            case 3:
                printf("\n  || ___Enter index ( Stack index )___ ||  \n"); 
                scanf("%d",&in);  
                
                if (top-in+1<0)
                {
                    printf("__|| STACK INDEX NOT VALID OTHERWISE STACK IS EMPTY ||___");
                    break;
                }
                inn=s[top-in];
                printf("\n____This is a element of indext(_STACK_INDEX_) %d and element is %d___\n", in,inn);
                break;
            
            case 4:
                printf("\n  || ___Enter index ( Stack index )___ ||  \n"); 
                scanf("%d",&inx);  
                
                if (top-inx+1<0)
                {
                    printf("__|| STACK INDEX NOT VALID OTHERWISE STACK IS EMPTY ||___");
                    break;
                }
                printf("\n  || ___Enter element ( UPDATE )___ ||  \n"); 
                scanf("%d",&innx);  
                s[top-inx]=innx;
                printf("\n____This is a element of indext(_STACK_INDEX_) %d and element is %d___\n", inx,innx);
                break;   
                


            case 5:
                printf("\n ____STACK_DISPLAY ( TOP TO BOTTOM)___ \n");
                if (top==-1 )
                {
                    printf("   |_STACK_EMPTY_|  ");
                }
                
               i=top;
               while (i>=0)
               {
                    printf("%d\n",s[i]);
                    i--;
               }
               break;
        }
    } while (ch !=0);
    getch();
 
}