#include "../lib/loading.h"
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>

char signos[] = {'|', '/', '-', '\\'};
char* animacion[] = {"o0o", "0o0", "o0o", "0o0"};
char signosinv[] = {'|'};


//esta funciones es  solo para que se pueda ingresar simbolos prueba verificar
void ingresarSimbolos(char *entrada) {
    int longitud, esValida;
    do {
        printf("\n=> Introduce solo simbolos: ");
        fgets(entrada, 26, stdin);
        entrada[strcspn(entrada, "\n")] = '\0';
        longitud = strlen(entrada);
        esValida = 1;
        for (int i = 0; i < longitud; i++) {
            if (isalnum(entrada[i])) {
                esValida = 0;
                break;
            }
        }
        if (longitud < 1) {
            printf("Debes ingresar al menos un simbolo.\n");
        } else if (!esValida) {
            printf("Solo se permiten simbolos. No letras ni numeros.\n");
        }
    } while (longitud < 1 || !esValida);
}
//esta funcion es solo para ingresar letras

void ingresarSoloLetras(char *entrada) {
    int longitud, esValida;
    do {
        printf("\n=> Introduce solo letras: ");
        fgets(entrada, 50, stdin);
        entrada[strcspn(entrada, "\n")] = '\0';  // Eliminamos el salto de línea
        longitud = strlen(entrada);
        esValida = 1;

        for (int i = 0; i < longitud; i++) {
            if (!isalpha(entrada[i]) && entrada[i] != ' ') {  
                esValida = 0;  // Si encuentra un número o símbolo, marca inválido
                break;
            }
        }

        if (longitud < 1) {
            printf("Debes ingresar al menos una letra.\n");
        } else if (!esValida) {  
            printf("Solo se permiten letras y espacios. No numeros ni simbolos.\n");
        }
    } while (longitud < 1 || !esValida);  // Aquí aseguramos que la entrada sea válida antes de salir
}


void ejecutarControlador() {
    printf("Iniciando el controlador...\n");
char carga;
    printf("AC continuacion el spinner:\n");
    printf("\nAC Codigo con for:\n");
    cargar_for(carga);
    printf("\nAC Codigo con while:\n");
    cargar_while(carga);
    printf("\nAC Codigo con dowhile:\n");
    cargar_dowhile(carga);

    char simbolo[26];
    ingresarSimbolos(simbolo);  // Solo aquí pide entrada
    printf("\nAC Codigo con for:\n");
    caractersimulador_for(simbolo[0]);
    printf("\nAC Codigo con while:\n");
    caractersimulador_while(simbolo[0]);
    printf("\nAC Codigo con dowhile:\n");
    caractersimulador_dowhile(simbolo[0]);

    char desplazamiento[26];
    ingresarSimbolos(desplazamiento);  // Solo aquí pide entrada
    printf("\nAC Codigo con for:\n");
    caracterdesplaz_for(desplazamiento[0]);
    printf("\nAC Codigo con while:\n");
    caracterdesplaz_while(desplazamiento[0]);
    printf("\nAC Codigo con dowhile:\n");
    caracterdesplaz_dowhile(desplazamiento[0]);

char secuencia;
    printf("\nAC Codigo con for:\n");
    secuencia_for(secuencia);
    printf("\nAC Codigo con while:\n");
    secuencia_while(secuencia);
    printf("\nAC Codigo con dowhile:\n");
    secuencia_dowhile(secuencia);
char cambiopunta;
printf("AC continuacion la Barra de progreso con punta cambiante:\n");
    printf("\nAC Codigo con for:\n");
    cambiodepunta_for(cambiopunta);
    printf("\nAC Codigo con while:\n");
    cambiodepunta_while(cambiopunta);
    printf("\nAC Codigo con dowhile:\n");
    cambiodepunta_dowhile(cambiopunta);
char barradesplazamiento;
printf("AC continuacion la Barra de progreso:\n");
    printf("\nAC Codigo con for:\n");
    barradesplazamiento_for(barradesplazamiento);
    printf("\nAC Codigo con while:\n");
    barradesplazamiento_while(barradesplazamiento);
    printf("\nAC Codigo con dowhile:\n");
    barradesplazamiento_dowhile(barradesplazamiento);
char barraspinner;
printf("AC continuacion la Barra de progreso con punta de spinner:\n");
    printf("\nAC Codigo con for:\n");
    barraspinner_for(barraspinner);
    printf("\nAC Codigo con while:\n");
    barraspinner_while(barraspinner);
    printf("\nAC Codigo con dowhile:\n");
    barraespinner_dowhile(barraspinner);

char nombre[50];
    ingresarSoloLetras(nombre); // Aquí solo se permiten letras
    printf("Nombre valido: %s\n", nombre);
    loadingfor(nombre);
    loadingwhile(nombre);
    loadingdowhile(nombre);

char nombres[50];
    ingresarSoloLetras(nombres); // Aquí también solo se permiten letras
    printf("Otro nombre valido: %s\n", nombres);
    progresofor(nombres);
    progresowhile(nombres);
    progresodowhile(nombres);

char gradaderecha;
    printf("AC Codigo con for:\n");
    grada_for(gradaderecha);
    printf("AC Codigo con while:\n");
    grada_while(gradaderecha);
    printf("AC Codigo con dowhile':\n");
    grada_dowhile(gradaderecha);
char gradaizquierda ; 
    printf("AC Carga con for:\n");
    gradas_for(gradaizquierda);
    printf("AC Carga con while:\n");
    gradas_while(gradaizquierda);
    printf("AC Carga con dowhile:\n");
    gradas_dowhile(gradaizquierda);
    printf("\nAC Grada completa!\n");
 char figura ; 
    printf("AC figura con for:\n");
    figura_for(figura);
    printf("AC figura con while:\n");
    figura_while(figura);
    printf("AC figura con dowhile:\n");
    figura_dowhile(figura);
    printf("\nAC figura completa\n");
}

