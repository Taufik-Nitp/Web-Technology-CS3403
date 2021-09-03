#include<stdio.h>
float temperature (float degree);
float newton( int mass); //write two function 1.To change celcius to fahrenhiet . 2 To find the weight in newton of any mass.
int main()
{ 
    int degree, mass;
printf("write the value in degree celcius\n Write the value of mass");
scanf("%d %d",&degree,&mass);
printf("The wieght in newton is %f\n",newton( mass));
printf("The value of temperature in fahrenheit is %f",temperature(degree));

return 0;
}
float temperature (float degree){
    float fahrenhiet;
    fahrenhiet= degree* (1.8) + 32;
    return fahrenhiet;
}
float newton( int mass){
    float weight ;
    weight=9.8*mass;
    return weight;
}