Algoritmo "semnome"
// Disciplina  :  [Linguagem e L�gica de Programa��o] 
// Professor   : Antonio Carlos Nicolodi 
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 02/04/2019
Var
// Se��o de Declara��es das vari�veis 
b2, x1, x2, delta, a, b, c :real

Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
escreva("Digite o valor de a:")
leia(a)
escreva("Digite o valor de b:")
leia(b)
escreva("Digite o valor de c:")
leia(c)
delta <- b^2 - 4 * a * c
se(delta < 0) entao
escreval("DELTA = ", delta)
escreva("N�o existem ra�zes reais!")
senao
se(delta = 0) entao
x1 <- -b/(2*a)
escreval("DELTA = ", delta)
escreval("x' = x'' = ", x1:6:2)
senao
x1 <- (-b - raizq(delta)) / (2 * a)
x2 <- (-b + raizq(delta)) / (2 * a)
escreval("x' = ", x1:6:2)
escreval("x'' = ", x2:6:2)
fimse
fimse
fimalgoritmo