SIZE = 5
marks = []

print("STUDENT RESULT MANAGEMENT SYSTEM")
print(f"Enter marks for {SIZE} students (0-100).\n")

# Input and validate students' marks
for i in range(SIZE):
    text = input(f"Enter mark for student {i + 1}: ")
    while not (text.isdigit() and 0 <= int(text) <= 100):
        text = input("Invalid input. Enter a whole number from 0 to 100: ")
    marks.append(int(text))

# Process the list
total = sum(marks)
highest = max(marks)
lowest = min(marks)
average = total / SIZE

print("\n--- STUDENT RESULTS ---")
for i, m in enumerate(marks):
    print(f"Student {i + 1}: {m} - {'Pass' if m >= 50 else 'Fail'}")

print(f"\nTotal marks: {total}")
print(f"Average mark: {average:.2f}")
print(f"Highest mark: {highest}")
print(f"Lowest mark: {lowest}")
