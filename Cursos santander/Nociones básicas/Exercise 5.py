even=[]
odd=[]
number=1
counter=0
print('Insert a series of integer numbers. Insert 0 at the end')
while number!=0:
    counter+=1
    number=int(input(f'{counter})<= '))
    if number==0:
        break  
    elif number%2!=0:
        odd.append(number)
    elif number%2==0:
        even.append(number)

i=0
print('List of even numbers:')    
for i in even:
    print(f'{i}')

n=0
print('List of odd numbers:')
for n in odd:
    print(f'{n}')

