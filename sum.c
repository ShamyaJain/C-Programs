#include <stdio.h>
int main()
{
  int principle;
  float time, rate_of_interest, simple_interest;
  printf("Principle Amount : ");
  scanf("%d", &principle);
  printf("Rate of Interest : ");
  scanf("%f", &rate_of_interest);
  printf("Years            : ");
  scanf("%f", &time);

  simple_interest = principle * time * rate_of_interest /100;
  printf("Simple Interest  : %.2f", simple_interest);

  return 0;
}
