pal = raw_input()
cant = 0
for c in pal:
	if(c=='*'):
		cant+=1
if(cant<2):
	print 'BIEN'
elif(cant==2):
	print 'HAPPY'
else:
	print 'BUSCAR A TAVO'