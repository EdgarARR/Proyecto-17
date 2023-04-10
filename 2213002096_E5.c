#include <stdio.h>
int main(){

int a[100], b[100], c[200];
int fa, fb, fc, i, pf;
printf("Introduzca el numero del tamano de la fila A: ");
scanf("%d", &fa);
printf("Introduzca el numero del tamano de la fila B: ");
scanf("%d", &fb);

fc=fa+fb;

for (i=0;i<fa;i++){
	a[i]=1;
	printf("%d", a[i]);
}

printf("\n");

for (i=0;i<fb;i++){
	b[i]=2;
	printf("%d", b[i]);
}


if (fa<fb){
pf=fa*2;
for (i=0;i<fa;i++){
	c[i*2]=a[i];
	c[(i*2)+1]=b[i];
	}
for (i=0;i<fb;i++){
	c[pf+i]=b[fa+i];
}
}


if (fb<fa){
pf=fb*2;
for (i=0;i<fb;i++){
	c[i*2]=a[i];
	c[(i*2)+1]=b[i];
	}
for (i=0;i<fa;i++){
	c[pf+i]=a[fb+i];
}
}

if (fb==fa){
	for (i=0;i<fa;i++){
	c[i*2]=a[i];
	c[(i*2)+1]=b[i];
	}	
}

printf("\n\n");
printf("La fila final es: \n");

for (i=0;i<fc;i++){
printf(" %d", c[i]);
}

return 0;
}
