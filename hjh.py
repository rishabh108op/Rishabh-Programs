fhand="ritesh"
count=dict()
for line in fhand:
    words=line.split()
    for word in words:
        if word not in count:
            count[word]=1
        else:
            count[word]+=1
print(count)
