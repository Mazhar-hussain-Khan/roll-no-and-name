/* Mazhar Hussain      Registration number: 20MELE098
Email:20Mdele098@uetmardan.edu.pk */
//Take your name and roll number as inputs and display them 7 times on the screen using for loop//
#include<iostream>//pre processor directives and library contains codes that will be used//
#include<conio.h>//pre processor directives and library contains codes that will be used//

int main()
{
	char name[50];//Declaing character//
	int roll_no;//declaring variable//
	printf("enter your name:\n");//asking use to enter name//
	scanf("%50s",&name);//saving name//
	printf("enter your roll no:\n");//asking user to enter roll no//
	scanf("%d",&roll_no);//saving roll no//
	for(int i=0;i<7;i++){
		printf("name is %s\n roll no is %d\n",name,roll_no);//displaying the name and roll no seven times using for loop//
	}
	return 0;
	}
