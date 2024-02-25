#given a string s of lower letter, remove consecutive vowels frm S.
#after removing, the order of the list should be maintained.
def vow(l):
  return ((l=='a') or (l=='e') or(l=='i') or(l=='o') or(l=='u')  ) #evaluated as true or false
def final(ip):
  print(ip[0],end="")
  for i in range(1,len(ip)):
    if((vow(ip[i-1])!= True) 
    or (vow(ip[i])!= True)):
      print(ip[i],end="")
ip=input()
final(ip) #function call to p function user defined fnc