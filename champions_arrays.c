#include<stdio.h>
#include<conio.h>
void menu();
void ida_octavos();
int main(){
	
	
	menu(); 
	
	
	
	getch();
	return 0;
}
void menu(){
	int opc;
	
	do{
	
	printf("\n\t\t Agenda, calendario y resultados de la Champions League 2019/20 \n\n");
	
	printf("\n 1.-Partidos de ida de los octavos de final");
	printf("\n 2.-Partidos de vuelta de los octavos de final");
	printf("\n 3.-Cuartos de final");
	printf("\n 4.-Semifinales");
	printf("\n 5.-Final");
	printf("\n selecciona una opcion:  ");scanf("%d",&opc);
	
	
	switch(opc){
		
		case 1: ida_octavos();
			break;
		case 2: vuelta_octavos();
			break;
		case 3: cuartos_final();
			break;
		case 4: semifinales();	
			break;
		case 5: final();
		     break;	
			
	}
    }while(opc<=6);
}

void ida_octavos(){
	int i;
	char a[3][50]={"Martes 18 de febrero",
                   "Dortmund - Paris 2-1",
                  "Atlético - Liverpool 1-0"};
     char b[3][50]={"Miércoles 19 de febrero",
	              "Atalanta - Valencia 4-1",
                   "Tottenham - Leipzig 0-1"}; 
     char c[3][50]={"Martes 25 de febrero",
                    "Chelsea - Bayern 0-3",
                   "Nápoles - Barcelona 1-1"};
     char d[3][50]={"Miércoles 26 de febrero",
                "Real Madrid - Manchester City 1-2",
                    "Lyon - Juventus 1-0"}; 
	
	for(i=0;i<3;i++){
	printf("%s\n",a+i,a+i);
	}
	printf("\n");
		
	for(i=0;i<3;i++){
	printf("%s\n",b+i,b+i);
	}
	printf("\n");
		
	for(i=0;i<3;i++){
	printf("%s\n",c+i,c+i);
	}
	printf("\n");
	for(i=0;i<3;i++){
	printf("%s\n",d+i,d+i);
	}
	printf("\n"); 
}

void vuelta_octavos(){
	
	int i;
	char a[3][50]={"Martes 10 de marzo",
                    "Valencia - Atalanta 3-4 (Global: 4-8)",
                    "Leipzig - Tottenham 3-0 (Global: 4-0)"};
     char b[3][50]={"Miércoles 11 de marzo",
                    "Paris - Dortmund 2-0 (Global: 3-2)",
                    "Liverpool - Atlético 2-3 t.p. (Global: 2-4)"}; 
     char c[3][50]={"Viernes 7 de agosto",
                    "Juventus - Lyon",
                    "Manchester City - Real Madrid"};
     char d[3][50]={"Sábado 8 de agosto",
                    "Bayern - Chelsea",
                    "Barcelona - Nápoles"}; 
	
	for(i=0;i<3;i++){
	printf("%s\n",a+i,a+i);
	}
	printf("\n");
		
	for(i=0;i<3;i++){
	printf("%s\n",b+i,b+i);
	}
	printf("\n");	
	for(i=0;i<3;i++){
	printf("%s\n",c+i,c+i);
	}
	printf("\n");	
	for(i=0;i<3;i++){
	printf("%s\n",d+i,d+i);
	}
	printf("\n");
}

void cuartos_final(){
	int i;
	char a[3][50]={"Miércoles 12 de agosto",
                    "Atalanta (ITA) - Paris Saint-Germain (FRA)",
				"Estádio do Sport Lisboa e Benfica"};
     char b[3][50]={"Jueves 13 de agosto",
                    "RB Leipzig (GER) - Atlético de Madrid (ESP)",
				" Estádio José Alvalade"}; 
     char c[3][50]={"Viernes 14 de agosto",
                    "Nápoles (ITA) / Barcelona (ESP) - Chelsea (ENG) / Bayern (GER)",
				"Estádio do Sport Lisboa e Benfica"};
     char d[3][80]={"Sábado 15 de agosto",
                    "Real Madrid (ESP) / Manchester City (ENG) - ?Olympique de Lyon (FRA) / Juventus (ITA)",
                    "Estádio José Alvalade?"}; 
	
	for(i=0;i<2;i++){
	printf("%s\n",a+i,a+i);
	}
	printf("\n");
		
	for(i=0;i<2;i++){
	printf("%s\n",b+i,b+i);
	}
	printf("\n");
	for(i=0;i<3;i++){
	printf("%s\n",c+i,c+i);
	}
	printf("\n");
	for(i=0;i<3;i++){
	printf("%s\n",d+i,d+i);
	}
	printf("\n");
}

void semifinales(){
	int i;
	char a[3][70]={"Martes 18 de agosto",
                    "2. Leipzig (GER) / Atlético (ESP) - Atalanta (ITA) / Paris Saint-Germain (FRA)",
				"Estádio do Sport Lisboa e Benfica"};
     char b[3][80]={"Miércoles 19 de agosto",
                    "1. Rea l Madrid (ESP) / Manchester City (ENG) / Lyon (FRA) / Juventus (ITA) - Nápoles (ITA) /"
				" Barcelona (ESP) / Chelsea (ENG) / Bayern (GER), Estádio José Alvalade"}; 
    
	
	for(i=0;i<2;i++){
	printf("%s\n",a+i,a+i);
	}
	printf("\n");
		
	for(i=0;i<2;i++){
	printf("%s\n",b+i,b+i);
	}
	printf("\n");
		

}

void final(){
	int i;
	char a[3][70]={"23 de agosto, Estádio do Sport Lisboa e Benfica, Lisboa",
                    "Ganador semifinal 2 - Ganador semifinal 1"};
     
    
	printf("\n");
	for(i=0;i<2;i++){
	printf("%s\n",a+i,a+i);
	}
		

}
