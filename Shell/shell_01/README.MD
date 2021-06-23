# Módulo Shell 01

### Sumário:
> Este documento contém a explicação dos exercícios do módulo Shell 01 da Piscina C da 42.

### Dicionário:
> Moulinette -> Nome do algoritmo usado pela 42 para avaliar as resoluções de forma automática.

### Resoluções:
#### ex01
A Moulinette verifica se dentro da pasta existe um shell script 'print_groups.sh' com uma linha de
comando que determina e mostra a lista de grupos dos quais o login especificado na variável de
FT_USER é membro, separando-os por vírgula e espaço.

> 1. groups                                  (imprime o grupo em que o usuário está)
> 1. $FT_USER                                (chama a variável)
> 1. tr ' ' ','                              (substitui espaço por vírgula)
> 1. tr -d '\n'                              (delimita o espaço e tira a quebra de linha)

#### ex02
A Moulinette verifica se dentro da pasta existe um shell script 'find_sh.sh' que procure na pasta atual 
e em todas as subpastas todos os arquivos cujos nomes terminam com ".sh"(sem as aspas) e que só exiba os
seus nomes, sem o .sh.

> 1. find .                                  (procura por todos os arquivos e pastas)
> 1. -name '*.sh'                            (pesquisa por todos os arquivo que termina com .sh)
> 1. -exec basename {} .sh \;                (tira o diretório e o sufixo ".sh" dos nomes dos arquivos)

#### ex03
A Moulinette verifica se dentro da pasta existe um shell script 'count_files.sh' que mostre o número de 
arquivos regulares e de pastas dentro da pasta atual e todas as suas subpastas, incluindo o "."da pasta
inicial.

> 1. find .                                  (procura por todos os arquivos e pastas)
> 1. wc -l                                   (imprime a contagem de nova linha)

#### ex04
A Moulinette verifica se dentro da pasta existe um shell script 'MAC.sh' que mostre apenas os endereços
MAC de sua máquina.

> 1. ifconfig                                (imprime a interface de configuração de rede)
> 1. awk '/ether/{print $2}'                 (manipula e imprime a segunda coluna a partir da 
>                                               'ether' em cada coluna) 

#### ex05
A Moulinette verifica se dentro da pasta existe um arquivo '"\?$*'MaRViN'*$?\"' contendo apenas '42' 
e NADA mais.

> 1. touch e \ (escape) nos símbolos para poder criar o arquivo.
> 1. ls -lRa *MaRV* | cat -e                 (para ver o nome do arquivo)

#### ex06
A Moulinette verifica se dentro da pasta existe um shell script skip.sh que exiba um ls -l uma 
linha a cada duas (linha sim, linha não), a partir da primeira.

> 1. ls -l                                   (lista diretórios e conteúdos em lista longa)
> 1. awk 'NR % 2 != 0                        (manipula a impressão para imprimir as linhas ímpares)
> 1. { print $0}'                            (imprime a linha)
