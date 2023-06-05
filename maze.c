void lm(){
  int i, j;
  int matriz[5][5] = {
  {0, 1, 0, 0, 0},
  {0, 1, 1, 1, 0},
  {0, 0, 0, 0, 0},
  {0, 1, 0, 1, 0},
  {1, 0, 0, 1, 0}};
  printf("El mapa en el que se debe mover es:\n");
  for (i = 0; i < 5; i++) {
  for (j = 0; j < 5; j++) {
    printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    posi();
}

void menu(){
    int menu;
  
  printf("Bienvenidos al juego del laberinto\n1. Jugar\n2. Creditos\n3. Sallir\n");
  scanf("%d",&menu);
  
   switch(menu){
    case 1: 
      lm();
      break;
    case 2:
      printf("Creditos: Joel Velastegui\n");
      break;
    case 3: 
      printf("Gracias por jugar\n");
      break;
 }
}
