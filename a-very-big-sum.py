import re
n=int(input())
s=input()
w=re.sub("[^\w]"," ",s).split()
c=0
for i in w:
  c+=int(i)
print(c)