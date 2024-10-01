// #include <stdio.h>

// int main(void) {
//     int i = 1; 
//     long j = 3;
//     char k = 'a';
//     float l = 3.14;
//     double m = 2.74;

//     printf("Hello, world!\n");
//     printf("Valor de i: %d\n", i);
//     printf("Valor de j: %ld\n", j); // Correção aqui: %ld para long
//     printf("Valor de k como char: %c\n", k);
//     printf("Valor de i como int: %d\n", i);
//     printf("Valor de l: %.1f\n", l);
//     printf("Valor de m: %f\n", m);

//     printf("Digite o valor de i: ");
//     scanf("%d", &i);

//     printf("Digite o valor de j: ");
//     scanf("%ld", &j); // Correção aqui: %ld para long

//     char temp;
//     scanf("%*c", &temp); // Leitura do caractere extra (newline) deixado no buffer

//     printf("Digite o valor de k: ");
//     scanf("%c", &k);

//     printf("Digite o valor de l: ");
//     scanf("%f", &l);

//     printf("Digite o valor de m: ");
//     scanf("%lf", &m); // Correção aqui: %lf para double

//     return 0;
// }

// #include <stdio.h>

// // Declaração da função soma com dois parâmetros
// float soma(float a, float b);

// // Declaração da função imprimeSoma
// void imprimeSoma(float a, float b, float c);

// int main(void) {
//     float i, j, k;
//     int valor = 1;
//     int cont;

//     for (cont = 1; cont <= 10; cont++) {
//         printf("%d ", cont); // Adiciona um espaço para melhor formatação
//     }
//     printf("\n");

//     do {
//         printf("Digite um numero, 12 para encerrar: ");
//         scanf("%d", &valor);
//         printf("Valor digitado: %d\n", valor);
//     } while (valor != 12);

//     printf("Digite o valor de i: ");
//     scanf("%f", &i);

//     printf("Digite o valor de j: ");
//     scanf("%f", &j);

//     k = soma(i, j);

//     imprimeSoma(i, j, k);

//     return 0;
// }

// // Implementação da função soma com dois parâmetros
// float soma(float a, float b) {
//     return a + b;
// }

// // Implementação da função imprimeSoma
// void imprimeSoma(float a, float b, float c) {
//     printf("Resultado: %.2f + %.2f = %.2f\n", a, b, c);
// }

// #include <stdio.h>

// // função principal
// int main(void) {
//     int num;
//     char letra;

//     printf("Digite uma letra: ");
//     scanf("%c", &letra);

//     if(letra == 's'){
//         printf("Afirmativo\n");
//     }
//     else if (letra == 'n') {
//         printf("Negativo\n");
//     }
//     else{
//         printf("Indeterminado\n");
//     }
//     return 0;
// }

// #include <stdio.h>

// função principal
// int main(void) {
//     float nota;

//     printf("Digite sua nota de 0 a 10: ");
//     scanf("%f", &nota);

//     nota = (nota > 10) ? 10 : nota;
//     nota = (nota < 0) ? 0 : nota;

//     printf("Nota: %.2f\n", nota);
    
//     return 0;
// }

// #include <stdio.h>
// int main(void) {
//     int opcao;
//     float va, vb;

//     printf("Escolha uma opcao:\n");
//     printf("\t1: soma\n");
//     printf("\t2: subtracao\n");
//     printf("\t3: multiplicacao\n");
//     printf("\t4: divisao\n");
//     printf("\t0: encerrar\n");
//     scanf("%d", &opcao);

//     if(opcao !=0)
//     printf("Digite o primeiro valor: ");
//     scanf("%f", &va);
//     printf("Digite o segundo valor: ");
//     scanf("%f", &vb);

//     switch (opcao) {
//     case 1: 
//         printf("%.2f + %.2f = %.2f\n", va, vb, va+vb);
//         break;
    
    
//     case 2: 
//         printf("%.2f + %.2f = %.2f\n", va, vb, va-vb);   
//         break;
    
//     case 3:
//         printf("%.2f + %.2f = %.2f\n", va, vb, va*vb);
//         break;


//     case 4: 
//         printf("%.2f + %.2f = %.2f\n", va, vb, va/vb);
//         break;
//     default:
//         printf("Opcao invalida!\nSaindo...\n");
//         break;
//     }
    
    
//     return 0;
// }

// #include <stdio.h>

// int main(void) {
//     int num;

