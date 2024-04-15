# Explicacao: [Problema 01](https://codeforces.com/problemset/problem/1020/B)

O problema consiste em uma turma de uma escola na qual há um professor e uma quantidade N de alunos que caso não se comportem bem, ganham uma advertência - na verdade, um “furo na insígnia” mas para facilitar tratarei assim.

Cada aluno é numerado de 1 a N e quando o professor escolhe um aluno aleatório, primeiro ele dá a advertência e depois o aluno indica quem foi o real culpado. Em seguida, o professor segue para quem o aluno mencionou e dá outra advertência, mas este último, por sua vez também indica outro real culpado, e o processo se repete. 

O objetivo do problema é localizar o primeiro aluno a ter duas advertências. Embora tenhamos as relações de qual estudante acusou qual, não sabemos quem foi o primeiro estudante a conversar com o professor. Dessa forma, devemos realizar o processo para cada estudante sendo o primeiro a conversar com o professor e imprimir o estudante que primeiro recebeu duas advertências