//loading1 (for)
void cargar_for(char cargar) {
    for (int i = 0; i <= 100; i++) {
        printf("\rCargando... %c %d %%", signos[i % 4], i);
        fflush(stdout);
        usleep(100000); 
    }printf("\nLa Carga esta completa....!\n");
}
//loading1 (while)
void cargar_while(char cargar) {
    int i = 0;
    while (i <= 100) {
        printf("\rCargando... %c %d %%", signos[i % 4], i);
        fflush(stdout);
        usleep(100000);
        i++;
    }printf("\nLa Carga esta completa....!\n");
}
//loading1 (dowhile)
void cargar_dowhile(char cargar) {
    int i = 0;
    do {printf("\rCargando... %c %d %%", signos[i % 4], i);
        fflush(stdout);
        usleep(100000);
        i++;
    } while (i <= 100);
    printf("\nLa Carga esta completa....!\n");
}
//loading2 (for)
void caractersimulador_for(char simbolo) {
for (int i = 0; i <= 100; i++) {
        int cantidad = (i * barra) / 100;  
        printf("\r[");
        for (int j = 0; j < barra; j++) {
            if (j < cantidad)
                printf("%c", simbolo);
            else
                printf(" ");
        }
        printf("] %3d%%", i, signos[i % 4]); 
        fflush(stdout);
        usleep(100000);  
    }printf("\nLa Carga esta completa....!\n");
}
//loading2 (while)
void caractersimulador_while(char simbolo) {
    int i = 0;
    while (i <= 100) {
        int cantidad = (i * barra) / 100;
        printf("\r[");
        int j = 0;
        while (j < barra) {
            if (j < cantidad)
                printf("%c", simbolo);
            else
                printf(" ");
            j++;
        }
        printf("] %3d%%", i, signos[i % 4]);
        fflush(stdout);
        usleep(50000);
        i++;
    }printf("\nLa Carga esta completa....!\n");
}
//loading2 (dowhile)
void caractersimulador_dowhile(char simbolo) {
    int i = 0;
    do {
        int cantidad = (i * barra) / 100;
        printf("\r[");
        int j = 0;
        do {
            if (j < cantidad)
                printf("%c", simbolo);
            else
                printf(" ");
            j++;
        } while (j < barra);
        printf("] %3d%%", i, signos[i % 4]);
        fflush(stdout);
        usleep(50000);
        i++;
    } while (i <= 100);
    printf("\nLa Carga esta completa....!\n");
}
//loading3 (for)
void caracterdesplaz_for(char desplazamiento) {
    for (int i = 0; i <= 100; i++) {
        printf("\r[");
         int pos = barra- 1 - ((i * (barra- 1)) / 100);
        for (int j = 0; j < barra; j++) {
            if (j == pos)
                printf("%c", desplazamiento);
            else
                printf(" ");
        }
        printf("] %3d%%", i, signos[i % 4]); 
        fflush(stdout);
        usleep(50000);
    }printf("\n");
}
//loading3 (while)
void caracterdesplaz_while(char desplazamiento) {
    int i = 0;
    while (i <= 100) {
        printf("\r[");
         int pos = barra - 1 - ((i * (barra - 1)) / 100);
        int j = 0;
        while (j < barra) {
            if (j == pos)
                printf("%c", desplazamiento);
            else
                printf(" ");
            j++;
        }
        printf("] %3d%%", i, signos[i % 4]);
        fflush(stdout);
        usleep(50000);
        i++;
    }printf("\n");
}
//loading3 (dowhile)
void caracterdesplaz_dowhile(char desplazamiento) {
        int i = 0;
    do {
        printf("\r[");
        int pos = barra - 1 - ((i * (barra - 1)) / 100);
        int j = 0;
        do {
            if (j == pos)
                printf("%c", desplazamiento);
            else
                printf(" ");
            j++;
        } while (j < barra);
        printf("] %3d%%", i, signos[i % 4]);
        fflush(stdout);
        usleep(50000);
        i++;
    } while (i <= 100);
    printf("\n");
}
//loading4 (for)
void secuencia_for(char secuencia) {
    for(int i = 0; i <= 100; i++) {
        printf("\rWaiting: %s %3d%%", animacion[i % 4], i);
        fflush(stdout);
        usleep(DELAY);
    }printf("\nCompletado...!\n");
}
//loading4 (while)
void secuencia_while(char secuencia) {
    int i = 0;
    while(i <= 100) {
        printf("\rWaiting: %s %3d%%", animacion[i % 4], i);
        fflush(stdout);
        usleep(DELAY);
        i++;
    }printf("\nCompletado...!\n");
}
//loading4 (dowhile)
void secuencia_dowhile(char secuencia) {
    int i = 0;
    do {
        printf("\rWaiting: %s %3d%%", animacion[i % 4], i);
        fflush(stdout);
        usleep(DELAY);
        i++;
    } while(i <= 100);
    printf("\nCompletado...!\n");
}
//loading5 (for)
void cambiodepunta_for(char cambiopunta) {
    for (int i = 0; i <= 100; i++) {
        printf("\r[");
        for (int j = 0; j < barra; j++) {
            if (j < (i * barra) / 100)
                printf("=");
            else if (j == (i * barra) / 100)
                printf("%c", (i % 2 == 0) ? '>' : '-');
            else
                printf(" ");
        }
        printf("] %3d%%", i); 
        fflush(stdout);
        usleep(DELAY); 
    }printf("\n");
}
//loading5(while)
void cambiodepunta_while(char cambiopunta) {
    int i = 0;
    while (i <= 100) {
        printf("\r[");
        int j = 0;
        while (j < barra) {
            if (j < (i * barra) / 100)
                printf("=");
            else if (j == (i * barra) / 100)
                printf("%c", (i % 2 == 0) ? '>' : '-');
            else
                printf(" ");
            j++;
        }
        printf("] %3d%%", i); 
        fflush(stdout);
        usleep(DELAY); 
        i++;
    }printf("\n");
}
//loading5 (dowhile)
void cambiodepunta_dowhile(char cambiopunta) {
    int i = 0;
    do {
        printf("\r[");
        int j = 0;
        do {
            if (j < (i * barra) / 100)
                printf("=");
            else if (j == (i * barra) / 100)
                printf("%c", (i % 2 == 0) ? '>' : '-');
            else
                printf(" ");
            j++;
        } while (j < barra);
        printf("] %3d%%", i); 
        fflush(stdout);
        usleep(DELAY); 
        i++;
    } while (i <= 100);
    printf("\n");
}
//loading6 (for)
void barradesplazamiento_for(char barradesplazamiento){
    int i = 0, j;
    for (i = 0; i <= barra - 3; i++) {
        printf("\r[");
        for (j = 0; j < barra; j++)
            printf("%s", (j == i) ? "<=>" : " ");
        printf("] %3d%%", (i * 100) / (barra - 3));
        fflush(stdout);
        usleep(100000);
    }printf("\n");
}
//loading6 (while)
void barradesplazamiento_while(char barradesplazamiento){
    int i = 0, j;
    while (i <= barra - 3) {
        printf("\r[");
        j = 0;
        while (j < barra) {
            printf("%s", (j == i) ? "<=>" : " ");
            j++;
        }
        printf("] %3d%%", (i * 100) / (barra - 3));
        fflush(stdout);
        usleep(100000);
        i++;
    }printf("\n");
}
//loading6 (dowhile)
void barradesplazamiento_dowhile(char barradesplazamiento){
    int i = 0, j;
    do {
        printf("\r[");
        j = 0;
        do {
            printf("%s", (j == i) ? "<=>" : " ");
            j++;
        } while (j < barra);
        printf("] %3d%%", (i * 100) / (barra - 3));
        fflush(stdout);
        usleep(100000);
        i++;
    } while (i <= barra - 3);
    printf("\n");
}
//loading7 (for)
void barraspinner_for(char barraspinner){
    int i = 0, j;
    for (i = 0; i <= barra; i++) {
        printf("\r[");
        for (j = 0; j < barra; j++)
            printf("%c", j < i ? '-' : (j == i ? signos[i % 4] : ' '));
        printf("] %3d%%", (i * 100) / barra);
        fflush(stdout);
        usleep(100000);
    }printf("\n");
}
//loading7 (while)
void barraspinner_while(char barraspinner){
    int i = 0, j;
    i = 0;
    while (i <= barra) {
        printf("\r[");
        j = 0;
        while (j < barra) {
            printf("%c", j < i ? '-' : (j == i ? signos[i % 4] : ' '));
            j++;
        }
        printf("] %3d%%", (i * 100) / barra);
        fflush(stdout);
        usleep(100000);
        i++;
    }printf("\n");
 }
