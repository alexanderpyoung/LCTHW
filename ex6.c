#include <stdio.h>

int main(int argc, char *argv[])
{
  int distance = 100;
  float power = 2.345f;
  double super_power = 56789.4532;
  char initial = 'P';
  char first_name[] = "Alexander";
  char last_name[] = "Young";
  char empty[] = "";

  printf("You are %d miles away.\n", distance);
  printf("You have %f levels of power.\n", power);
  printf("You have %f super powers.\n", super_power);
  printf("You have the inital %c.\n", initial);
  printf("You have the first name %s.\n", first_name);
  printf("You have the last name %s.\n", last_name);
  printf("Your whole name is %s %c. %s.\n", first_name, initial, last_name);
  
  printf("%s", empty);

  return 0;
}
