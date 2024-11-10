# List of subjects with their respective weights and type (Lecture + Lab or Lecture + Tutorial)
subjects = {
    "Maths": {"weight": 4, "type": "Lecture + Tutorial"},
    "Mechanics": {"weight": 4, "type": "Lecture + Tutorial"},
    "BEE": {"weight": 4, "type": "Lecture + Lab"},
    "DLD": {"weight": 4, "type": "Lecture + Lab"},
    "DSA": {"weight": 5, "type": "Lecture + Lab"},
    "PTT": {"weight": 4, "type": "Lecture + Lab"}
}

# Grades scale
grades = {
    'S': 10,
    'A': 9,
    'B': 8,
    'C': 7,
    'D': 6,
    'E': 5,
    'I': 0,
    'F': 0,
    'FA': 0,
}

# Initialize MidSemExam Marks (out of 30)
MidSemExam = {
    "Maths": 25,
    "Mechanics": 10,
    "BEE": 21,
    "DLD": 23,
    "DSA": 30,
    "PTT": 28
}

# Initialize EndSemExam Marks (out of 50)
EndSemExam = {
    "Maths": 45,
    "Mechanics": 30,
    "BEE": 35,
    "DLD": 45,
    "DSA": 50,
    "PTT": 50
}

# Initialize MidSem Assignments/Quizzes Marks (out of 10)
MidSemAssQuiz = {
    "Maths": 8,
    "Mechanics": 9,
    "BEE": 9,
    "DLD": 8,
    "DSA": 9,
    "PTT": 7
}

# Initialize EndSem Assignments/Quizzes Marks (out of 10)
EndSemAssQuiz = {
    "Maths": 7,
    "Mechanics": 9,
    "BEE": 9,
    "DLD": 8,
    "DSA": 10,
    "PTT": 10
}

# Initialize Practical Exams Marks (out of 50)
PracExam = {
    "Maths": None,
    "Mechanics": None,
    "BEE": 35,
    "DLD": 45,
    "DSA": 50,
    "PTT": 50
}

# Calculate final marks with updated weightage
final_marks = {}

for subject, details in subjects.items():
    subject_type = details["type"]

    if subject_type == "Lecture + Tutorial":
        # For subjects with Lecture + Tutorial
        final_marks[subject] = round(
            (MidSemAssQuiz[subject] + EndSemAssQuiz[subject])+  # 20% quizzes
            MidSemExam[subject] +  # 30% mid-sem
            EndSemExam[subject],   # 50% end-sem
            2
        )
    elif subject_type == "Lecture + Lab":
        # For subjects with Lecture + Lab
        theory_component = (MidSemAssQuiz[subject] + EndSemAssQuiz[subject] +
                            MidSemExam[subject] + EndSemExam[subject]) * 0.75  # 75% theory components
        lab_component = PracExam[subject] * 0.50 if PracExam[subject] is not None else 0  # 25% lab component
        final_marks[subject] = round(theory_component + lab_component, 2)

# Display grades based on final marks
scores = []
m_list = []

for subject, mark in final_marks.items():
    # Determine the grade based on the mark
    if mark > 84:
        grade = 'S'
    elif mark > 74:
        grade = 'A'
    elif mark > 64:
        grade = 'B'
    elif mark > 54:
        grade = 'C'
    elif mark > 44:
        grade = 'D'
    elif mark > 34:
        grade = 'E'
    else:
        grade = 'F'
    
    # Append the grade to the list
    m_list.append(grade)
    
    # Print the subject, marks, and grade
    print(f"{subject:<15} : {mark:<6.2f} = {grade}")

scores.append(m_list)

# Calculate CGPA
output = []

for i in scores:
    upper_sum = 0
    lower_sum = 0
    for x, (subject, details) in enumerate(subjects.items()):
        weight = details["weight"]
        upper_sum += grades[i[x]] * weight
        lower_sum += weight
    cgpa = upper_sum / lower_sum
    output.append(cgpa)

# Display CGPA
print(f"\nCGPA - {round(output[0], 2)}")
