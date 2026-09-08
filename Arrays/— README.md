# Arrays

This folder contains C programs focused on fundamental array operations and problem-solving techniques. The programs cover searching, sorting, reversing, finding common elements, calculating values from array contents, and working with multiple arrays.

### Projects

**[Array-Intersection.c](./Array-Intersection.c)**
This program reads two arrays of three integers and finds the elements that are present in both arrays. It uses nested loops to compare the elements of the two arrays and prints their common values.

**[Array-Linear-Search.c](./Array-Linear-Search.c)**
This program performs a linear search on an array of ten integers. It takes another integer as the search target and checks every element of the array, printing all indexes where the target is found. If the target does not exist in the array, it prints a "not found" message.

**[Array-Min-Max.c](./Array-Min-Max.c)**
This program reads ten integers into an array and determines the minimum and maximum values. It compares each element with the current minimum and maximum before displaying the final results.

**[Array-Reversal.c](./Array-Reversal.c)**
This program reads an array of five integers and reverses the order of its elements. It uses an auxiliary array to store the reversed elements and then replaces the original array with the reversed version before displaying both arrays.

**[Ascending-Array-Sort.c](./Ascending-Array-Sort.c)**
This program reads ten integers into an array and displays their elements in ascending order. It first determines the minimum and maximum values, then iterates through the range between them and prints the matching array elements in ascending order.

**[Ascending-Array-Sort-Manual.c](./Ascending-Array-Sort-Manual.c)**
This program reads ten integers and creates a second array containing their elements in ascending order. It progressively selects the smallest available element while keeping track of the original indexes that have already been used.

**[Sum-of-Digits.c](./Sum-of-Digits.c)**
This program reads an integer and calculates the sum of its digits. It first determines the number of digits, stores each digit in an array, and then iterates through the array to calculate the final sum.

**[Sum-of-Digits-for-Multiple-Numbers.c](./Sum-of-Digits-for-Multiple-Numbers.c)**
This program reads ten integers and calculates the total sum of all their digits. For each number, it determines the number of digits, stores the individual digits in an array, and then adds them to a cumulative sum.

## Matrices

This folder contains C programs focused on two-dimensional arrays and basic matrix operations. The projects demonstrate matrix manipulation, nested loops, functions, and random number generation.

### Projects

**[90-Degree-Matrix-Rotation.c](./90-Degree-Matrix-Rotation.c)**
This program reads the elements of a 3×3 matrix, rotates the matrix by 90 degrees using an auxiliary matrix, and displays both the original and rotated versions. It demonstrates the use of two-dimensional arrays, nested loops, and passing a matrix to a function.

**[Random-Matrix-Generator.c](./Random-Matrix-Generator.c)**
This program generates a matrix with user-defined dimensions and fills it with random two-digit integers. It limits the matrix dimensions to a maximum of 10 rows and 10 columns, uses random number generation to populate each element, and then displays the generated matrix.
