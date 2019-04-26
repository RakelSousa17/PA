Algoritmo "NovoSal"
// Disciplina  :  [Linguagem e Lógica de Programação] 
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 02/04/2019
Var
// Seção de Declarações das variáveis 
sal, grat, imp, desc, novoSal : real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
escreva ("Digite o salário base do funcionário:")
leia (sal)
grat<- sal*1.10
imp<- sal*1.15
desc<- sal-imp
novoSal<- desc+grat
escreva ("O salário do funcionário a receber é :", novoSal)

Fimalgoritmo