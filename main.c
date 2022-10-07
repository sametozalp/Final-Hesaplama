#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "TURKISH");
    int vize,finall;

    printf("Vize: ");
    scanf("%d",&vize);

    float b=50-vize*40/100,c;
    c=b*100/60;

    if(c>50)
        printf("Finalden alýnmasý gereken not: %.2f\n",c);
    else
        printf("Finalden alýnmasý gereken not: 50");

    return 0;
}
