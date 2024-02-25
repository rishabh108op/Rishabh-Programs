num = input("Enter a number : ")
try:
 num=int(num)
 revnum = int(str(num)[::-1]) 
 if num == revnum:
    print("Yes, %d is a palindrome" %num)
 else:
    print("No, %d is not palindrome" %num)
 freq={} 
 while revnum != 0:
    dig=revnum%10
    if dig in freq:
     freq[dig]+=1
    else:
        freq[dig]=1
    revnum=revnum//10
 print("frequency of digits in number ", freq)
except:
 print("Please enter a number!!!")