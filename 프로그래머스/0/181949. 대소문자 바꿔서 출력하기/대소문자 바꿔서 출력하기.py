a = input().rstrip()

result = ''
for i in a:
    if i.isupper():
        result += i.lower()
    else:
        result += i.upper()
    
print(result)