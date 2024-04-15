# Explicação: [Problema 03](https://codeforces.com/problemset/problem/540/C)

O problema consiste em atravessar um mapa de gelo e cair por um piso específico, mas alguns dos pisos estão quebrados e outros intactos.

Lê-se uma matriz onde "." corresponde a um piso intacto e "X" a um piso quebrado. Para isso deve-se atravessar o mapa partindo de um ponto inicial, que começa quebrado, e cair por um piso final determinado. Ao caminhar por um piso intacto ele se torna quebrado, e ao caminhar por um piso quebrado caímos por ele. 

O objetivo do exercício é identificar se existe um caminho entre esses 2 pontos que permita que possamos alcançar o próximo nível ao pisar no piso quebrado determinado como saída pelo problema. 
