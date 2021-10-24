#include<stdio.h>
int main ()

{
 int classes_held,classes_attended; 
 float percentage;
 
   printf("\nEnter Number Of Classes Attended : ");
  scanf("%d",&classes_attended);
 
  printf(" Number Of Classes Held : ");
  scanf("%d",&classes_held);
  
  percentage =  (classes_attended * 100 ) / classes_held ;

    printf("percentage = %.2f\n",percentage);
    
    
  if (percentage >= 75)
  {
  	printf(" Student Is Allowed To Sit In Exam ");
  }
  else
	{
		printf(" Student Is Not Allowed To Sit In Exam ");
	}
	return 0;
}
