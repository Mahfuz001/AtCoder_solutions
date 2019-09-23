n, k = [int(x) for x in input().split()]
s = input()

for i in range(0, len(s)):
  if(i == k-1):
    print(s[i].lower(),end='')
  else:
    print(s[i],end='')
print()

