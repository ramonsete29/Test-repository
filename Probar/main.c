#include <stdio.h>

int main(){
printf("Hola Mundo de Git\n");
printf("Carmina donde has guardado los cables. Te juro que soy electricista y no informático\n");
FILE *archivo=fopen("carmina","w");
if(archivo==NULL){
    printf("Error al crear el archivo\n");
}else{
    fwrite("hundir la flota", sizeof(char), 16, archivo);
    fclose(archivo);
}


return 0;
}
