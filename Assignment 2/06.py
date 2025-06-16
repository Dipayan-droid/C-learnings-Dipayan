marks = int(input("Enter the marks: "))

if marks > 90:
    print("Grade: Ex")
elif 80 <= marks <= 89:
    print("Grade: A")
elif 70 <= marks <= 79:
    print("Grade: B")
elif 60 <= marks <= 69:
    print("Grade: C")
elif 50 <= marks <= 59:
    print("Grade: D")
elif 35 <= marks <= 49:
    print("Grade: P")
else:
    print("Grade: F")