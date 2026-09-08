#include<stdio.h>
#include<conio.h>

// Reads 10 numbers and calculates the sum of all their digits.

int main(){
	int number,count=0,sum=0,remainder,i,j=0;

	while(j<10){
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

		// Add all digits to the total sum.
		for(i=0;i<count;i++)
			sum+=digits[i];

		j++;
	}

	printf("%d",sum);

	return 0;
}