#include<stdio.h>
#include<string.h>

struct date{
	int day;
	int month;
	int year;
};

int main(){
	struct date detail;
	printf("Enter Day: ");
	scanf("%d",&detail.day);
	printf("Enter Month: ");
	scanf("%d",&detail.month);
	printf("Enter year: ");
	scanf("%d",&detail.year);
	printf("TODAYS DATE");
	printf("%d %d %d",detail.day,detail.month,detail.year);
	
	detail.month=detail.month+2;
	detail.day=detail.day+(45-30);
	
	if(detail.month>12){
		detail.month=detail.month-1;
		detail.year=detail.year+1;
	}
	else if(detail.month==1||detail.month==3||detail.month==5||detail.month==7||detail.month==8||detail.month==10||detail.month==12){
		detail.day=detail.day-31;
	}
	else{
		detail.day=detail.day-30;
	}
	printf("\nFinal Date Is:");
	printf("\t%d/%d/%d",detail.day,detail.month,detail.year);
}