#include<stdio.h>
#include<conio.h>

void main()
{
	int roll_no[50], n,i;
	float sub_1[50], sub_2[50], sub_3[50], add_sub[50], total, divs;
	printf("Enter the number of Students:");
	scanf("%d", &n);
	printf("\nDETAILS OF THE STUDENT TO BE ENTERED:");
	for(i=0;i<n;i++)
	{
		printf("\nEnter the Roll_No:");
		scanf("%d", &roll_no[i]);
		printf("\nMarks Secured in Subject 1, Subject 2 , Subject 3  and one additional subject");
		
		printf("\nSubject 1:");
		scanf("%f", &sub_1[i]);
		
		printf("\nSubject 2:");
		scanf("%f", &sub_2[i]);
		
		printf("\nSubject 3:");
		scanf("%f", &sub_3[i]);
		
		printf("\nAdditional Subject:");
		scanf("%f", &add_sub[i]);
		
		
		
	}
	printf("\t\n\nReport Card of the student(s):");
	for(i=0;i<n;i++)
	{
		total=0;
		divs=0;
		total=sub_1[i] + sub_2[i] + sub_3[i] + add_sub[i];
		divs=total/4;
		printf("\nRoll_No: %d\t ", roll_no[i]);
		printf("Total Marks: %.2f\t",total);
		printf("Percentage: %.2f\t",divs);
		
		if((sub_1[i]<35 || sub_2[i]<35 || sub_3[i]<35 || add_sub[i]<35)&& divs>35)
				printf("Division: No Division.",divs);
		else if(divs>=60)
		
			printf("Division: First Division",divs);
			
	
		else if(divs>=45 && divs<60)
	
		
			printf("Division: Second Division",divs);
			
		
		else if (divs>=35 && divs<45)
		
		printf("Division: Third Division",divs);
			
		
		else 
		printf("The Student has Failed!",divs);
		
	}
	getch();
	
}
