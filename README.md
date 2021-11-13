# Solucao-Acido-Base
Projeto que desenvolvi para auxiliar alunos da graduação de química na fabricação de baterias. O projeto consiste no uso de bombas e botões. Conforme o botão pressionado a bomba correspondente ficará acionada por determinado tempo. 

Cada bomba é responsavel por despejar a quantidade desejada de acido ou base. Nesse projeto temos quatro bombas (duas para acido e duas para base). 

Com as possiveis alterações a quantidade de bombas e botões é praticamente infinita (depende do microcontrolador). 

## Nesse projeto aprendi:
- Definição de flags
- Uso de temporizadores (millis no caso do arduino)

As flags permitem "salvar" o status dos botões pressionados e iniciar a contagem de tempo usando a função "millis". 
O projeto é relativamente simples, contendo praticamente todo o código na função loop.

## TO DO:
- Separar as ações em funções;
- Criar um modulo para leitura dos botões (button.cpp e button.h por exemplo);
- Criar um modulo para acionamento das bombas (pump.cpp e pump.h por exemplo);
- Criar um modulo para configurações, permitindo facilmente modificar variaveis de tempo, etc (config.h)
- Criar um modulo para mapeamento de hardware (pin.h ou hal.h) 

