N = int(raw_input())
cont1 = 0
cont2 = 0
for i in range(N):
    placas = int(raw_input())
    if placas % 2 == 0:
        cont1 +=1
    if placas % 2 > 0:
        cont2 +=1
dia = int(raw_input())
costo = int(raw_input())
if dia % 2 == 0:
    print costo * cont2
else:
    print costo * cont1