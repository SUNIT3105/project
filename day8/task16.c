
float interest(int p,float r,int n)
{
    int SI;
    SI=p*r*n/100;
    return(SI);
}
int main()
{
   int p,n,i;
   float r,z,SI;
   for(i=1;i<=3;i++)
   {
    printf("enter the value\n");
    printf("enter the principal amount\n");
    scanf("%d",&p);
    printf("enter the rate of interest\n");
    scanf("%d",&r);
    printf("enter the principal amount\n");
    scanf("%d",&n);
    =interest(p,r,n);
    printf("simple interest for set %d %d",z,SI);
   }  
}

   

