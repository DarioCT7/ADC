#ifndef LOADING_H
#define LOADING_H

#define barra 20
#define CICLO 10
#define DELAY 100000 
#define ESCALONES 10
#define MAX_POS 20   
#define DELAYs 100000 

void ejecutarControlador(); 

void ingresarSimbolos(char *);
void ingresarSoloLetras(char *); 

void cargar_for(char );
void cargar_while(char );
void cargar_dowhile(char );

void caractersimulador_for(char );
void caractersimulador_while(char );
void caractersimulador_dowhile(char );


void caracterdesplaz_for(char );
void caracterdesplaz_while(char ) ;
void caracterdesplaz_dowhile(char );

void secuencia_for(char ) ;
void secuencia_while(char );
void secuencia_dowhile(char );

void cambiodepunta_for(char ) ;
void cambiodepunta_while(char );
void cambiodepunta_dowhile(char );

void barradesplazamiento_for(char );
void barradesplazamiento_while(char );
void barradesplazamiento_dowhile(char );

void barraspinner_for(char );
void barraspinner_while(char );
void barraespinner_dowhile(char );

void loadingfor(char *) ;
void loadingwhile(char *);
void loadingdowhile(char *);

void progresofor(char *);
void progresowhile(char *);
void progresodowhile(char *);

void grada_for(char );
void grada_while(char ) ;
void grada_dowhile(char ) ;

void gradas_for(char ) ;
void gradas_while(char );
void gradas_dowhile(char ) ;

void imprimir_figura(int ) ;
void figura_for(char ) ;
void figura_while(char ) ;
void figura_dowhile(char ) ;

#endif // LOADING_H