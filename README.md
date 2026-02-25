# Tarefa de Programação C - ECM1B

Este repositório contém a resolução das questões de lógica de programação em linguagem C.

## 📋 Resumo das Questões e Testes

### Questão 1: Adesivos Circulares
Calcula área e perímetro de um círculo.
* **Valor para teste:** Raio = `10`
* **Resultado esperado:** Área: `314.15` | Comprimento: `62.83`

### Questão 2: Placas de Madeira
Calcula perímetro, área e diagonal de uma placa quadrada.
* **Valor para teste:** Lado = `10`
* **Resultado esperado:** Perímetro: `40.00` | Área: `100.00` | Diagonal: `14.14`

### Questão 3: Sensores de Vibração
Compara a divergência entre dois sensores através dos indicadores C e D.
* **Valor para teste:** Sensor A = `10` | Sensor B = `8`
* **Resultado esperado:** Indicador C: `4.00` | Indicador D: `36.00`

## 🚀 Como executar os programas
No terminal, utilize os seguintes comandos para compilar e rodar:

```bash
# Para a Questão 1
gcc questão1.c -o programa1 -lm
./programa1

# Para a Questão 2
gcc questão2.c -o programa2 -lm
./programa2

# Para a Questão 3
gcc questão3.c -o programa3 -lm
./programa3