Algoritmo "Dep�sito"
// Disciplina  :  [Linguagem e L�gica de Programa��o] 
// Professor   : Antonio Carlos Nicolodi 
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 02/04/2019
Var
// Se��o de Declara��es das vari�veis 
deposito, taxa, rend, total : real

Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
escreva ("Digite o valor do dep�sito:")
leia (deposito)
escreva ("Digite o valor da taxa de juros:")
leia (taxa)
rend<- deposito*(taxa/100)
total<- deposito+rend
escreval ("O valor do rendimento �:", rend)
escreva ("O valor total ap�s o rendimento �:", total)

Fimalgoritmo