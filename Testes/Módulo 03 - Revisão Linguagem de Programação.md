# Módulo 03 - Revisão Linguagem de Programação
Neste módulo teremos uma revisão do framework que sera usado para automação dos testes para web

## Tópicos de ensino

### Aula 04 (Material Aula 01 [aqui](https://github.com/flexpeak/010-08-2022-NOT-TSWI/blob/main/files/Aula-III-Revisao-Python-1.pdf))

### Aula 04 (Material Aula 02 [aqui](https://github.com/flexpeak/010-08-2022-NOT-TSWI/blob/main/files/Aula-III-Revisao-Python-2.pdf))

### Aula 04 (Material Aula 03 [aqui](https://github.com/flexpeak/010-08-2022-NOT-TSWI/blob/main/files/Aula-IV-Revisao-Python-1.pdf))

### Aula 04 (Material Aula 04 [aqui](https://github.com/flexpeak/010-08-2022-NOT-TSWI/blob/main/files/Aula-IV-Revisao-Python-2.pdf))

### Aula 04 (Material Aula 05 [aqui](https://github.com/flexpeak/010-08-2022-NOT-TSWI/blob/main/files/Aula-IV-Revisao-Python-Classes.pdf))
<!-- - Elaboração do Plano de Teste
- Planejamento e Execução dos Testes
- Critérios de aceitação
- Plano de Testes e Casos de Teste -->
<!-- 
### Aula 04

- Casos de Teste baseado em Casos de Uso
- Gerando Evidências de Teste
- Automação de Testes Funcionais com Selenium 
- Utilizando o Selenium para automação -->

## Ferramentas de aprendizagem
Para esse módulo, necessitaremos de:

- Editores de texto e planilhas;
- Terminal e/ou IDE VsCode;

## UPDATE!

```python
class Automovel:
    def __init__(self, placa='XX-123', ano='2022', cor='Preto', modelo='SUV'):
        self.placa = placa
        self.ano = ano
        self.cor = cor
        self.modelo = modelo

    def dirigir(self, velocidade):
        print('Estou dirigindo a ', velocidade, 'km/h')

    def updatePlaca(self, novaPlaca):
        self.placa = novaPlaca


print('Ola')

carro1 = Automovel()
carro2 = Automovel(placa='xyz-3456')

print(carro1.dirigir(80))
print('Placa do 1 objeto: ' + carro1.placa)
carro1.placa = 'aaaaaaa'
print('Nova Placa do 1 objeto: ' + carro1.placa)

```