//loading7 (dowhile)
void barraespinner_dowhile(char barraspinner){
    int i = 0, j;
    i = 0;
    do {
        printf("\r[");
        j = 0;
        do {
            printf("%c", j < i ? '-' : (j == i ? signos[i % 4] : ' '));
            j++;
        } while (j < barra);
        printf("] %3d%%", (i * 100) / barra);
        fflush(stdout);
        usleep(100000);
        i++;
    } while (i <= barra);
    printf("\n");
}
//loading8 (for)
void loadingfor(char *nombre) {
    int longitud = strlen(nombre);
    printf("\nUsando for:\n");
    for (int i = 0; i <= longitud; i++) {
        printf("\r[");
        for (int j = 0; j < i; j++) {
            printf("%c", nombre[j]);
        }
        printf("] %3d%%", (i * 100) / longitud);
        fflush(stdout);
        usleep(200000);
    }printf("\nCarga completa...!\n");
}
//loading8 (while)
void loadingwhile(char *nombre) {
    int longitud = strlen(nombre);
    int i = 0;
    printf("\nUsando while:\n");
    while (i <= longitud) {
        printf("\r[");
        int j = 0;
        while (j < i) {
            printf("%c", nombre[j]);
            j++;
        }
        printf("] %3d%%", (i * 100) / longitud);
        fflush(stdout);
        usleep(200000);
        i++;
    }printf("\nCarga completa...!\n");
}
//loading8 (dowhile)
void loadingdowhile(char *nombre) {
    int longitud = strlen(nombre);
    int i = 0;
    printf("\nUsando dowhile:\n");
    do {
        printf("\r[");
        int j = 0;
        do {
            printf("%c", nombre[j]);
            j++;
        } while (j < i);
        printf("] %3d%%", (i * 100) / longitud);
        fflush(stdout);
        usleep(200000);
        i++;
    } while (i <= longitud);
    printf("\nCarga completa...!\n");
}
//loading9 (for)
void progresofor(char *nombres) {
    int longitud = strlen(nombres);
    printf("\nUsando for:\n");
    for (int i = 0; i <= longitud; i++) {
        printf("\r%c %3d%%", nombres[i], (i * 100) / longitud);
        fflush(stdout);
        usleep(200000);
    }printf("\nCarga completa...!\n");
}
//loading9 (while)
void progresowhile(char *nombres) {
    int longitud = strlen(nombres);
    int i = 0;
    printf("\nUsando while:\n");
    while (i <= longitud) {
        printf("\r%c %3d%%", nombres[i], (i * 100) / longitud);
        fflush(stdout);
        usleep(200000);
        i++;
    }printf("\nCarga completa...!\n");
}
//loading9 (dowhile)
void progresodowhile(char *nombres) {
    int longitud = strlen(nombres);
    int i = 0;
    printf("\nUsando dowhile:\n");
    do {
        printf("\r%c %3d%%", nombres[i], (i * 100) / longitud);
        fflush(stdout);
        usleep(200000);
        i++;
    } while (i <= longitud);
    printf("\nCarga completa...!\n");
}
//loading10 (for)
void grada_for(char gradaderecha) {
    for (int i = 0; i < ESCALONES; i++) {
        for (int k = 0; k < i; k++) {
            printf("    ");
        }
        printf("%c___ %d%%\n", signos[i % 4], (i + 1) * 100 / ESCALONES);
        fflush(stdout);
        usleep(DELAY);
    }
}
//loading10 (while)
void grada_while(char gradaderecha) {
    int i = 0;
    while (i < ESCALONES) {
        int k = 0;
        while (k < i) {
            printf("    ");
            k++;
        }
        printf("%c___ %d%%\n", signos[i % 4], (i + 1) * 100 / ESCALONES);
        fflush(stdout);
        usleep(DELAY);
        i++;
    }
}
//loading10 (dowhile)
void grada_dowhile(char gradaderecha) {
    int i = 0;
    do {
        for (int k = 0; k < i; k++) {
            printf("    ");
        }
        printf("%c___ %d%%\n", signos[i % 1], (i + 4) * 100 / ESCALONES); // Usamos \n en lugar de \r
        fflush(stdout);
        usleep(DELAY);
        i++;
    } while (i < ESCALONES);
}
//loading11 (for)
void gradas_for(char gradaizquierda) {
    for (int i = 0; i < ESCALONES; i++) {
        for (int k = 0; k < ESCALONES - i - 1; k++) {  
            printf("    ");
        }
        printf("%c--- %s %3d%%\n", signosinv[i % 1], animacion[i % 4], (i + 1) * 100 / ESCALONES);
        fflush(stdout);
        usleep(50000);
    }
}
//loading11 (while)
void gradas_while(char gradaizquierda) {
    int i = 0;
    while (i < ESCALONES) {
        int k = 0;
        while (k < ESCALONES - i - 1) {  
            printf("    ");
            k++;
        }
        printf("%c--- %s %3d%%\n", signosinv[i % 1], animacion[i % 4], (i + 1) * 100 / ESCALONES);
        fflush(stdout);
        usleep(50000);
        i++;
    }
}
//loading11 (dowhile)
void gradas_dowhile(char gradaizquierda) {
    int i = 0;
    do {
        int k = 0;
        while (k < ESCALONES - i - 1) { 
            printf("    ");
            k++;
        }
        printf("%c---%s %3d%%\n", signosinv[i % 1], animacion[i % 4], (i + 1) * 100 / ESCALONES);
        fflush(stdout);
        usleep(50000);
        i++;
    } while (i < ESCALONES);
}
void imprimir_figura(int espacios) {
    for (int i = 0; i < espacios; i++) printf(" ");
    printf("    \\|||/\n");
    for (int i = 0; i < espacios; i++) printf(" ");
    printf("    (> <)\n");
    for (int i = 0; i < espacios; i++) printf(" ");
    printf("ooO--(_)--Ooo\n");
}
//loading12 (for)
void figura_for(char figura) {
    for (int i = 0; i <= MAX_POS; i++) {
        printf("\033[H\033[J"); 
        imprimir_figura(i);
        usleep(DELAYs);
    }
    for (int i = MAX_POS - 1; i >= 0; i--) {
        printf("\033[H\033[J");
        imprimir_figura(i);
        usleep(DELAYs);
    }
}
//loading12 (while)
void figura_while(char figura) {
    int i = 0;
    while (i <= MAX_POS) {
        printf("\033[H\033[J");
        imprimir_figura(i);
        usleep(DELAYs);
        i++;
    }
    i = MAX_POS - 1;
    while (i >= 0) {
        printf("\033[H\033[J");
        imprimir_figura(i);
        usleep(DELAYs);
        i--;
    }
}
//loading12 (dowhile)
void figura_dowhile(char figura) {
    int i = 0;
    do {
        printf("\033[H\033[J");
        imprimir_figura(i);
        usleep(DELAYs);
        i++;
    } while (i <= MAX_POS);

    i = MAX_POS - 1;
    do {
        printf("\033[H\033[J");
        imprimir_figura(i);
        usleep(DELAYs);
        i--;
    } while (i >= 0);
}

