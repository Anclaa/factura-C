#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main(void) {
  float cl=0, cf=0, ce=0, cfa=0, cr=0;
  double pl=0,pf=0, pe=0, pfa=0, pr=0, pt=0, des=0, ptt=0;
  int num=0, i=0;
  char com = 'S';
  char name[20], id[20];
  printf("------------------BIENVENIDO--------------------\n");
  do{
    printf("Ingrese su C.I: ");
    scanf("%s", &id);
  }while(strlen(id)!=10);
  
  printf("Ingrese su nombre: ");
  scanf("%s", &name);
  while(name[i]){
    name[i]=toupper(name[i]);
    i++;
  }
  while(com=='S'){
  printf("\ncatálogo de productos, indique el producto a comprar \n");
    printf("\t1.Llantas (Precio: $150)\n");
    printf("\t2.Kit Pastillas de freno (Precio: $55)\n");
    printf("\t3.Kit de embrague (Precio: $180)\n");
    printf("\t4.Faro (Precio: $70)\n");
    printf("\t5.Radiador (Precio: $120)\n");
    printf("A continuacion digite el número del producto a comprar: ");
    scanf("%d", &num);
    switch (num){
      case 1:
        printf("Cantidad de llantas a comprar: ");
        scanf("%f", &cl);
        pl= 150*cl;
        break;
      case 2:
        printf("Cantidad de pastillas de freno a comprar: ");
        scanf("%f", &cf);
        pf= 55*cf;
        break;
      case 3:
        printf("Cantidad de kits embrague a comprar: ");
        scanf("%f", &ce);
        pe=180*ce;
        break;
      case 4:
        printf("Cantidad de faros a comprar: ");
        scanf("%f", &cfa);
        pfa=70*cfa;
        break;
      case 5:
        printf("Cantidad de radiadores a comprar: ");
        scanf("%f", &cr);
        pr=120*cr;
        break;
      default:
        printf("Opcion no reconocida: \n");
        break;
    }
    printf("Gusta comprar algo más (digite s para seguir o n para terminar): \n");
    scanf("%s", &com);
    com = toupper(com);
  }
  pt = pl+pf+pe+pfa+pr;
  if (pt<=100){
    des=pt;
    printf("\nNo se aplican descuentos\n");
  }
  if (pt>=101&&pt<=500){
    des= pt*0.95;
    printf("\nse aplica el 5%% de descuento\n");
  }
  if(pt>=501 && pt<=1000){
    des=pt*0.93;
    printf("\nse aplica el 7%% de descuento\n");
  }
  if(pt>1000){
    des=pt*0.90;
    printf("\nse aplica el 10%% de descuento\n");
  }
  ptt=des*1.12;

  printf("\n----------------FACTURA--------------------\n");
  printf("Cliente: %s\n", name);
  printf("C.I:    %s\n", id);
  printf("Producto:\t\tCantidad\tSubtotal\n");
  if(pl != 0){
    printf("Llantas: \t\t\t%.2lf\t\t%.2lf\n", cl,pl); 
  }
  if(pf != 0){
    printf("Kit frenos: \t\t%.2lf\t\t%.2lf\n",cf, pf); 
  }
  if(pe != 0){
    printf("Kit embrague: \t\t%.2lf\t\t%.2lf\n", ce, pe); 
  }
  if(pfa != 0){
    printf("Faro: \t\t\t\t%.2lf\t\t%.2lf\n", cfa, pfa); 
  }
  if(pr != 0){
    printf("Radiador: \t\t\t%.2lf\t\t%.2lf\n",cr, pr); 
  }

  printf("\tSUBTOTAL:\t\t%.2lf\n",pt);
  printf("\tSUBTOTAL/des:\t%.2lf\n",des);
  printf("\tI.V.A:\t\t\t\t12%%\n");
  printf("\tTOTAL:\t\t\t%.2lf\n", ptt);

  return 0;
}