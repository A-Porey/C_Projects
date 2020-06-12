/* Calculation of avarage and percentage marks*/


# include<stdio.h>
int main()
{
    float beng, eng, math, phy, comp , total, avg, per;
    printf("Marks obtain in Bengali is ");
    scanf("%f", & beng);
    printf("Marks obtain in English is ");
    scanf("%f", & eng);
    printf("marks obtain in Mathematics is ");
    scanf("%f", & math);
    printf("Marks obtain in Physics is ");
    scanf("%f", & phy);
    printf("Marks obtain in Computer Sci.  is ");
    scanf("%f", & comp);
    /* Calculation of total marks*/
    total = (beng + eng + math + phy +comp);
    /* Calculation of avarage marks */
    avg = total/5;
    /* Calculation of percentage marks */
    per = (total/500)*100;
    printf("Avarage marks obtaion by the student is %f\nPercentage of marks =%f", avg, per);
    return 0;
}