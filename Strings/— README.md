# Strings

This folder contains C programs focused on **string processing and character manipulation**. The programs cover a variety of fundamental string operations, including searching, comparison, replacement, frequency analysis, case conversion, palindrome detection, tokenization, and basic arithmetic expression evaluation.

## Programs

### Arithmetic-Expression-Evaluator.c
This program evaluates a basic arithmetic expression containing variables and the `+`, `-`, `*`, and `/` operators. It identifies the unique variables in the expression, assigns numeric values to them, replaces the variables with their values, and evaluates multiplication and division before addition and subtraction. It demonstrates string processing, arrays, nested loops, and basic expression evaluation.

### Character-Frequency-Analysis.c
This program analyzes the characters in a text and counts the number of occurrences of each unique character. It converts uppercase letters to lowercase, ignores spaces, periods, and commas, and displays the characters ordered by their frequency. It demonstrates string processing, nested loops, arrays, character manipulation, and frequency analysis.

### Character-Frequency-in-String.c
This program reads a string and a character from the user and counts how many times the selected character appears in the string. It demonstrates string traversal, character comparison, loops, and basic frequency counting.

### Custom-strcat-Implementation.c
This program manually implements the basic behavior of the `strcat` function by appending one string to another. It reads two strings, adds a space between them, copies the characters of the first string to the end of the second string, and displays the resulting string. It demonstrates string traversal, character arrays, indexing, and manual string manipulation.

### Custom-strcmp-Implementation.c
This program manually implements the basic comparison behavior of the `strcmp` function. It compares two input strings character by character and, if their common characters are equal, compares their lengths to determine the result. It demonstrates string comparison, character values, loops, and manual implementation of a standard string operation.

### Custom-strtok-Implementation.c
This program demonstrates a simple manual implementation of string tokenization based on a user-selected separator character. It scans the input string, prints each segment between separators on a separate line, and then displays the final segment. It demonstrates string traversal, character comparison, indexing, and basic string parsing.

### Palindrome-Word-Detector.c
This program searches for palindrome words within an input text. It separates the text into words using spaces, periods, and commas, then compares characters symmetrically around the center of each word to determine whether the word is a palindrome. It demonstrates string traversal, character comparison, loops, and palindrome detection.

### Pangram-Checker.c
This program checks whether an input text contains all English alphabet letters by converting uppercase letters to lowercase, collecting unique alphabetic characters, and comparing their combined character value with the expected value for the complete lowercase alphabet. It demonstrates string processing, character manipulation, nested loops, and basic pangram detection.

### Roman-Numeral-Converter-First-Version.c
This program converts a Roman numeral string into an integer value by assigning numerical values to Roman numeral characters and processing them according to their relative values. It demonstrates character processing, arrays, functions, conditional statements, and numerical conversion.

### Roman-Numeral-Converter-Second-Version.c
This program converts a Roman numeral into its corresponding integer value. It first maps each Roman numeral character to its numerical value and then processes consecutive values using addition or subtraction depending on their order. It demonstrates arrays, functions, character processing, loops, and conditional logic.

### Substring-Occurrence-Counter.c
This program searches for a substring within a larger string and counts how many times the substring occurs. It then finds and displays the starting index of the first occurrence. The program demonstrates nested loops, character comparison, string traversal, indexing, and basic substring searching.

### Toggle-String-Case.c
This program toggles the case of English letters in an input string, converting uppercase letters to lowercase and lowercase letters to uppercase. It first creates a copy of the original text and then processes each character to determine the appropriate case conversion. It demonstrates character manipulation, arrays, loops, and functions.

### Word-Search-and-Replacement.c
This program searches for a specified character sequence within the words of an input text and displays all words that contain that sequence. The program uses a separate function to traverse the text, identify individual words, and check whether the target sequence appears within each word. This project demonstrates string traversal, functions, nested loops, character comparison, arrays, and manual string processing in C.


### Word-Search-in-String.c
This program searches for a specified word within an input string by comparing the characters of the target word with corresponding characters in the text. It reports whether the word exists in the input. The program demonstrates string traversal, nested loops, character comparison, indexing, and basic word searching.