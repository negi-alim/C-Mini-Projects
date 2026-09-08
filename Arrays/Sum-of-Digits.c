#include<stdio.h>
#include<conio.h>

// Reads a number and calculates the sum of its digits.

int main(){
	int number,count=0,sum=0,remainder,i;

	// Read a number.
	scanf("%i",&number);

	remainder=number;

	// Calculate the number of digits.
	while(remainder>=1){
		count++;
		remainder/=10;
	}

	// Store each digit in an array.
	int digits[count];
	remainder=number;

	for(i=0 ;i<count ;i++){
		digits[i]=remainder%10;
		remainder/=10;
	}

	// Add all digits together.
	for(i=0;i<count;i++)
		sum+=digits[i];

	printf("%d",sum);

	return 0;
}