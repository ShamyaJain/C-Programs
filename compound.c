#include <stdio.h>
#include<math.h>
int main()
{
  int principle;
  float time, rate_of_interest, compound_interest;
  printf("Principle Amount : ");
  scanf("%d", &principle);
  printf("Rate of Interest : ");
  scanf("%f", &rate_of_interest);
  printf("Years            : ");
  scanf("%f", &time);

  compound_interest = (principle * pow((1 + rate_of_interest/100) , time));
  printf("Compound Interest  : %.2f", compound_interest);

  return 0;
}
