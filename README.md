Multiplication Table Generator in C


A simple and efficient C program that generates a multiplication table (from 1 to 10) for any given number.

🚀 Latest Update: Huge Number Support (Bug Fix)
The Issue (Integer Overflow)

Previously, the program used standard int variables. When entering numbers with 8 to 10+ digits, the calculations exceeded the 32-bit integer limit (2,147,483,647), causing Integer Overflow. As a result, the output produced unexpected negative numbers (e.g., -1, -2, -3).

What Was Fixed


Renamed Source File: Updated to Multiplication Table Generator .c.
Upgraded Data Type: Switched input and calculation variables from int (32-bit) to long long int (64-bit).
Updated Format Specifiers: Replaced %d with %lld (Long Long Decimal) in both scanf() and printf().
Higher Limit: The program can now effortlessly handle massive numbers without overflowing!

How to Compile and Run.

//bash

Using GCC (Linux / macOS): gcc "Multiplication Table Generator .c" -o "Multiplication Table Generator"
./"Multiplication Table Generator"

// Windows Terminal or CMD

Using MSVC (Developer Command Prompt / VS Code): cl "Multiplication Table Generator .c"
"Multiplication Table Generator .exe"

Example Output:
<img width="1465" height="1006" alt="Screenshot 2026-11-07 103041" src="https://github.com/user-attachments/assets/68590dc8-d6b7-4ca5-a580-20c71fc66752" />