//     num = 0;
//     printf("num: %d\n", num);
//     printf("num++: %d\n", num++);
//     printf("num: %d\n", num);
//     printf("++num: %d\n", ++num);
//     printf("num: %d\n", num);

//     return 0;
// }   

// #include <stdio.h>

// int main(void) {
//     int num;

//     num = 0;
//     while(num < 20)
//     {
//         printf ("%d ", num++);
//     }

//     return 0;
// }

// #include <stdio.h>

// int fatorial( int numero){
//     if (numero == 0)
//         return 1;
//     else
//         return numero * fatorial(numero - 1);
// }

// // função principal
// int main(void) {
//     int valor;
//     printf("Digite um valor inteiro: ");
//     scanf("%d", &valor);
//     printf("%d! = %d\n", valor, fatorial(valor));
//   return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// int main(void){
   
//     char palavra[10];
//     int valor;


//    printf("Digite uma palavra: ");
//    fgets(palavra, 10, stdin);
//    valor = atoi(palavra);
//scanf("%s", &palavra);

    // printf("   Palavra: %s\n", palavra+3);
    // printf("   Valor: %d\n", valor+3);
    // printf("Endereco 1: %p\n", &palavra);
    // printf("Endereco 2: %p\n", &palavra+1);
    // printf("Endereco 3: %p\n", &palavra+2);


//    int i=0;
//    while(palavra[i] != '\0'){
//     if(palavra[i] == '\n')
//         palavra[i] = ' ';
//     i++;
//    }
//    printf("Depois: %s\n", palavra);
   
   
   
   
   
    // int n_linha = 5, n_coluna = 5; //c99
    // int array[n_linha][n_coluna];

    // for(int linha=0; linha < n_linha; linha++){
    //     for(int coluna=0; coluna < n_coluna; coluna++){
    //         if(linha == coluna)
    //         array[linha][coluna] = 1;
    //     else
    //         array[linha][coluna] = 0;
    //     }
    // }

    // for(int linha=0; linha < n_linha; linha++){
    //     for(int coluna=0; coluna < n_coluna; coluna++){
    //         printf("%3d ", array[linha][coluna]);
    //     }
    //     printf("\n");
    // }
// return 0;
// } 

// #include<stdio.h>
// // STRING1
// int main(){
//     char s0[] = {'a', '\0'};
//     printf("%s\n", s0);

//     char s[12] = "hello world"; // 11 char + 1 \0
//     s[11] = 'a';
//     printf("%s\n", s);

//     char s1[5];
//     printf("Entre com uma string: ");
//     scanf("%s", s1); // recebe a string e escreve em mais espaço do que alocado
//     fgets(s1, 5, stdin); // recebe a string e armazena apenas o que possui espaço
//     printf("String: %s\n", s1);

// }

// #include<stdio.h>
// // STRING 2
// void clearBuffer(){
//     int c;
//     while ((c = getchar()) != '\n' && c != EOF);
// }

// int main(){
//      int i;
//      char c;

//      printf("Entre com um inteiro: ");
//      scanf("%d", &i);

//      clearBuffer();

//      printf("Entre com um char: ");
//      scanf("%c", &c);

//      printf("\nValores lidos: %d %c\n", i, c);
// }

// #include <stdio.h>
// #include <string.h>
// // STRING3 
// int main(){
//     char str[] = "hello world";
//     int len = strlen(str); // string length
//     printf("len = %d\n", len);

//     char str2[12];
//     strcpy(str2, str); // string copy
//     printf("Original: %s\nCopia: %s\n", str, str2);

//     int comp = strcmp(str, "hello world"); // string compare
//     printf("comp = %d\n", comp); // 0 se as strings forem iguais
//                                  // !=0 se as strings forem diferentes
// }

// #include<stdio.h>
// // STRING 4
// void upper(char s[]){
//     for(int i=0; s[i]!='\0'; i++)
//         if(s[i] >= 'a' && s[i] <= 'z')
//             s[i] -= 32;
// }

// void lower(char s[]){
//     for(int i=0; s[i]!='\0'; i++)
//         if(s[i] >= 'A' && s[i] <= 'Z')
//             s[i] += 32;
// }

// int main(){
//      char s[] = "hElLo, WoRlD!";
//      printf("original: %s\n", s);

//      upper(s);
//      printf("upper: %s\n", s);

//      lower(s);
//      printf("lower: %s\n", s);
// }

// #include <stdio.h>
// #include <string.h>

// int main() {
//     char letra = 'g';
//     char palavra1[] = "ola mundo";
//     char palavra2[] = {'g', 'a', 'b', 'r', '\0'};
//     char frase1[100];
//     char frase2[100];

