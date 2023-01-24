#include<stdio.h>
#include<string.h>

struct Date{
	int day;
	char month;
	int year;
};

int main(){
	int i;
	struct Date s1;
	printf("ENTER DATE  1 \n");
	scanf("%d %s %d",&s1.day,&s1.month,&s1.year);
	
	struct Date s2;
	printf("ENTER DATE 2 \n");
	scanf("%d %s %d",&s2.day,&s2.month,&s2.year);

	
	if(s1.day==s2.day&&s1.month==s2.month&&s1.year==s2.year){
		printf("DATES ARE SAME \n");
	}
	else{
		printf("DATES ARE NOT SAME \n");
		}
}