# URI Online Judge Problems

## Perfil

Link: https://www.urionlinejudge.com.br/judge/pt/profile/367532<br />
Posição: 9.521º<br />
Pontos: 386,4747<br />
Resolvidos: 85<br />

## Sobre Este Repositório

Os problemas encontrados neste repositório são retirados do site URI (https://www.urionlinejudge.com.br/judge/pt). Os problemas foram divididos em pastas, uma para os problemas resolvidos em JavaScript e outra para os problemas resolvidos em C++. 


## Observações Importantes:

1) Ao copiar os códigos em JavaScript para o URI, adicione na primeira linha imediatamente antes de "stdin" o seguinte: "/dev/stdin". Logo, a primeira linha para funcionar no URI fica do seguinte modo:

- const input = require("fs").readFileSync("/dev/stdin", "utf8");

2) Para rodar algum programa em JavaScript localmente, você precisa do NodeJS instalado em sua máquina. Após isso, vá até a pasta do problema que deseja e escreva no terminal:

- node ./script.js

3) Para rodar algum programa em C++ localmente, mude o Makefile e coloque o arquivo que deseja compilar. Após isso, para rodar, faça:
- Acesse a pasta challenges-cpp
- Digite make no terminal
- Digite ./run no terminal

4) Os problemas foram criados apenas para testar e melhorar minha lógica de programação, mas sinta-se à vontade para copiar algum código que deseja.

5) Para rodar um código em C++ a partir de um arquivo de entrada (neste caso, o arquivo teste01.txt), rode make e depois:
./run < teste01.txt > minhasaida.out

6) Para simular o fim de um arquivo no terminal, faça control+D