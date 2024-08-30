print("Empresa XYZ.")
nome=str(input("Digite o seu nome: "))
atual=float(input(f"Digite o salario atual de {nome}: "))
if (atual >= 0 and atual <= 400):
    aumento=atual*0.15
    novo=atual+aumento
    print(f"{nome} teve um aumento de 15%. Seu salario de RS {atual} passara a ser {novo}.")
elif (atual >= 401 and atual <= 700):
    aumento=atual*0.12
    novo=atual+aumento
    print(f"{nome} teve um aumento de 12%. Seu salario de RS {atual} passara a ser {novo}.")
elif (atual >= 701 and atual <= 1000):
    aumento=atual*0.1
    novo=atual+aumento
    print(f"{nome} teve um aumento de 10%. Seu salario de RS {atual} passara a ser {novo}.")
elif (atual >= 1001 and atual <= 1800):
    aumento=atual*0.07
    novo=atual+aumento
    print(f"{nome} teve um aumento de 7%. Seu salario de RS {atual} passara a ser {novo}.")
elif (atual >= 1801 and atual <= 2500):
    aumento=atual*0.04
    novo=atual+aumento
    print(f"{nome} teve um aumento de 4%. Seu salario de RS {atual} passara a ser {novo}.")
elif (atual > 2500):
    print(f"{nome} nao teve um aumento. Seu salario de RS {atual} permanecera o mesmo.")
else:
    print("Inválido")