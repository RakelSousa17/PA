Algoritmo "Depósito"
// Disciplina  :  [Linguagem e Lógica de Programação] 
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 02/04/2019
Var
// Seção de Declarações das variáveis 
deposito, taxa, rend, total : real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
escreva ("Digite o valor do depósito:")
leia (deposito)
escreva ("Digite o valor da taxa de juros:")
leia (taxa)
rend<- deposito*(taxa/100)
total<- deposito+rend
escreval ("O valor do rendimento é:", rend)
escreva ("O valor total após o rendimento é:", total)

Fimalgoritmo