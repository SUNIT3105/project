#include<stdio.h>
int main()
{
        int days,years,weeks;
        days=1329;
        years=days/365;
        weeks=(days%365)/7;
        days=days-((years*365)+(weeks*7));
        printf("Years:Weeks:Days %d %d %d",years,weeks,days);
 return 0;
}


