# List of subjects with their respective weights and type (Lecture + Lab or Lecture + Tutorial)
# Grade point Lecture-Theory-Practical
MaxTheoryMarks = 100
MaxPracMarks = 50
subjects = {
    "Maths": {"weight": 4, 
              "grade-point" : "3-1-0"},
    "Mechanics": {"weight": 4, 
              "grade-point" : "3-1-0"},
    "BEE": {"weight": 4, 
              "grade-point" : "3-0-2"},
    "DLD": {"weight": 4, 
              "grade-point" : "3-0-2"},
    "DSA": {"weight": 5, 
              "grade-point" : "3-0-4"},
    "PTT": {"weight": 4, 
              "grade-point" : "2-0-4"},
}

weight_distribution = {
    "2-0-2": (67, 33),
    "2-0-4": (50, 50),
    "3-0-2": (75, 25),
    "4-0-2": (80, 20),
    "3-1-2": (80, 20),
    "2-0-6": (40, 60),
    "1-0-4": (0, 100),
    "3-1-0": (100, 0),
    "3-0-4": (60, 40)
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
    "Maths": 30,
    "Mechanics": 30,
    "BEE": 30,
    "DLD": 30,
    "DSA": 30,
    "PTT": 30
}

# Initialize EndSemExam Marks (out of 50)
EndSemExam = {
    "Maths": 50,
    "Mechanics": 50,
    "BEE": 50,
    "DLD": 50,
    "DSA": 50,
    "PTT": 50
}

# Initialize MidSem Assignments/Quizzes Marks (out of 10)
Quiz = {
    "Maths": 10,
    "Mechanics": 10,
    "BEE": 10,
    "DLD": 10,
    "DSA": 10,
    "PTT": 10
}

# Initialize EndSem Assignments/Quizzes Marks (out of 10)
TeacherEval = {
    "Maths": 10,
    "Mechanics": 10,
    "BEE": 10,
    "DLD": 10,
    "DSA": 10,
    "PTT": 10
}

# Initialize Practical Exams Marks (out of 50)
PracExam = {
    "Maths": None,
    "Mechanics": None,
    "BEE": 50,
    "DLD": 50,
    "DSA": 50,
    "PTT": 50
}

# Calculate final marks with updated weightage based on grade-point configuration
final_marks = {}

for subject, details in subjects.items():
    grade_point = details["grade-point"]
    theory_weight, practical_weight = weight_distribution[grade_point]
    
    # Calculate theory component
    theory_marks = (Quiz[subject] + TeacherEval[subject] +
                    MidSemExam[subject] + EndSemExam[subject])
    theory_component = theory_marks * (theory_weight / MaxTheoryMarks)

    # Calculate practical component
    practical_marks = PracExam[subject] if PracExam[subject] is not None else 0
    practical_component = practical_marks * (practical_weight / MaxPracMarks)

    # Sum up to get the final marks for the subject
    final_marks[subject] = round(theory_component + practical_component, 2)

# Display grades based on final marks and calculate CGPA
scores = []
m_list = []

for subject, mark in final_marks.items():
    # Determine the grade based on the mark
    if mark > 83:
        grade = 'S'
    elif mark > 73:
        grade = 'A'
    elif mark > 63:
        grade = 'B'
    elif mark > 53:
        grade = 'C'
    elif mark > 43:
        grade = 'D'
    elif mark > 33:
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
CGPA = round(output[0], 2)
print(f"\nCGPA - {CGPA}")
print(f"PC - {round(10 * CGPA - 5, 2)}%")
