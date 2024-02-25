#no has to be positive and 3 digit
a=(input("enter the number"))
l=len(a)
a=int(a)
sum=0
temp=a
while(a!=0):
    r=a%10
    sum=sum+r**l
    a=a//10
    print
if(temp==sum):
    print("armstrong")
else:
    print("not armstrong")
