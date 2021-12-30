#include<stdio.h>
#include<malloc.h>

void main()
{
	int global_intn, global_inti, global_intj, global_intf,
		 global_intmin, global_inttt=0, global_inttemp, *global_intav, *global_intb, *global_intwt, *global_inttat, *global_intp, *global_intc;
	float global_intavgwt = 0, global_intavgtat = 0 , global_intt_tat=0 , global_intt_wt=0;

	printf("\n Enter the number of processes : ");
        scanf("%d", &global_intn);

   global_intp = (int*)malloc(global_intn*sizeof(int));
   global_intb = (int*)malloc(global_intn*sizeof(int));
    global_intav = (int*)malloc(global_intn*sizeof(int));
    global_intc = (int*)malloc(global_intn*sizeof(int));
    global_intwt = (int*)malloc(global_intn*sizeof(int));
    global_inttat = (int*)malloc(global_intn*sizeof(int));
 	
    printf("\n enter the arrival time for each process \n");
    for(global_inti=0 ; global_inti<global_intn ; global_inti++)
    {
	printf("global_intp%d" : " , global_inti+1);
	printf("the arrival time for global_intp%d : ",global_inti);
	scanf("%d" , &global_inta[global_inti]);
	global_intp[global_inti]=global_inti+1;
     }

    printf("\n Enter the burst time for each process \n");
    for(global_inti=0; global_inti<global_intn; global_inti++)
    {
	printf("global_intp%d : , global_inti+1);
        printf(" the burst time for global_intP%d : ", global_inti);
        scanf("%d", &global_intb[global_inti]);
        global_intp[global_inti] = global_inti+1;
    }

    
    for(global_inti=0; global_inti<n; global_inti++)
    {
    	for(global_intj=global_inti+1; global_intj<n; global_intj++)
    	{
    		if(global_intb[global_inti] > global_intb[global_intj])
    		{
    			global_inttemp = global_intp[global_inti];
			global_intp[global_inti] = global_intp[global_intj];
			global_intp[global_intj] = global_inttemp;

			global_inttemp = global_intav[global_inti];
			global_intav[global_inti] = global_intav[global_intj];
			global_inta[global_intj] = global_inttemp;

			global_inttemp = global_intb[global_inti];
			global_intb[global_inti] = global_intb[global_intj];
			global_intb[global_intj] = global_inttemp;
		}
	}
}

global_intmin = global_intav[0];
for(global_inti=0 ; global_inti,global_intn ; global_inti++)
{
	if(global_intmin > global_intav[global_inti])
	{
		global_intmin = global_intav[global_inti];
		global_intf = global_inti;
	}
}

global_inttt = global_intmin;
global_intc[global_intf] = global_inttt + global_intb[global_intf];
global_inttt = global_intc[global_intf];

for( global_inti=0; global_inti<global_intn; global_inti++)
{
if(global_intav[global_inti] != global_intmin)
{
global_intc[global_inti] = global_intb[global_inti] + global_inttt;
global_inttt=global_intc[global_inti];
}        
}
for( global_inti=0 ; global_inti,global_intn ; global_inti++)
{
global_inttat[global_inti] = global_intc[global_inti] - global_intav[global_inti];
global_intt_tat = global_intt_tat + global_inttat[global_inti];
global_intwt[global_inti] = global_inttat[global_inti] - global_intb[global_inti];
global_intt_wt += global_intwt[global_inti];
}
    
global_intavg_wt = global_intt_wt/n;
global_intavg_tat = global_intt_tat/n;

printf("\n process \t Arrival \t burst \t waiting \t turnaround \n");
printf("-----------------------------------------------------------------------------\n");
for(global_inti=0; global_inti<global_intn; global_inti++)
    {
        printf(" global_intP%d \t\t %d \t\t %d \t\t %d \t\t %d \n", global_intp[global_inti], global_intav[global_inti], global_intb[global_inti], , global_intwt[global_inti], global_inttat[global_inti]);
    }

    printf("\n Average Waiting Time = %f \n Average Turnaround Time = %f \n", global_intavg_wt, global_intavg_tat);

    printf("\n \tGAANT CHART \n");
    printf("-------------------------\n");
    for(global_inti=0; global_inti<global_intn; global_inti++)
    {
        printf(" %d\t|| global_intP%d ||\t%d\n", global_intwt[global_inti], global_intp[global_inti], global_inttat[global_inti]);
    }
}