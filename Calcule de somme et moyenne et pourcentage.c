#include<stdio.h>
#include<stdlib.h> 
#include<math.h>
int main()
{
    float N1, N2, N3, N4, N5, S, M, D ;
    printf("veuillez entrer les 5 notes");
    scanf("%f %f %f %f %f", &N1, &N2 ,&N3 , &N4, &N5);
    S = N1 + N2 + N3 + N4 +N5;
    M = S/5;
    D = S*M;
    printf("la somme des notes est : %.2f\n",S);
    printf("la moyenne des notes est:%.2f\n",M);
    printf("la poursontage est:%.f",D);
    getchar();
    return 0;
}