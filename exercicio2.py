c = None
f1 = f2 = f3 = f4 = f5 = 0
cont = par = impar = med = M = menor = 0 

while c != "N" and c != "n":

    n = float(input("Digite um numero: "))
    c = input("Deseja continuar (S/N): ")

    med += n
    cont += 1

    if (cont == 1):
        M = menor = n

    if n > M: 
        M = n
    if n < menor:
        menor = n

    if n % 2 != 0: 
        impar += 1
    else:
        par += 1

    if n<0:
        f1 += 1
    elif 0 <= n < 15:
        f2 += 1
    elif 15 <= n < 100:
        f3 += 1
    elif 100 <= n < 1000:
        f4 += 1
    else:
        f5 += 1

print(f"Media aritmetica: {med/cont}")
print("Menor numero:", menor)
print("Maior numero:", M)
print("Total de numeros pares:", par)
print("Total de numeros impares:", impar)
print("Elementos na faixa 1:", f1)
print("Elementos na faixa 2:", f2)
print("Elementos na faixa 3:", f3)
print("Elementos na faixa 4:", f4)
print("Elementos na faixa 5:", f5)