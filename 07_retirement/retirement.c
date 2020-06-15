#include<stdio.h>
#include<stdlib.h>

struct _retire_info{

  int months;
  double contribution;
  double rate_of_return;
};
typedef struct _retire_info retire_info;

void retirement(
		int startAge,
		double initial,
		retire_info working,
		retire_info retired
		)
{
   for (int i=1;i<=working.months;i++){
    printf("Age %3d month %2d you have $%.2lf\n",startAge/12,startAge%12,initial);
    initial=initial+initial*working.rate_of_return/(100*12)+working.contribution;
    startAge++;
  }

   for(int i=1;i<=retired.months;i++){
    printf("Age %3d month %2d you have $%.2lf\n",startAge/12,startAge%12,initial);
    initial=initial+initial*retired.rate_of_return/(100*12)+retired.contribution;
    startAge++;
  }
}

int main()
{
  retire_info working={489,1000,4.5};
  retire_info retired={384,-4000,1};
  retirement(327,21345,working,retired);
  return 0;
}
    
  
  
  

