Algoritmo "semnome"
// Disciplina  :  [Linguagem e Lógica de Programação] 
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 02/04/2019
Var
// Seção de Declarações das variáveis 
valorHora, dependentes, horasTrabalhadas, valorBruto, valorLiquido : real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
escreva ("Digite o numero de dependentes:")
leia (dependentes)
escreva ("Digite o valor da hora:")
leia (valorHora)
escreva ("Digite a quantidade de horas trabalhadas:")
leia (horasTrabalhadas)
valorBruto<-valorHora*horasTrabalhadas
valorLiquido<-(300*dependentes)+valorBruto
escreval ("Valor Bruto:", valorBruto)
escreva ("Valor Liquido:", valorLiquido)

Fimalgoritmo