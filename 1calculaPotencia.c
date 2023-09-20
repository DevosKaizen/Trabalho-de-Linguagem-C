#include<stdio.h> //Codigo desenvolvido por AndrewDevos 72409 e HenriqueStrieder 157642


int BarraPreta(int i){
	
	//printa uma linha de blocos
	
	for(i = 0; i <= 30; i++){
		printf("\xDB");
	}//for
}//barrapreta



int main(){
//declara variavel global	
	int x = 0;
	int n = 0;
	int base = 0;
	int resultado = 0;
	int i, j;

//recebe os valores a calcular
	printf("\nVamos calcular a potencia entre dois inteiros:\n");
	printf("Digite o numero base a ser multiplicado:"); scanf("%d",&x);
	printf("\nAgora digite o expoente:"); scanf("%d",&n);
	printf("\n");
	
	base = x;
	
	BarraPreta(i);
	
	printf("\n\nVoce pediu para calcular %d elevado na %d \n", x, n);
	
//multiplica a potencia
	if(n==0){
		resultado = 1;
		}//if
	if(n==1){
		resultado = x;
	}
	else{
		for(i = 2; i <= n; i++){
			resultado = x * base;
			x = resultado;
				
				
			}//for
	}//else
	
	printf("\n\nO resultado da potencia e  %d\n",resultado);

	
}//main







