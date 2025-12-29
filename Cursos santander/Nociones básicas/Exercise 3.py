print("Insert 5 integer numbers")

list=[]
for i in range(5):
    a=int(input(f"{i+1})<=="))
    list.append(a)

largest=list[0]
smallest=list[0]
total=list[0]

for n in list:
    if n>largest:
        largest=n
    elif n<smallest:
        smallest=n
    total+=n

average=total/5

print(f"The largest: {largest}\nThe smallest: {smallest}\nThe average: {average}")

