#include<stdio.h>
#include<string.h>

struct details{
	char name[20];
	int salary;
	int hoursworked;
};

int main()
{
	int num,i;
	printf("ENTER THE NUMBER OF EMPLOYEES \n");
	scanf("%d",&num);
	struct details data[100];
	for(i=1;i<=num;i++){
		printf("ENTER THE NAME OF %d EMPLOYEE \n",i);
		scanf("%s",&data[i].name);
		printf("ENTER THE SALARY OF %d EMPLOYEE \n",i);
		scanf("%d",&data[i].salary);
		printf("ENTER THE HOURS OF %d EMPLOYEE WORKED \n",i);	
		scanf("%d",&data[i].hoursworked);
		if(data[i].hoursworked==8){
			data[i].salary=data[i].salary+50;
		}
		else if(data[i].hoursworked==10){
			data[i].salary=data[i].salary+100;
		}
		else if(data[i].hoursworked>=12){
			data[i].salary=data[i].salary+150;
		}
	}
	for(i=1;i<=num;i++){
		printf("employee %s increasd salary is %d \n",data[i].name,data[i].salary);
	} 	
}