 algoritmo "Poupanca"
// Fun��o :
// Autor :
// Data : 21/03/2019
// Se��o de Declara��es 
var
   Depos_Inicial, Mes1, Mes2, Mes3 : real
inicio
// Se��o de Comandos
   Escreval("Controle sua Conta Poupan�a!")

   Depos_Inicial <- 500
   Mes1 <- Depos_Inicial + ((Depos_Inicial / 100)*1)
   Mes2 <- Mes1 + ((Mes1 / 100)*1)
   Mes3 <- Mes2 + ((Mes2 / 100)*1)

   
   Escreval("Seu saldo ap�s tr�s m�ses ser�: ", Mes3, " $.")
   Escreval("Dep�sito inicial:", Depos_Inicial, " $.")
fimalgoritmo
