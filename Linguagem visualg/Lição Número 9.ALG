Algoritmo "semnome"
// Disciplina  :  [Linguagem e L�gica de Programa��o] 
// Professor   : Antonio Carlos Nicolodi 
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 02/04/2019
Var
// Se��o de Declara��es das vari�veis 
valorHora, dependentes, horasTrabalhadas, valorBruto, valorLiquido : real

Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
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