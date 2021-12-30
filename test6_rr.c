// CPU-Scheduling-Algorithm-In-C
// Round Robin Scheduling Algorithm(Pre-emptive)

#include<stdio.h>
#include<malloc.h>

void main()
{
int global_intn, global_inti, global_intj, global_inttemp, global_intcounter=0,
    global_intqt, global_inte=0, *global_intpr, *global_intb, *global_intav, *global_intwt,
    *global_intr_bt, *global_inttat;
float global_intawt = 0, global_intatat = 0;
printf("\n Enter the processes : ");
scanf("%d", &global_intn);
global_intp=(int*)malloc(global_intn*sizeof(int));
global_intav = (int*)malloc(global_intn*sizeof(int));
global_intrem_bt = (int*)malloc(global_intn*sizeof(int));
global_intb = (int*)malloc(global_intn*sizeof(int));
global_intwt = (int*)malloc(global_intn*sizeof(int));
global_inttat = (int*)malloc(global_intn*sizeof(int));
printf("enter the sequence of the processes : \n");
for(global_inti=0;global_inti<global_intn;global_inti++)
{
scanf("%d",&global_intpr[global_inti]);
}
printf("enter the arrival time of the processes: \n");
for(global_inti=0;global_inti<global_intn;global_inti++)
{
scanf("%d",&global_intav[global_inti]);
}
printf("enter the burst time of the processes: \n");
for(global_intcount=0;global_intcount<n;global_intcount++)
{
	scanf("%d",&global_intb[global_inti]);
	global_intr_bt[global_inti]=global_intb[global_inti];
}

printf("\n Enter the Quantum Time : ");
scanf("%d", &global_intqt);

for(global_inti=0; global_inti<global_intn; global_inti++)
{
	for(global_intj=global_inti+1;global_intj<global_intn;global_intj++)
	{
		if(global_intat[global_inti]>global_intat[global_intj])
		{
			global_inttemp=global_intp[global_inti];
			global_intp[global_inti]=global_intp[global_intj];
			global_intp[global_intj]=global_inttemp;
        		global_inttemp=global_intbt[global_inti];
			global_intbt[global_inti]=global_intbt[global_intj];
			global_intbt[global_intj]=global_inttemp;
			global_inttemp=global_intav[global_inti];
			global_intav[global_inti]=global_intav[global_intj];
			global_intav[global_intj]=global_inttemp;
			global_inttemp=global_intr_bt[global_inti];
			global_intr_bt[global_inti]=global_intbt[global_intj];
			global_intr_bt[global_intj]=global_inttemp;
			
		}
	}
}

while(true)
{
	for(global_inti=0,global_intcount=0;global_inti<global_intn;global_inti++)
	{
		global_inttemp=global_intqt;
		if(global_intr_bt[global_inti]==0) {
			global_intcounter++;
			continue;
		}
		if(global_intr_bt[global_inti]>global_intqt) {
			global_intr_bt[global_inti]=global_intr_bt[global_inti]-global_intqt;
		}
		else
		if(global_intr_bt[global_inti]>=0) {
			global_inttemp=global_intr_bt[i];
			global_intr_bt[global_inti]=0;
		}
		global_inte+=global_inttemp;
		global_inttat[global_inti]=global_inte-global_intav[global_inti];
	}
	if(global_intn==global_intcounter)
	break;
}

printf("\n process \t Arrival \t Burst \t turnaround \t waiting \n");

for(global_inti=0;global_inti<global_intn;global_inti++) {
	global_intatat += global_inttat[global_inti];
	global_intwt[global_inti]=global_inttat[global_inti]-global_intbt[global_inti];
	global_intawt += global_intwt[global_inti];
	printf("p[%d] \t\t %d \t\t %d \t\t %d \t\t %d \n" , global_intp[global_inti], global_intav[global_inti], global_intb[global_inti], global_inttat[global_inti], global_intwt[global_inti]);
}

global_intatat=global_intatat/n;
global_intawt=global_intawt/n;
   
printf("\n Average Waiting Time = %f \n Average Turnaround Time = %f \n", global_intawt, global_intatat);
}