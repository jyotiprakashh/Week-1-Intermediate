int main()
{
float p,r,t,SI;
 printf("Enter principle (amount): ");
    scanf("%f", &p);

    printf("Enter time: ");
    scanf("%f", &t);

    printf("Enter rate: ");
    scanf("%f", &r);

SI=(p*r*t)/100;
printf("Simple interest = %f",SI);
return 0;
}