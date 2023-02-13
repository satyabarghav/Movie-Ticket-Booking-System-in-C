#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
int avail(int seat[]);
int refund(int seat[]);
int reserve(int seat[]);
int main()
{
	int seat[101];
	int i;
	for(i=1;i<=100;i++)
	{
		seat[i]=1;
	}
	int opt;
	while(1)
	{
		printf("1.Availability\n2.Reservation\n3.Refund\n4.Exit\n");
		printf("Enter the option : ");
		scanf("%d",&opt);
		switch(opt)
	{
		case 1:
			avail(seat);
			break;
		case 2:
			reserve(seat);
			break;
		case 3:
			refund(seat);
			break;
		case 4:
			exit(0);
			break;
		default:
			printf("\nInvalid");
	}
	}
	
}
int avail(int seat[])
{
	system("cls");
	int i,j;
	int k = 1;
	printf("%18c================SCREEN================\n",' ');
	for(i=1;i<=10;i++)
	{
		printf("\n");
		for(j=1;j<=10;j++)
		{
			if(seat[k])
				printf("%d\t",k);
			else
			 	printf("(=B=) \t");
			k++;
		}
	}
	printf("\n(=B=) = Already Booked\n");
	printf("\n");
}
int reserve(int seat[])
{
	int sno;
	printf("Enter Seat number to be Reserved : ");
	scanf("%d",&sno);
	if(seat[sno]){
	seat[sno]=0;
	printf("Your seat number %d is booked\n",sno);
	}
	else
	 printf("The Seat is already reserved.\n");
}
int refund(int seat[])
{
	int sno;
	printf("Enter the Seat Number : ");
	scanf("%d",&sno);
	if(seat[sno]==0)
	{
		seat[sno]=1;
		printf("Your Refund is initiated and will be processed within the next 7 working days\n");
	}
	else
	{
		printf("This Seat was not booked\n");
	}			
}
