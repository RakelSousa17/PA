Algoritmo "NovoSal"
// Disciplina  :  [Linguagem e L�gica de Programa��o] 
// Professor   : Antonio Carlos Nicolodi 
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 02/04/2019
Var
// Se��o de Declara��es das vari�veis 
sal, grat, imp, desc, novoSal : real

Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
escreva ("Digite o sal�rio base do funcion�rio:")
leia (sal)
grat<- sal*1.10
imp<- sal*1.15
desc<- sal-imp
novoSal<- desc+grat
escreva ("O sal�rio do funcion�rio a receber � :", novoSal)

Fimalgoritmo