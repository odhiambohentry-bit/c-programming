//variable and data types

#include <stdio.h>

int main(){
	//declare and initialize variables
	char grade='A';
	char name[15]={"Thomas"};
	int age=2;
	float mark=70;
	double pi=3.142;
	
	printf("the grade is %c\n",grade);
	printf("my name is %s\n",name);
	printf("i am %d years old\n",age);
	printf("i scored %.2f mark in kcse\n",mark);
	printf("the value of pi is %.3f\n",pi);
	
	return 0;
}