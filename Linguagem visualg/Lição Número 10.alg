 algoritmo "Poupanca"
// Função :
// Autor :
// Data : 21/03/2019
// Seção de Declarações 
var
   Depos_Inicial, Mes1, Mes2, Mes3 : real
inicio
// Seção de Comandos
   Escreval("Controle sua Conta Poupança!")

   Depos_Inicial <- 500
   Mes1 <- Depos_Inicial + ((Depos_Inicial / 100)*1)
   Mes2 <- Mes1 + ((Mes1 / 100)*1)
   Mes3 <- Mes2 + ((Mes2 / 100)*1)

   
   Escreval("Seu saldo após três mêses será: ", Mes3, " $.")
   Escreval("Depósito inicial:", Depos_Inicial, " $.")
fimalgoritmo
