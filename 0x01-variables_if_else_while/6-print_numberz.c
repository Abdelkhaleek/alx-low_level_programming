#include <stdio.h>
/**
 *  * main -Entry point
 *   * Description: 'prints the lowercase alphabet in reverse'
 *    * Return: Always 0
 */
int main(void)
{
        int num;

        for (num = 0; num <= 9; num++)
        {
                putchar(num + 48);
        }
        putchar('\n');
        return (0);
}
