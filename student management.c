#include<stdio.h>
#include<string.h>

struct student_detail{
	int rollnumber;
	char name[20];
	char department[20];
	char course[20];
	int dateofjoining;
};

int main(){
	int num,i,year,rnumber;
	printf("ENTER THE NUMBER OF STUDENTS IN THE COLLEGE \n");
	scanf("%d",&num);
	struct student_detail data[num];

		for(i=1;i<=num;i++){
			printf("ENTER DETAIL OF STUDENT %d \n",i);
			printf("ENTER ROLLNUMBER \n");
			scanf("%d",&data[i].rollnumber);
			fflush(stdin);
			puts("ENTER NAME \n");
			gets(data[i].name);
			puts("ENTER DEPARTMENT \n");
			gets(data[i].department);
			puts("ENTER COURSE \n");
			gets(data[i].course);
			printf("ENTER DATE OF ADMISSION \n");
			scanf("%d",&data[i].dateofjoining);
		}
	// displaying records of the students who joined in a particular year....
	printf("ENTER THE YEAR YOU WANT TO SEARCH \n");
	scanf("%d",&year);
	for(i=1;i<=num;i++){
		if(year==data[i].dateofjoining){
			printf("THE NAME OF STUDENT WHO JOINED IN THE YEAR ENTERED ARE %s \n",data[i].name);
		}
	}
	//dispaying records of student
	printf("ENTER THE ROLL NUMBER YOU WANT TO SEARCH \n");
	scanf("%d",&rnumber);
	for(i=1;i<=num;i++){
		if(rnumber==data[i].rollnumber){
			printf("%d \n %s \n %s \n %s \n %d \n",data[i].rollnumber,data[i].name,data[i].department,data[i].course,data[i].dateofjoining);
		}
	}
}