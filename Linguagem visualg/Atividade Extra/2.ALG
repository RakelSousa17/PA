Algoritmo "Salário com Porcentagem"
// Disciplina  :  [Linguagem e Lógica de Programação] 
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 02/04/2019
Var
// Seção de Declarações das variáveis 
salario, aumento, salarioFinal : Real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
escreva ("Informe o seu salario: ")
leia (salario)
escreva ("Informe o seu aumento, em porcentagem:")
leia (aumento)
salarioFinal<-(salario*(aumento/100)) + salario
escreva ("O salário final acrescido do aumento é:", salarioFinal)

Fimalgoritmo