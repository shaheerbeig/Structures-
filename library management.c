#include<stdio.h>
#include<string.h>
struct book{
	int accessionnumber;
	char nameofauthor[20];
	char booktitle[20];
	int flag;
};
int choice;
char option;
void menu(void);
int main(){
	int num,i,booknumber;
	struct book details[100];
	
	while(choice!=7){
	menu();
	switch (choice){
	case 1:
		printf("ENTER THE ACCESSION NUMBER OF THE BOOK WHOSE INFORMATION YOU WANT TO KNOW \n");
		scanf("%d",&booknumber);
		fflush(stdin);
		for(i=0;i<num;i++){
			if(strcmp(booknumber,details[i].accessionnumber)==0){
				printf("AUTHOR NAME: %s\n ",details[i].nameofauthor);
				printf("BOOK TITLE: %s\n ",details[i].booktitle);
				break;
			}
			else{
				printf("BOOK NOT FOUND \n");
				break;
			}
		}
	case 2:
		while(option!='N'){
		printf("ENTER THE NUMBER OF BOOKS IN THE LIBRARY \n");
		scanf("%d",&num);
	
		for(i=0;i<num;i++){
		printf("ENTER THE ACCESSION NUMBER OF THE BOOK \n");
		scanf("%d",&details[i].accessionnumber);
		fflush(stdin);
		printf("ENTER THE AUTHOR NAME \n");
		gets(details[i].nameofauthor);
		printf("ENTER THE BOOK TITLE \n");
		gets(details[i].booktitle);
	}
		}
	}
	}
}
void menu(void){
	printf("FOLLOWING THE ARE OPTIONS . CHOOSE WHAT YOU WANT TO DO \n");
	printf(" 1 - Display book information \n 2 - Add a new book \n 3 - Display all the books in the library of a particular author \n 4 - Display the number of books of a particular title \n 5 - Display the total number of books in the library \n 6 - Issue a book \n 7 - Exit program");
	printf("CHOOSE FROM THE OPTION ABOVE \n");
	scanf("%d",&choice);
}