

#include <stdio.h>
#define EXAMS 3
#define STUDENTS 10000

int student =0;
int a=0;
int b=1;
int c=2;
float assignmentAverage;
float midAverage;
float finalAverage;
float all1=0;
float all2=0;
float all3=0;
void printArray(const int[][EXAMS],int,int);
int minimum(const int[][EXAMS],int,int);
int maximum(const int [][EXAMS], int,int);
double average(const int[][EXAMS], float,float*,int);


int main()
{
	int score[STUDENTS][EXAMS];
	
	printf("\n");
    printf("                  -- Hello! Welcome to Two Dimensional Student Scores --\n");
    printf("<===========================================<o>===========================================>\n");
   	printf("          -- Please input the scores of student's assignment,mid,and final' --\n");
   	printf("<===========================================<o>===========================================>\n");
   	printf("\n");
   
 
   	
	for(;;)
	{
		printf("\n<= Score for student %d =>\n",student+1);
		printf("1. Assignment:");
		scanf("%d",&score[student][0]);
		
		if(feof(stdin))
		{
			printf("\nThe array is:\n");
			printArray(score,student,EXAMS);
			printf("\n");
			printf("\nThe Minimum score for the assignments:%d",minimum(score,student,a) );
			printf("\nThe Minimum score for the Mid-Term:%d",minimum(score,student,b) );
			printf("\nThe Minimum score for the Final-Term:%d",minimum(score,student,c) );
			printf("\n");
			printf("\nThe Maximum score for the assignments:%d",maximum(score,student,a) );
			printf("\nThe Maximum score for the Mid-Term:%d",maximum(score,student,b ));
			printf("\nThe Maximum score for the Final-Term:%d",maximum(score,student,c) );
			printf("\n");
			printf("\n");
			
			average(score, student,&all1,a);
			average(score, student,&all2,b);
			average(score, student,&all3,c);
			
			assignmentAverage=all1/student;
			midAverage=all2/student;
			finalAverage=all3/student;
			
			printf("The Average score for Assignment is : %.2f",assignmentAverage);
			printf("\nThe Average score for Mid-Term is : %.2f",midAverage);
			printf("\nThe Average score for Final-Term is : %.2f",finalAverage);
			printf("\n");
			printf("\n<===========================================<o>===========================================>\n");
			printf("                   -- Thank you for using Two Dimensional Student Scores--\n");
			printf("<===========================================<o>===========================================>\n");	
		
	
	
			break;
				
		}
		
		printf("2. Mid-Term:");
		scanf("%d",&score[student][1]);
		
		printf("3. Final-Term:");
		scanf("%d",&score[student][2]);
		
		
		student++;
				
	}
	return 0;
}

double average(const int grades[][EXAMS], float pupils,float *total,int h)
{
	int i;
	
	for(i=1;i<=pupils;i++)
	{
	 	*total = *total + grades[i-1][h];
	}
	return(double) *total/pupils;
}



int minimum(const int grades[][EXAMS], int pupils,int h)
{
	int i, lowGrade=100;
	
	for(i=0;i<=pupils-1;i++)
		
			if(grades[i][h]<lowGrade)
				lowGrade=grades[i][h];
				
				
	return lowGrade;
}


int maximum(const int grades[][EXAMS], int pupils,int h)
{
	int i,j,highGrade=0;
	for(i=0;i<=pupils-1;i++)
	if( grades[i][h]>highGrade)
	highGrade=grades[i][h];
				
	return highGrade;
}




void printArray(const int score[][EXAMS], int disciple, int quiz)
{
	int i,j;
	printf("                              [ASSIGMENT]   [MID]    [FINAL]  ");

	for(i=0;i<=disciple-1;i++)
	{
		printf("\nStudent number %d           ",i+1);
		
		for(j=0;j<=quiz-1;j++)
			printf("        %d",score[i][j]);
	}
}