//     // Exibir a letra e as palavras
//     printf("Letra: %c\n", letra);
//     printf("Letra (como valor inteiro): %d\n", letra);
//     printf("Palavra 1: %s\n", palavra1);
//     printf("Palavra 2: %s\n", palavra2);

//     // Modificar e exibir palavra1
//     palavra1[4] = '\0';
//     printf("Palavra 1 apos modificacao: %s\n", palavra1);

//     // Leitura das frases
//     printf("Digite a frase1: ");
//     fgets(frase1, sizeof(frase1), stdin);
    
//     printf("Digite a frase2: ");
//     fgets(frase2, sizeof(frase2), stdin);
    
//     // Remover o caractere de nova linha das frases, se presente
//     size_t len1 = strlen(frase1);
//     if (len1 > 0 && frase1[len1 - 1] == '\n') {
//         frase1[len1 - 1] = '\0';
//     }

//     size_t len2 = strlen(frase2);
//     if (len2 > 0 && frase2[len2 - 1] == '\n') {
//         frase2[len2 - 1] = '\0';
//     }

//     // Exibir as frases lidas
//     printf("Frase 1 lida: %s\n", frase1);
//     printf("Frase 2 lida: %s\n", frase2);

//     // Comparar as frases e exibir o resultado
//     int compara = strcmp(frase1, frase2);
//     printf("Comparacao: %d\n", compara);

//     // Calcular e exibir o tamanho da frase
//     int tamanho1 = strlen(frase1);
//     int tamanho2 = strlen(frase2);
//     printf("Tamanho da frase 1: %d\n", tamanho1);
//     printf("Tamanho da frase 2: %d\n", tamanho2);

//     return 0;
// }



// int main(){
//     int *p = malloc(5 * sizeof(int));
//     for(int i=0; i<5;  i++)
//         *(p+i) = 0;

//     for(int i=0; i<5; i++)
//         printf("*(p+%d): %d    end: %p\n", i, *(p+i), (p+i));
//     printf("\n");
    

//     printf("*p++:  %d\n", (*p)++);
//     printf("*p++:  %d\n", (*p)++);
//     printf("*p++:  %d\n", (*p)++);
//     printf("   *p: %d\n", *p);
//     printf("*p++:  %d\n", (*p)++);

// realoc(p, 5 * sizeof(int));

//     for(int i=0; i<10;  i++)
//         *(p+i) = i;

//     for(int i=0; i<10; i++)
//         printf("*(p+%d): %d end: %p\n", i, *(p+i), (p+i));


    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    // int a =2;
    // int *pA = &a;
    // int vet[5];

    // for(int i=0; i<5; i++)
    //     vet[i] = i+1;


    // printf(" a: %d\n", a);
    // printf("&a: %p\n", a);
    // printf(" pA: %p\n", pA);
    // printf(" *pA: %d\n\n", *pA);



    // scanf("%d", &vet[0]);
    // scanf("%d", vet);
    // scanf("%d", &vet[1]);
    // scanf("%d", vet+1);

    // printf("    vet: %d\n", vet);
    // printf(" vet[0]: %p\n", vet[0]);
    // printf(" &vet[0]: %d\n", &vet[0]);
    // printf(" vet+0: %p\n", vet+0);
    // printf(" vet[1]: %p\n", vet[1]);
    // printf(" &vet[1]: %d\n", &vet[1]);
    // printf("   vet+1: %p\n", vet+1);



    // return 0;
// }



// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>


// enum dias {segunda, terca, quarta, quinta, sexta, sabado, domingo};

// int main(void) {
//     enum dias dia;

//     dia = terca ;
//     switch (dia)
//     {
//     case segunda:
//         printf("Hoje eh segunda: %d\n", dia);
//         break;
    
//     case terca: 
//         printf("Hoje eh terca: %d\n", dia);
//         break;

//     default:
//         printf("Outro dia\n");
//         break;
//     }



//     return 0;
// }


// enum Erros {OK, ABERTURA, FECHAMENTO, LEITURA, ESCRITA, VAZIO};

// enum Erros escreveArquivo(char *nome){
//     FILE *f = fopen(nome, "w");
//     if(f == NULL)
//         return ABERTURA;

//     int qtd = fprintf(f, "hello, world\n");
//     if(qtd == 0)
//         return ESCRITA;

//     int fechamento = fclose(f);
//     if(fechamento != 0)
//         return FECHAMENTO;

