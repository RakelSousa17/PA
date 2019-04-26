Algoritmo "semnome"
// Disciplina  :  [Linguagem e Lógica de Programação] 
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 02/04/2019
Var
// Seção de Declarações das variáveis 
SEG, HR, MIN : real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
Escreva("Digite um valor em segundos")
Leia(SEG)
MIN<-SEG/60
HR<-MIN/60
Escreval("Os segundos informados corresponde à", MIN, "minutos.")
Escreva("Os segundos informados corresponde à", HR, "horas.")
Fimalgoritmo
