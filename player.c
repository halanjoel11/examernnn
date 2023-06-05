
    int verificarMovimientoValido(char direccion, int nuevaPosX, int nuevaPosY) {
        int posx = 0;
  int posy = 0;
  int movi = 0;
  char dire;
    if (posx < 0 || posx >= FILAS || posy < 0 || posy >= COLUMNAS) {
        return 0;
    }

    if (laberinto[posx][posy] == 1) {
        return 0;
    }
    return 1;
}
void tot(int movi){
    printf("el numero de movimientos que hizo fue de: %d\n",movi);
}
void posi(){
  int posx = 0;
  int posy = 0;
  int movi = 0;
  char dire;
  printf("Enpieza en el lugar 0,0\nElija a donde se quiere mover con W,A,S,D\n");
  scanf("%c",&dire);
  switch (dire) {
            case 'W':
            case 'w':
                posy -= 1;
                movi +=1;
                break;
            case 'A':
            case 'a':
                posx -=1;
                movi +=1;
                break;
            case 'S':
            case 's':
                posy += 1;
                movi +=1;
                break;
            case 'D':
            case 'd':
                posx +=1;
                movi +=1;
                break;
}


}