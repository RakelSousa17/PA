algoritmo "Media do Aluno"
// Função :
// Autor :
// Data : 19/03/2019
// Seção de Declarações 
var
   NomeA : Caracter
   N1,N2,N3,N4, Media : Real

inicio
// Seção de Comandos 
Escreva ("Média do Aluno")
Escreva ("Digite o nome do aluno")
Leia (NomeA)
Escreva ("Digite a primeira nota:")
Leia (N1)
Escreva ("Digite a segunda nota:")
Leia (N2)
Escreva ("Digite a terceira nota:")
Leia (N3)
Escreva ("Digite a quarta nota:")
Leia (N4)
Media <- (N1+N2+N3+N4)/4
Escreva ("O aluno:", NomeA, "alcançou a média:", Media)
fimalgoritmo
