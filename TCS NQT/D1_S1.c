#include<stdio.h>
int main()
{
	int i,j,max;
	int arr[3][3];
	int avg[3],trainee_score=0;
	
	//Scanning scores of every round
	for(i=0;i<3;i++)  //every round
	{
		for(j=0;j<3;j++)  //score of every player in ith round
		{
			scanf("%d",&arr[i][j]);
			if(arr[i][j]<1 || arr[i][j]>100)
        		{
           			arr[i][j] = 0;
      		}
		}
	}
	//calculating oxygen level and finding average of every trainee in total rounds
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		   trainee_score = trainee_score+arr[j][i];
		}
		avg[i] = trainee_score/3;
		trainee_score = 0; 
	}
	
	//finding the fittest trainee
	max = avg[0];
	for(i=0;i<3;i++)
	{
		if(avg[i]>max)
		{
			max = avg[i];
		}
	}
	
	//checking if other trainees hace the same fitness as the fittest trainee(max)
	for(i=0;i<3;i++)
	{
		if(avg[i] == max)
		{
			printf("Trainee : %d\n",i+1);
		}
		if(avg[i]<70)
		{
			printf("Trainee is Unfit\n");
		}
	}
}

/*
Input :  {{95,92,95},{92,90,92},{90,92,90}};
Output:
Trainee : 1 
Trainee : 3
*/
