
#include <stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>


/*void printarray(int a[], int size) {
  for (int i = 0; i < size; i++) {
    printf("%d ", a[i]);
  }
  printf("\n");
}*/

void insertionsort(int a[], int n) {
  for (int i = 1; i < n; i++) {
    int key = a[i];
    int j = i - 1;
    while (key < a[j] && j >= 0) {
      a[j + 1] = a[j];
      --j;
    }
    a[j + 1] = key;
  }
}

int main()

{
    int i,j,k,a[15000];
 
   int ch,n;
    
clock_t start,end;
 
   while(1)
  
  {
        
printf("\n1:for manual entry of n value and array elements");
   
     printf("\n2:to display time taken for sorting number of elements");
     
   printf("\n3:exit");
        
printf("\nenter your choice:");
        
scanf("%d",&ch);
        
        
switch(ch)
        {
       
     case 1:printf("\nenter the number of elements: ");
       
     scanf("%d",&n);
           
 printf("\nenter the array elements: ");
       
     for(i=0;i<n;i++)
          
  {
               
 scanf("%d",&a[i]);
     
        }
        
   start=clock();
     
      insertionsort(a,n);
 
          end=clock();
         
  printf("\nsorted array");
     for (int i = 0; i < n; i++) {
    printf("%d ", a[i]);
  }
      //printarray(a,n);
       
    printf("\ntime taken to sort %d number of elements is %f secs",n,(((double)(end-start)/CLOCKS_PER_SEC)));
 
          break;
           
    
       case 2:
           
printf("\nrunning values from 500 to 14500");
  
         n=500;
          
 while(n<14500)
          
 {
             
  for(i=0;i<n;i++)

               {
         
          a[i]=rand();
    
           }
          
     start=clock();
      
         insertionsort(a,n);
  
             for(j=0;j<5000;j++)
 
              {
                 
  int temp=38/600;
             
  }
               end=clock();
   
            printf("\ntime taken to sort %d numbers is %f secs",n,(((double)(end-start)/CLOCKS_PER_SEC)));
   
            n=n+500;
               
       
    }
          
 break;
           
case 3:exit(0);
  
      }
     
   
    }
   
 return 0;

}
