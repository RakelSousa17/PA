Algoritmo "semnome"
// Disciplina  :  [Linguagem e Lógica de Programação] 
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 02/04/2019
Var
// Seção de Declarações das variáveis 
b2, x1, x2, delta, a, b, c :real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
escreva("Digite o valor de a:")
leia(a)
escreva("Digite o valor de b:")
leia(b)
escreva("Digite o valor de c:")
leia(c)
delta <- b^2 - 4 * a * c
se(delta < 0) entao
escreval("DELTA = ", delta)
escreva("Não existem raízes reais!")
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