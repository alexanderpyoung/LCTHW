#include <stdio.h>

int main(int argc, char *argv[])
{
  int areas[] = {10, 12, 13, 14, 20};
  char name[] = "Alexander";
  char full_name[] = {
    'X', 'a', 'n', 'd',
    ' ', 'P', '.', ' ',
    'Y', 'o', 'u', 'n', 'g', '\0'
  };
  name[1] = '5';

  //%ld may need to be changed to %u for some compilers

  printf("The size of an int: %ld\n", sizeof(int));
  printf("The size of areas (int[]): %ld.\n", sizeof(areas));
  printf("The number of ints in areas: %ld\n", sizeof(areas) / sizeof(int));
  printf("The first area is %d, the second is %d\n", areas[0], areas[1]);
  
  printf("The size of a char: %ld\n", sizeof(char));
  printf("The size of name (char[]): %ld\n", sizeof(name));
  printf("the number of chars: %ld\n", sizeof(name) / sizeof(char));
  
  printf("The size of full_name (char[])): %ld\n", sizeof(full_name));
  printf("The number of chars: %ld\n", sizeof(full_name) / sizeof(char));

  printf("name=%s and full_name=%s\n", name, full_name);

  return 0;

}
