#include<stdio.h>
#include<conio.h>
#include<time.h>
// Generates and prints a matrix of random two-digit numbers.
// The number of rows and columns can be up to 10.

int main(){
	int rows,columns;

	printf("rows: ");
	scanf("%d",&rows);

	printf("columns: ");
	scanf("%d",&columns);

	int matrix[rows][columns];
	int i,j;
	int randomNumber;

	srand(time(0));

	if(rows<=10 && columns<=10){

		// Generate random two-digit numbers for each matrix element.
		for(i=0;i<rows;i++){
			for(j=0;j<columns;j++){
				randomNumber=rand();

				while(randomNumber<10 || randomNumber>99){
					randomNumber=rand();
				}

				matrix[i][j]=randomNumber;
			}
		}

		// Print the generated matrix.
		for(i=0;i<rows;i++){
			for(j=0;j<columns;j++)
				printf("%d ",matrix[i][j]);

			printf("\n");
		}
	}

	return 0;
}