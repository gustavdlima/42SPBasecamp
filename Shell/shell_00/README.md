# Módulo Shell 00

### Sumário:
> Este documento contém a explicação dos exercícios do módulo Shell 00 da Piscina C da 42.

### Dicionário:
> Moulinette -> Nome do algoritmo usado pela 42 para avaliar as resoluções de forma automática.

### Resoluções:
#### ex00
A Moulinette verifica na pasta um arquivo 'z' para usar o comando 'cat z' e como
conteúdo exibir 'Z' seguido de uma quebra de linha.

> 1. touch z                (cria o arquivo)
> 1. echo -e 'Z\n' > z      (coloca o conteúdo Z e a quebra de linha '\n' no arquivo 'z' -e permite a
>                               interpretação de escapes da barra invertida)

#### ex01
A Moulinette verifica na pasta um arquivo 'testShell00.tar', e se ao extraí-lo tem o arquivo 
'testShell00' com o tamanho de 40bytes e permissões -r--r-xr-x.

> 1. truncate -s 40 testShell00              (insere o tamanho de 40bytes no arquivo)
> 1. chmod 455 testShell00                   (aplica as permissões específicas)
> 1. tar -t testShell00.tar testShell00      (comprime o arquivo em .tar)

#### ex02
A Moulinette verifica na pasta um arquivo exo2.tar, e se ao extraí-lo tem os arquivos test0 à test6, 
sendo test0 e test2 pastas, test6 um link simbólico do test0 e um hardlink entre test3 e test5.
Onde cada arquivo tem tamanhos específicos e permissões específicas.

> 1. touch test1 test3 test4 test5   (cria os arquivos)
> 1. mkdir test0 test2               (cria os diretórios)
> 1. chmod...                        (aplica as permissões especificadas)
> 1. ln test3 test5                  (faz um hardlink entre os arquivos)
> 1. ln -s ./test0 ./test6           (cria o test6 a partir de um link simbólico do test0)
> 1. truncate...                     (insere o tamanho específico em cada arquivo)
> 1. tar -cf exo2.tar *              (comprime todos os arquivos * em .tar)

#### ex03
A Moulinette verifica se dentro da pasta existe um arquivo midLS tem uma linha de comando que lista os 
arquivos e pastas da pasta atual, mas não os arquivos ocultos, nem "." ou "..."(nada que comece com um ponto).
Separando-os por vírgula, ordenando por data de acesso e de maneira que as pastas sejam seguidas
por uma barra.

> 1. echo 'ls -mup' > midLS          (-m separa por vírgula -p anexa / aos diretorios 
>                                        -u organiza por data de acesso)

#### ex04
A Moulinette verifica se dentro da pasta existe um shell script git_commit.sh que retorne o id dos 5 
últimos commit do repositório git.

> 1. git log                         (comando que exibe o histórico de commits)
> 1. -n 5                            (limita o numero de commits para exibir)
> 1. --pretty=format                 (imprime o conteúdo dos logs de commit em um determinado formato)
> 1. "%H"                            (formato de impressão: commit hash)

#### ex05
A Moulinette verifica se dentro da pasta existe um shell script git_ignore.sh que retornará a lista de 
arquivos existentes ignorados pelo seu repositório git atualmente presentes no repositório local.

> 1. git ls-files                    (exibe informações sobre os arquivos no índice e na árvore de trabalho)
> 1. -o                              (exibe os arquivos não rastreados)
> 1. -i                              (exibe apenas os arquivos ignorados)
> 1. --exclude-standard              (adiciona as exclusões padrões git)

#### ex06
A Moulinette verifica se dentro da pasta existe um arquivo 'b', que foi criado a partir do patch
de um outro arquivo fornecido pela 42.

> 1. cat a > b                       (move o conteúdo de 'a' para 'b')
> 1. patch b sw.diff                 (aplica as diferenças dos arquivos 'b' e 'sw.diff' no 'b')

#### ex07
A Moulinette verifica se dentro da pasta existe um arquivo 'clean' com uma linha de comando que vai
procurar, a partir da pasta atual e dentro de todas a subpastas, os arquivos cujos nomes terminam com ~
ou comecem e terminem com #. Ele deve exibir e excluir os arquivos encontrados.

> 1. find .                          (procura por todos os arquivos e pastas)
> 1. -type f                         (especifica a procura para o tipo de arquivo regular)
> 1. -name '*~'                      (pesquisa por todos os arquivo que termina com ~)
> 1. -print                          (imprime o arquivo na saída padrão)
> 1. -delete                         (deleta o arquivo)
> 1. -o                              (ou)

#### ex08
A Moulinette verifica se dentro da pasta existe um arquivo mágico nomeado 'ft_magic' formatado para detectar
os arquivos de tipo 42 file e constítuido pela cadeia "42" ao 42º byte.

> 1. A partir do byte 41, o arquivo mágico procura a string 42 e exibe na saída '42 file'.
