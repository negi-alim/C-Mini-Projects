#include<stdio.h>
#include<conio.h>

// Rotates a 3x3 two-dimensional array by 90 degrees.
void rotateMatrix(int matrix[3][3]){
	int rotatedMatrix[3][3];
	int i,j,k;

	// Create the rotated matrix by changing the positions of the elements.
	for(i=2,k=0;i>=0;i--,k++){
		for(j=0;j<3;j++){
			rotatedMatrix[k][j]=matrix[j][i];
		}
	}

	// Copy the rotated matrix back to the original matrix.
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			matrix[i][j]=rotatedMatrix[i][j];
		}
	}
}

int main(){
	int matrix[3][3],originalMatrix[3][3];
	int i,j;


	// Read the elements of the matrix.
	printf("Reading the elements of the matrix:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("index[%d][%d]: ",i,j);
			scanf("%d",&matrix[i][j]);

			// Keep a copy of the original matrix.
			originalMatrix[i][j]=matrix[i][j];
		}
	}

	// Rotate the matrix by 90 degrees.
	rotateMatrix(matrix);

	// Print the original matrix.
	printf("\n\nSource matrix:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ",originalMatrix[i][j]);
		}
		printf("\n");
	}

	// Print the rotated matrix.
	printf("\n\nChanged matrix:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ",matrix[i][j]);
		}
		printf("\n");
	}

	return 0;
}