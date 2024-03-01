#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* _atoi - tranforms a string into a number
* @s: string
* Return: integer
*/

Correct output: "-2147483648" // INT_MIN

[gcc] Corrections file copied: c/_putchar.c
[gcc] Corrections file copied: 2155/19944/main_12.c
[gcc] Command to run:
timeout 30 bash -c 'gcc -o 100-atoi_12 -Wall -Werror -Wextra -pedantic -std=gnu89 _putchar.c 100-atoi.c main_12.c '
[gcc] Return code: 0
[gcc] Actual stdout:
[gcc] Actual stdout length: 0
[gcc] Actual stderr:
[gcc] Actual stderr length: 0
[compare] Command to run:
timeout 30 bash -c ./100-atoi_12
[compare] Return code: 0
[compare] Desired stdout:
-2147483648
[compare] Desired stdout length: 12
[compare] Actual stdout:
-2147483648
[compare] Actual stdout length: 12
[gcc] Corrections file copied: c/_putchar.c
[gcc] Corrections file copied: 2155/19944/main_12.c
[gcc] Command to run:
timeout 30 bash -c 'gcc -o 100-atoi_12 -Wall -pedantic -Werror -Wextra -fsanitize=signed-integer-overflow _putchar.c 100-atoi.c main_12.c '
[gcc] Return code: 0
[gcc] Actual stdout:
[gcc] Actual stdout length: 0
[gcc] Actual stderr:
[gcc] Actual stderr length: 0
[compare] Command to run:
timeout 30 bash -c './100-atoi_12 2>&1'
[compare] Return code: 0
[compare] Desired stdout:
-2147483648
[compare] Desired stdout length: 12
[compare] Actual stdout:
100-atoi.c:31:5: runtime error: signed integer overflow: 2147483640 + 8 cannot be represented in type 'int'
100-atoi.c:36:5: runtime error: negation of -2147483648 cannot be represented in type 'int'; cast to an unsigned type to negate this value to itself
-2147483648
[compare] Actual stdout length: 269
[compare] Actual stderr:
[compare] Actual stderr length: 0
