#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <windows.h>
using namespace std;
int main()
{
int respuesta,resp;
int a[16]{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
int i=0;
int vendido=0;
int novendidos=0;
while(respuesta!=0)
{
printf("Bienvenido\n");
printf("Los estados de los asientos son: LIBRE =0, VENDIDO=1\n");
printf("Asiento 1=[%d]\n",a[1]);
printf("Asiento 2=[%d]\n", a[2]);
printf("Asiento 3=[%d]\n", a[3]);
printf("Asiento 4=[%d]\n",a[4]);
printf("Asiento 5=[%d]\n",a[5]);
printf("Asiento 6=[%d]\n",a[6]);
printf("Asiento 7=[%d]\n",a[7]);
printf("Asiento 8=[%d]\n",a[8]);
printf("Asiento 9=[%d]\n",a[9]);
printf("Asiento 10=[%d]\n",a[10]);
printf("Asiento 11=[%d]\n",a[11]);
printf("Asiento 12=[%d]\n",a[12]);
printf("Asiento 13=[%d]\n",a[13]);
printf("Asiento 14=[%d]\n",a[14]);
printf("Asiento 15=[%d]\n",a[15]);
printf("Cual asiento quieres comprar?:");
scanf("%i",&respuesta);
if (respuesta>=1 and respuesta <=15)
    {
    if (a[respuesta]==0)
    {
    a[respuesta]=1;
    vendido=vendido+1;
    printf("Compra realizada\n");
    Sleep(700);
    system("cls");
    }
    else if (a[respuesta]==1)
    {
        printf("Asiento Ocupado\n");
        Sleep(700);
        system("cls");
    }
    }
    else if (respuesta>15 and respuesta !=0)
    {
        printf ("Numero de asciento invalido\n");
        Sleep(700);
        system("cls");
    }
}
novendidos=15-vendido;
printf ("Total de ascientos: 15\n");
printf("Total de ascientos vendidos : %i\n",vendido);
printf ("Total de ascientos vacios : %i\n",novendidos);
system("pause");
}

