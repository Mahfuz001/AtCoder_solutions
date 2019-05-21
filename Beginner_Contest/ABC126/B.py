s = input()
s1 = int(s[0]+s[1])
s2 = int(s[2]+s[3])

if(s1 >= 1 and s1 <=12):
  if(s2 >= 1 and s2 <=12):
    print('AMBIGUOUS')
  else:
    print('MMYY')
else:
  if(s2 >= 1 and s2 <=12):
    print('YYMM')
  else:
    print('NA')
