## Observações Importantes:

1) Ao copiar os códigos em JavaScript para o URI, adicione na primeira linha imediatamente antes de "stdin" o seguinte: "/dev/stdin". Logo, a primeira linha para funcionar no URI fica do seguinte modo:

- const input = require("fs").readFileSync("/dev/stdin", "utf8");

2) Para rodar algum programa em JavaScript localmente, você precisa do NodeJS instalado em sua máquina. Após isso, vá até a pasta do problema que deseja e escreva no terminal:

- node ./script.js

3) Para rodar algum programa em C++ localmente, mude o Makefile e coloque o arquivo que deseja compilar. Para rodar, faça:
- Acesse a pasta challenges-cpp
- Digite make no terminal
- Digite ./run no terminal

4) Os problemas foram criados apenas para que eu possa testar e melhorar minha lógica de programação, mas sinta-se à vontade para copiar algum código que deseja.

