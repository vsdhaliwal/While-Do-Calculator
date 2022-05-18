#include <stdio.h>  
#include <math.h>  
#include <stdlib.h>  
  
int main()  
{  
    int op, n1, n2;  
    float result;  
    char ch;  
    do  
    {  
        printf (" \n 1 Addition  \n 2 Subtraction \n 3 Multiplication \n 4 Division \n 5 Quit \n\n");      
        scanf ("%d", &op); 
      
    switch (op)  
    {  
        case 1:  
            printf ("\n Enter First Number: ");  
            scanf (" %d", &n1);  
            printf (" Enter Second Number: ");  
            scanf (" %d", &n2);  
            result = n1+n2 ;
            printf (" Addition of two numbers is: %.2f", result);  
            break;
              
        case 2:  
            printf ("\n Enter First Number: ");  
            scanf (" %d", &n1);  
            printf (" Enter Second Number: ");  
            scanf (" %d", &n2);  
            result = n1-n2 ;
            printf (" Subtraction of two numbers is: %.2f", result);  
            break;
              
        case 3:  
            printf ("\n Enter First Number: ");  
            scanf (" %d", &n1);  
            printf (" Enter Second Number: ");  
            scanf (" %d", &n2);  
            result = n1*n2 ;
            printf (" Multiplication of two numbers is: %.2f", result);  
            break;
              
        case 4:  
            printf ("\n Enter First Number: ");  
            scanf (" %d", &n1);  
            printf (" Enter Second Number: ");  
            scanf (" %d", &n2);  
            if (n2 == 0)  
                {  
                    printf (" \n Please enter another value ");  
                    scanf ("%d", &n2);        
                }   
            result = n1/n2;
            printf (" Division of two numbers is: %.2f", result);  
            break;
              
        case 5:  
            printf (" Quitting");  
            exit(0);   
            break; 
              
        default:  
            printf(" Something is wrong!! ");  
            break;                        
    }  
    printf (" \n \n ********************************************** \n ");  
    } while (op != 7);  
  
    return 0;        
} 