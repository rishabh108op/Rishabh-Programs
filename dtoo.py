n=int(input("Enter decimal number"))
oct=0
c=0
while(n>0):
    rem=n%8
    n=int(n/8)
    oct=(rem*(10**c))+oct
    c=c+1
print(oct)
#binary to octal