alphabet=[]
for i in range(97,123):
    alphabet.append(chr(i))
print("Enter the alphabets")
s=input()
s=s.lower()
d=set(s)
d=list(d)
d.sort()
print(d)
x=len(alphabet)
y=len(d)
if(x==y):
    print("Yes")
else:
    print("NO",end="")
    
    