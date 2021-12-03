arquivo = open("input.txt", "r")
entrada = arquivo.read()
numerosRestantes = entrada.split('\n')

# oxygen
for j in range(12):
  numerosRestantesCopia = []
  contaZero = 0
  contaUm = 0
  for i in numerosRestantes:
    if(i[j] == '0'): contaZero += 1
    if(i[j] == '1'): contaUm += 1
  if contaZero > contaUm:
    for i in numerosRestantes:
      if(i[j] == '0'):
        numerosRestantesCopia.append(i)
  else:
    for i in numerosRestantes:
      if(i[j] == '1'):
        numerosRestantesCopia.append(i)
  numerosRestantes = numerosRestantesCopia
  if(len(numerosRestantes) == 1):
    print(numerosRestantes)
    break

# co2
numerosRestantes = entrada.split('\n')
for j in range(12):
  numerosRestantesCopia = []
  contaZero = 0
  contaUm = 0
  for i in numerosRestantes:
    if(i[j] == '0'): contaZero += 1
    if(i[j] == '1'): contaUm += 1
  if contaZero > contaUm:
    for i in numerosRestantes:
      if(i[j] == '1'):
        numerosRestantesCopia.append(i)
  else:
    for i in numerosRestantes:
      if(i[j] == '0'):
        numerosRestantesCopia.append(i)
  numerosRestantes = numerosRestantesCopia
  if(len(numerosRestantes) == 1):
    print(numerosRestantes)
    break
