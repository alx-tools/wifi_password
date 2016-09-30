/*
 *
 * Compile and run this for
 *
 *\ \      / (_)/ _(_) |  _ \ __ _ ___ _____      _____  _ __ __| |
 * \ \ /\ / /| | |_| | | |_) / _` / __/ __\ \ /\ / / _ \| '__/ _` |
 *  \ V  V / | |  _| | |  __/ (_| \__ \__ \\ V  V / (_) | | | (_| |
 *   \_/\_/  |_|_| |_| |_|   \__,_|___/___/ \_/\_/ \___/|_|  \__,_|
 *
 * SSID: Holberton School Guest
 *
 * https://www.holbertonschool.com
 *
 */

#include <unistd.h>

int main(void)
{
  int i;
  int numbers[] = {1, 2, 15, 26, 28, 98, 163, 402, 691};

  for (i = 0; i < 8; i++)
    {
      if (numbers[i] % 3 == 0)
	write(1, "Fizz", 4);
      if (numbers[i] % 5 == 0)
	write(1, "Buzz", 4);
    }
  return (0);
}

/*
 * If you don't understand this, ask a student.
 *
 * Note: The "Fizz-Buzz test" is an interview question designed to
 * help filter out the 99.5% of programming job candidates who
 * can't seem to program their way out of a wet paper bag
 */
