#include<stdio.h>
    #include<stdlib.h>
    int n, *valor, capacidade, *peso, i=0, *x, k, m, total;
    main(){
           printf("Entre com a capacidade da mochila:\n");      
           scanf("%d",&capacidade); 
           printf("Entre com o numero de itens:\n");      
           scanf("%d",&n);
           peso = malloc (n * sizeof(int));
           valor = malloc (n * sizeof(int));
           x = malloc(n * sizeof(int));
           printf("Entre com o peso de cada item:\n");
           for(i=0;i<n;i++){
                 scanf(" %d",&peso[i]);
           }
           printf("Entre com o valor de cada item:\n");
           for(i=0;i<n;i++){
                 scanf(" %d",&valor[i]);
           }
           printf("Peso de cada item:\n");
           for(i=0;i<n;i++){
                 printf(" %d |",peso[i]);
           }
            printf("\nValor de cada item:\n");
           for(i=0;i<n;i++){
                 printf(" %d |",valor[i]);
           }
    for(i=0;i<n;i++){
    while (n >= 1 && peso[i] <= capacidade) {
               x[n] = 1; //insere o item na mochila
               capacidade = capacidade - peso[i]; //decrementa a capacidade
               n--; //decrementa itens
               printf("\n\nItem %d.Valor. %d", n, valor[i]);
               printf("\n\nCapacidade disponivel na mochila: %d",capacidade);  
               if (n >= 1) {
                   x[n] = capacidade / peso[n]; //avalia se o item cabe na mochila
                   for (k = n - 1; k < n; k--) {
                       if(k==0)break;
                           x[k] = 0;//os espaços não preênchidos recebem 0
                   }
               }
                
           }
           
    }