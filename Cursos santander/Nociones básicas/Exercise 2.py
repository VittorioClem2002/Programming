a=int(input("Insert an integer number for a<="))

if a>0:
    print("This number is positive")
elif a<0:
    print("This number is negative")

if a==0:
    print("And is zero")
elif a!=0 and a%2 == 0:
    print("And is even")
else:
    print("And is odd")

