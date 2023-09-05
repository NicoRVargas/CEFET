#include <stdio.h>

int main()
{
    int initialDay, initialHour, initialMinute, initialSecond;
    initialDay = initialHour = initialMinute = initialSecond = 0;

    int finalDay, finalHour, finalMinute, finalSecond;
    finalDay = finalHour = finalMinute = finalSecond = 0;

    int calculationGeneral, W, X, Y, Z;

    scanf("%d", &initialDay);
    scanf("%d %d %d", &initialHour, &initialMinute, &initialSecond);

    scanf("%d", &finalDay);
    scanf("%d %d %d", &finalHour, &finalMinute, &finalSecond);

    calculationGeneral = (finalDay * 86400 - initialDay * 86400) + (finalHour * 3600 - initialHour * 3600) + (finalMinute * 60 - initialMinute * 60) + (finalSecond - initialSecond);
    W = calculationGeneral / 86400;
    X = (calculationGeneral % 86400) / 3600;
    Y = ((calculationGeneral % 86400) % 3600) / 60;
    Z = (((calculationGeneral % 86400) % 3600) % 60);

    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", W, X, Y, Z);
}