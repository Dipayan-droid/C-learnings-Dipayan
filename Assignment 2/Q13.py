income = float(input("Enter your income: "))
tax = 0

if income < 5000:
    tax = 0
elif 5000 <= income <= 6000:
    tax = (income - 5000) * 0.10
elif 6000 < income <= 15000:
    tax = 100 + (income - 6000) * 0.20
elif income > 15000:
    tax = 1900 + (income - 15000) * 0.30

print(f"The income tax is: {tax:.2f}")