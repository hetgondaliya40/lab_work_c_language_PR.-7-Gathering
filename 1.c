/*
Q.1 Write a menu-driven program to implement arithmetic operations such as +, -, *, /, and % using UDF, switch case, and looping. Make sure that the program is endless until a certain letter is pressed.
For example,
Output:
Press 1 for +
Press 2 for -
Press 3 for *
Press 4 for /
Press 5 for %
Press 0 for the exit

Enter your choice: 1
Enter the first number: 5
Enter the second number: 3
Addition of 5 and 3 is 8

Press 1 for +
Press 2 for -
Press 3 for *
Press 4 for /
Press 5 for %
Press 0 for the exit

Enter your choice: 4
Enter the first number: 10
Enter the second number: 5
Division of 10 and 5 is 2

Press 1 for +
Press 2 for -
Press 3 for *
Press 4 for /
Press 5 for %
Press 0 for the exit

Enter your choice: 0
*/
#include<stdio.h>

int  add (int g, int h){
	return g+h;
}

int sub (int g, int h){
	return g-h;
}

int div (int g, int h){
	return g/h;
}

int multi (int g, int h){
	return g*h;
}

int modulo (int g, int h){
	return g%h;
}

main(){
	
	int g,h,c;
		do{
	printf("\n[------MENU-DRIVEN------]\n\n\n");
	printf("1. ADD\n");
	printf("2. SUB\n");
	printf("3. DIV\n");
	printf("4. MULTI\n");
	printf("5. MODULO\n");
	printf("6. EXIT\n");
	printf("enter number : \n");
	scanf("%d",&c);
	
	
	if(c>=1 && c<6){
		
		printf("enter value G :");
			scanf("%d",&g);
			
		printf("enter value H :");
			scanf("%d",&h);
		
		switch(c){
		
		case 1:
			printf("add = %d",add(g,h));
		break;
		
			case 2:
			printf("sub = %d",sub(g,h));
		break;
		
			case 3:
			printf("div = %d",div(g,h));
		break;
		
			case 4:
			printf("multi = %d",multi(g,h));
		break;
		
		case 5:
			printf("modulo = %d",modulo(g,h));
		break;
		
	
 		}
	
		}  
								
	}
	while(c!=6);
}
