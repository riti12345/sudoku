#include<stdio.h>
int main()
{
 int a[9][9]={{9, 8, 7 ,6 ,5, 4, 8, 8 ,7},
    
              {2, 6 ,4, 2, 1 ,2 ,3 ,4, 1},
              
             {2, 3, 1 ,5 ,6, 7, 9, 8 ,4},
    
             {2, 43 ,4, 2, 1 ,12 ,3 ,4, 4},
              {1, 1, 17,1 ,1, 1, 1, 2 ,3},
    
              {2, 3 ,4, 2, 31 ,2 ,3 ,4, 4},
              {1, 1, 1 ,1 ,1, 16, 1, 2 ,3},
    
              {2, 3 ,4, 2, 1 ,2 ,3 ,11, 4},
             { 1 ,2, 3, 4, 9, 5, 8, 7 ,6}};

int i,j,k,count=9;
 printf("enter element of filled sudoku \n");
 for(i=0;i<9;i++)
    {
     for(j=0;j<9;j++)
        {
             printf("%d \t",a[i][j]);
            
             }
             printf("\n");
            }
/*############################################################################################*/
        printf("\n\n\n");
	 for(i=0;i<9;i++)
   	 {
    	 for(j=0;j<9;j++)
      	   {
          if(a[i][j]==count)
            {
              a[i][j]=count;
              
              printf("%d \t",a[i][j]);
	    }
	else if(a[i][j]==a[i][j+1])
            {
             
		printf("copied (%d)\t",a[i][j]);
            }

 		else
		    {
			printf("__");
 
			}
 count--;
    }  
   printf("\n");
} 


 
return 0;
}
