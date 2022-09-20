/**
 * File 1-alphabet.c
 * Auth: Raquel Bezerra
 */

#include "main.h"

/**
 *  * function_name - Short description, single line
 *   * @parameterx: Description of parameter x
 *   (* a blank line
 *    * Description: Longer description of the function)?
 *    (* section header: Section description)*
 *     * Return: Description of the returned value
 *      */
void print_alphabet(void)
{
		char letter;

		for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

		_putchar('\n');
}
