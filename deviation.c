#include<stdio.h>
#include<conio.h>
#include <math.h>
#define SIZE 10

int main()
{
    int arr[SIZE] ;
    int i;
	float n,sum,sumsqr,mean,variance,stddeviation,deviation;
    sum = sumsqr = n = 0 ;   
    
    for(i=0;i<SIZE;i++){
                      
                       printf("Input a Number:");
	                   scanf("%d",&arr[i]);
	                   if(arr[i]<0)
	                               break;
                                   
                                   }
    
    for (i=1; i<SIZE ; i++)                            
        {                                                      
            scanf("%f", &arr[i]);                            
            if (arr[i] <0)                                
               break; 
                                                        
            sum += arr[i];                                   
            n += 1;                                            
        }  
            mean = sum/n;                          
    for(i=0; i<SIZE; i++)
    {
             sum = sum + arr[i]; 
    } 
    {
             mean =  (sum/10.0); 
    }
    
    printf("\nElement\tValue\n");
    for( i=0; i<SIZE; i++) 
    {
         printf("%2d\t%2d\n", i, arr[i]);  
    }
    for (i = 1 ; i<= n; i++)                               
        {                                                      
            deviation = arr[i] - mean;                       
            sumsqr += deviation * deviation;                   
        }                                                      
        variance = sumsqr/n ;                           
        stddeviation = sqrt(variance) ;                        
                                              
    printf("Sum: %d\n", sum);
    printf("Average: %0.2f\n", mean);
 /*   printf("Standard deviation : %f\n", stddeviation);*\
	getch();
    
    
}
