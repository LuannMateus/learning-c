#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
* Dentro da função main precisamos escrever a seguinte função:

* setlocale();

* Esta função pode ser utilizada de três formas:

* 1ª = setlocale(LC_ALL, NULL);// padrão da linguagem C
* 2ª = setlocale(LC_ALL, "");// padrão do sistema operacional
* 3ª = setlocale(LC_ALL, "Portuguese");// português brasileiro

* A primeira forma nós já conhecemos. Por padrão a linguagem C utiliza a TABELA ASCII resumida, com caracteres de 0 a 127, sem acentuação.

* A segunda forma utiliza a codificação adotada pelo sistema operacional da máquina do usuário. Assim, se o sistema operacional estiver em português, perfeito, irá funcionar. Contudo, muitos usuários utilizam o sistema operacional em inglês, neste caso o problema com acentuação permanecerá.

* A terceira forma é a mais recomendada. Ela garante a utilização da TABELA ASCII ESTENDIDA com acentuação independente do sistema operacional utilizado.
*/

int main() {
  // setlocale(LC_ALL, NULL);
  // setlocale(LC_ALL, "");
  setlocale(LC_ALL, "Portuguese");

  printf("\nCora��o");

  return 0;
}