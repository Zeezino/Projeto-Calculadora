#include <stdio.h>
#include <math.h>

void interface()
{
    printf(" .d8888b.        d8888 888      .d8888b.  888     888 888             d8888 888888888   .d88888b.  88888888          d8888 \n");
    printf("c88P  Y88b      d88888 888     d88P  Y88b 888     888 888            d88888 888    88b d88P    88b 888   Y88b       d88888 \n");
    printf("888    888     d88P888 888     888    888 888     888 888           d88P888 888    888 888     888 888    888      d88P888\n");
    printf("888           d88P 888 888     888        888     888 888          d88P 888 888    888 888     888 888   d88P     d88P 888\n");
    printf("888          d88P  888 888     888        888     888 888         d88P  888 888    888 888     888 88888888      d88P  888\n");
    printf("888    888  d88P   888 888     888    888 888     888 888        d88P   888 888    888 888     888 888 T88b     d88P   888\n");
    printf("Y88b  d88P d8888888888 888     Y88b  d88P Y88b. .d88P 888       d8888888888 888  .d88P Y88b. .d88P 888  T88b   d8888888888\n");
    printf(" 8Y8888P  d88P     888 88888888  Y8888P     Y88888P   88888888 d88P     888 888888888   Y88888P    888   T88b d88P     888\n\n");
                                                                                                                            
                                                                                                                            
                                                                                                                            
    printf("8888     d888 8888888 888           .d8888b.  888888888         d8888 888     888     888\n");                               
    printf("88888   d8888   888   888          d88P  Y88b 888   Y88b       d88888 888     888     888\n");                            
    printf("8888888888888   888   888          888    888 888    888      d88P888 888     888     888\n");                         
    printf("8888888888888   888   888          888        888   d88P     d88P 888 888     888     888\n");                      
    printf("888 Y888P 888   888   888          888  88888 88888888      d88P  888 888     888     888\n");                   
    printf("888  Y8P  888   888   888          888    888 888 T88b     d88P   888 888     888     Y8P\n");                
    printf("888       888   888   888          Y88b  d88P 888  T88b   d8888888888 Y88b. .d88P      | \n");             
    printf("888       888 8888888 88888888      Y8888P88 888   T88b  d88P     888   Y88888P       888\n\n");          

    printf("|---------------------------|\n");
    printf("|*** Menu da calculadora ***|\n");
    printf("|---------------------------|\n\n");

    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    printf("5 - Potenciacao\n");
    printf("6 - Raiz Quadrada\n");
    printf("7 - Sair\n\n");

}





int main()
{
  int operacao;

  interface();

  printf("Digite o numero da operacao abaixo, ou 7 para sair\n");
  scanf("%d\n", &operacao);

  while(operacao!=7)
  {
    if(operacao == 1)
    {
      int n; //quantidade de numeros que serao somados

      printf("Coloque a quantidade de numeros que serao somados abaixo:\n");
      scanf("%d\n", &n);

      soma(n);      
    }

    else if(operacao == 2)
    {
      int n; //qntd de numeros que serao subtraidos

      printf("Coloque a quantidade de numeros que serao subtraidos abaixo:\n");
      scanf("%d", &n);

      subtracao(n);
    }

    else if(operacao == 3)
    {
      int n;

      printf("Coloque a quantidade de numeros que participarao da multiplicacao abaixo:\n");
      scanf("%d", &n);

      multiplicacao(n);
    }

    else if(operacao == 4)
    {
      int n;

      printf("Coloque a quantidade de numeros que participarao da divisao abaixo:\n");
      scanf("%d", &n);

      divisao(n);
    }

    else if(operacao == 5)
    {
      double base;

      printf("(Na potenciacao, temos o padrao X^Y, em que X eh a base e Y eh o expoente)\n\n");
      printf("Digite o valor da base:\n");
      scanf("%lf", &base);

      potenciacao(base);
    }

    else if(operacao == 6)
    {
      double radicando;

      printf("(Na potenciacao, temos o padrao X^1/Y, em que X eh o radicando e Y eh o indice)\n");
      printf("Digite o valor do radicando:\n");
      scanf("%lf", &radicando);

      radiciacao();
    }
  }


    return 0;
}
