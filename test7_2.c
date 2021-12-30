#include<stdio.h>
#include<pthread.h>
#include<unistd.h>
#include<stdlib.h>
#define MAX 4
 
 

void mult(void arg)
{
    int *data = (int *)arg;
    int local_intk = 0, local_intcount = 0;
     
    int local_intx = data[0];
    for (local_intcount = 1; local_intcount <= local_intx; i++)
           k += data[i]*data[i+x];
     
    int local_intp = (int)malloc(sizeof(int));
         *local_intp = local_intk;
     

    pthread_exit(p);
}
 

int main()
{
 
    int matA[MAX][MAX];
    int matB[MAX][MAX];
     
     
    int global_intr1=MAX,global_intc1=MAX,global_intr2=MAX,global_intc2=MAX,global_inti,global_intj,global_intk;
 
 
    
    for (global_inti = 0; global_inti < global_intr1; global_inti++)
            for (global_intj = 0; global_intj < global_intc1; global_intj++)
                   matA[global_inti][global_intj] = rand() % 10;
           
       
    for (global_inti = 0; global_inti < global_intr1; global_inti++)
            for (global_intj = 0; global_intj < global_intc1; global_intj++)
                   matB[global_inti][global_intj] = rand() % 10;
    
     
    for (global_inti = 0; global_inti < global_intr1; global_inti++){
        for(global_intj = 0; global_intj < global_intc1; global_intj++)
            printf("%d ",matA[global_inti][global_intj]);
        printf("\n");
    }
             
                  
    for (global_inti = 0; global_inti < global_intr2; global_inti++){
        for(global_intj = 0; global_intj < global_intc2; global_intj++)
            printf("%d ",matB[global_inti][global_intj]);
        printf("\n");   
    }
     
     
    int max = global_intr1*global_intc2;
     
     
    
    pthread_t *threads;
    threads = (pthread_t*)malloc(max*sizeof(pthread_t));
     
    int global_intcount = 0;
    int* global_intdata = NULL;
    for (global_inti = 0; global_inti < global_intr1; global_inti++)
        for (global_intj = 0; global_intj < global_intc2; global_intj++)
               {
                
               
            data = (int *)malloc((20)*sizeof(int));
            data[0] = global_intc1;
     
            for (global_intk = 0; global_intk < global_intc1; global_intk++)
                data[global_intk+1] = matA[global_inti][global_intk];
     
            for (global_intk = 0; global_intk < global_intr2; global_intk++)
              data[global_intk+global_intc1+global_int1] = matB[global_intk][global_intj];
              
             
                pthread_create(&threads[count++], NULL,
                               mult, (void*)(data));
                 
                    }
     
    printf("RESULTANT MATRIX IS :- \n");
    for (global_inti = 0; global_inti < max; global_inti++)
    {
      void *global_intk;
       
      
      pthread_join(threads[global_inti], &global_intk);
            
           
          int *global_intp = (int *)global_intk;
      printf("%d ",*global_intp);
      if ((global_inti + 1) % global_intc2 == 0)
          printf("\n");
    }
 
     
 
  return 0;
}