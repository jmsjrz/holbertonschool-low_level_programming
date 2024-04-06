#include "main.h"

/**
 * count_flip_bits - Counts the number of bits to flip to convert num1 to num2.
 * @num1: First number.
 * @num2: Second number.
 *
 * Description: Performs an XOR between num1 and num2, then counts the set bits
 * in the result.
 *
 * Return: Number of bits to flip.
 */
unsigned int count_flip_bits(unsigned long int num1, unsigned long int num2)
{
	unsigned long int xor_result = num1 ^ num2;

	unsigned int flip_count = 0;

	while (xor_result > 0)
	{
		flip_count += xor_result & 1;
		xor_result >>= 1;
	}
	return (flip_count);
}
