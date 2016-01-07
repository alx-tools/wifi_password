/*
 *
 * Compile and run this for
 *
 *\ \      / (_)/ _(_) |  _ \ __ _ ___ _____      _____  _ __ __| |
 * \ \ /\ / /| | |_| | | |_) / _` / __/ __\ \ /\ / / _ \| '__/ _` |
 *  \ V  V / | |  _| | |  __/ (_| \__ \__ \\ V  V / (_) | | | (_| |
 *   \_/\_/  |_|_| |_| |_|   \__,_|___/___/ \_/\_/ \___/|_|  \__,_|
 *
 * Acces point: Holberton Guest
 *
 * https://www.holbertonschool.com
 *
 */

#include <unistd.h>

int main(void)
{
  int i, numbers[] = {1, 3, 5, 32, 98, 402, 94111};

  for (i = 6; i >= 0; i--)
    if (numbers[i] % 3 == 0)
      write(1, "Fizz", 4);
    else if (!(numbers[i] % 5))
      write(1, "Buzz", 4);
  return (0);
}

/*
 * Note: The "Fizz-Buzz test" is an interview question designed to
 * help filter out the 99.5% of programming job candidates who
 * can't seem to program their way out of a wet paper bag
 */