//     return OK;
// }

// int main(){
//     char arq[255] = "arquivo.txt";
//     enum Erros e = escreveArquivo(arq);
//     switch(e){
//         case ABERTURA:
//             printf("erro na abertura do arquivo\n");
//             break;
//         case FECHAMENTO:
//             printf("erro no fechamendo do arquivo\n");
//             break;
//         case LEITURA:
//             printf("erro na leitura do arquivo\n");
//             break;
//         case ESCRITA:
//             printf("erro na escrita do arquivo\n");
//             break;
//         case VAZIO:
//             printf("erro de arquivo vazio\n");
//             break;
//         case OK:
//             printf("sem erros\n");
//             break;

//     }
// }

// int escreveArquivo(char *nome_arq) {
//     char nome[255];
//     FILE *fp = fopen(nome_arq, "w");
//     if(fp == NULL){
//         printf("Erro ao abrir o arquivo!\n");
//         return 1;
//     }

//     printf("Digite A mensagem a ser gravada: ");
//     fgets(nome, 255, stdin);
//     int escrita = fprintf(fp, "%s", nome);
//     if(escrita == 0){
//         printf("Erro  ao escrever no arquivo!\n");
//         return 1;
//     }
    
    
    
//     fclose(fp);

//     return 0;

// }

// int lerArquivo(char *nome_arq){
//     char linha[255];

//     FILE *fp = fopen(nome_arq, "r");
//     if(fp == NULL){
//         printf("Erro ao abrir o arquivo\n");
//         return 1;
//     }

//     fgets(linha, 255, fp);
//     printf("%s", linha);
//     fgets(linha, 255, fp);
//     printf("%s", linha);

//     fclose(fp);

//     return 0;
// }

// int main() {
//     char arquivo[255] = "arquivo.txt";
//     lerArquivo(arquivo);
// }



// char nome[255];
//     FILE *fp = fopen("arquivo.txt", "a");
//     if(fp == NULL){
//         printf("Erro ao abrir o arquivo!\n");
//         return 1;
//     }
    
//     printf("Digite o seu nome: ");
//     fgets(nome, 255, stdin);
//     fprintf(fp, "Mensagem: %s", nome);
    
    
    
//     fclose(fp);

//     return 0;

// #include<stdio.h>
// #include <stdlib.h>

// void printArray(int array[], int t){
//     for(int i=0; i<t; i++)
//         printf("%d ", array[i]);
//     printf("\n");
// }

// int main(){
//     int t = 5;
//     int array[] = {1, 2, 3, 4, 5};
//     printf("dados que serao armazenados: ");
//     printArray(array, t);

//     // salva o array em um arquivo binario
//     printf("salvando dados em um arquivo binario\n");
//     FILE *f = fopen("array", "wb");
//     fwrite(array, t, sizeof(int), f);
//     fclose(f);

//     // le os dados do arquivo binario e armazena em array2
//     printf("lendo os dados do arquivo binario\n");
//     int array2[t];
//     f = fopen("array", "rb");
//     int i = fread(array2, t, sizeof(int), f);
//     fclose(f);
//     printf("dados que foram lidos: ");
//     printArray(array2, t);
// }


// #include <stdio.h>
// #include <stdlib.h>

// int main(){
//     int* p = malloc(5 * sizeof(int));
//     *(p+0) = 1;
//     *(p+1) = 2;
//     *(p+2) = 3;
//     *(p+3) = 4;
//     *(p+4) = 5;

//     for(int i=0; i<5; i++)
//         printf("*(p+%d) = %d (%p)\n", i, *(p+i), (p+i));

//     printf("\n");

//     p[0] = 6;
//     p[1] = 7;
//     p[2] = 8;
//     p[3] = 9;
//     p[4] = 10;
//     for (int i = 0; i < 5; i++)
//          printf("p[%d] = %d (%p)\n", i, p[i], &(p[i]));

//     free(p);

// }

// #include<stdio.h>

// int main(){
//      int i = 0;
//      printf("i = %d\n", i);   // 0
//      printf("i = %d\n", i++); // 0 (primeiro usa o valor, depois incrementa)
//      printf("i = %d\n", ++i); // 2 (primeiro incrementa, depois usa o valor)
//      printf("i = %d\n", i--); // 2 (primeiro usa o valor, depois decrementa)
//      printf("i = %d\n", --i); // 0 (primeiro decrementa, depois usa o valor)
//      printf("i = %d\n", i);   // 0
// }