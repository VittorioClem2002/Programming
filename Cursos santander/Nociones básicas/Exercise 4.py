stop=False
counter=0
total=0
students=[]

print("Insert the name and the grade of the students")

while stop==False:
    name=str(input(f"{counter})Name<= "))
    grade=int(input(f"Grade<= "))
    student={"Name":name,"Grade":grade}
    
    students.append(student)

    next=int(input("\nDo you want to continue?\nInsert 1 if you want to exit, otherwise insert any other key<= "))
    if next==1:
        stop=True
    counter+=1

def get_highest_grade(students):
    highest=students[0]
    for student in students[1:]:
        if student["Grade"] > highest ["Grade"]:
            highest=student["Name"]
    return highest 

def get_average_grade(students, total):
    for student in students:
        total+=student["Grade"] 
    return total/counter

average=get_average_grade(students, total)

print(f"""
      
The student with the highest grade is {get_highest_grade(students)}

The average grade is {average}
""")