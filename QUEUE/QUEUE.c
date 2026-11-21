#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int ch,f=-1,r=-1,size_q,el,y,fr=-1,re=-1,no;
    printf("\n ____Enter A Size Of Queue___ \n");
    scanf("%d",&size_q);
    int q[size_q],a[size_q];
    do
    {
        printf("\n _Enter A Choise 1.Insert 2. Delete  3.Display 4.Circular_Queue_Insert 5.Circular_Queue_Display 7.Exit _ \n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                if(r>=size_q-1)
                {
                    printf("\n _Queue Overflow_  \n ");
                    break;
                }
                printf("\n |_Enter A Element Of Queue_| \n");
                scanf("%d",&el);
                if(f==-1)
                {
                    f=r=0;
                }
                else
                {
                    r=r+1;
                }
                q[r]=el;
                break;

            case 2:
                if (f==-1)
                {
                    printf("\n  _Queue Is Empty_  \n");
                    break;
                }
               
                    y=q[f];
                    printf("\n Queue Element Is %d \n ",y);
                
                if (f==r)
                {
                    f=r=-1;
                }
                else
                {
                    f=f+1;
                }
                break;
            case 3:
                if (f==-1 && r==-1 )
                {
                    printf("\n _Queue Is Empty_ \n");
                }
                else
                {
                    for ( int i=f;i<=r;i++)
                    {
                        printf(" Elemnets is %d  \n ",q[i]);
                    }
                }
                 break;
            case 4:
                if(fr==re+1 || fr==0 && re==size_q-1)
                {
                    printf("\n __QUEUE_IS_FULL__ \n");
                    break;
                }
                if (re==size_q-1)
                {
                    re==0;
                }
                else
                {
                    re++;
                }
                printf("\n _Enter The Element_ \n");
                scanf("%d",&no);
                a[re]=no;
                if(fr==-1)
                {
                    fr=0;
                }
                break;
            case 5:
               
                if(fr == -1)
                {
                    printf("\n _Circular Queue Is Empty_ \n ");
                    break;
                }
                else if (re<fr)
                {
                    printf("\n _The Elements Of The Circular Queue_ \n");
                    for ( int i = fr; i <= size_q-1; i++)
                    {
                        printf("%d\n" , a[i]);
                    }
                    for(int i=0;i <= re;i++)
                    {
                        printf("%d\n",a[i]);
                    }
                }    
                else
                    {
                        printf("\n _The Elements Of The Circular Queue_ \n");
                        for (int  i = fr; i <= re; i++)
                        {
                            printf("%d \n",a[i]);
                        }
                       
                    }
                    break;
            case 7:
                exit(0);
                break;       
              
            
            }    
            
                    
        }
    while (ch != 0);
}

    
