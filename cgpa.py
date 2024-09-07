# List of subjects
subjects = ["Maths", "Mechanics", "BEE", "DLD", "DSA", "PTT"]

# Weights for each subject (must match the subjects list order)
sub_weight = [4, 4, 4, 4, 5, 4]
total_subs = len(sub_weight)

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

# Initialize MidSemExam Marks (all out of 30)
MidSemExam = {}
for i, subject in enumerate(subjects):
    if subject == "PTT":
        MidSemExam[subject] = 25  # No mid-semester exam for PTT
    elif subject == "Maths":
        MidSemExam[subject] = 25  # Custom value for Maths
    elif subject == "Mechanics":
        MidSemExam[subject] = 25  # Custom value for Mechanics
    elif subject == "BEE":
        MidSemExam[subject] = 20  # Custom value for BEE
    elif subject == "DLD":
        MidSemExam[subject] = 28  # Custom value for DLD
    elif subject == "DSA":
        MidSemExam[subject] = 29  # Custom value for DSA

# Initialize EndSemExam Marks (out of 50)
EndSemExam = {}
for i, subject in enumerate(subjects):
    if subject == "PTT":
        EndSemExam[subject] = 40  # No end-semester exam for PTT
    elif subject == "Maths":
        EndSemExam[subject] = 40  # Custom value for Maths
    elif subject == "Mechanics":
        EndSemExam[subject] = 40  # Custom value for Mechanics
    elif subject == "BEE":
        EndSemExam[subject] = 30  # Custom value for BEE
    elif subject == "DLD":
        EndSemExam[subject] = 45  # Custom value for DLD
    elif subject == "DSA":
        EndSemExam[subject] = 45  # Custom value for DSA

# Initialize MidSem Assignments/Quizzes Marks (out of 10)
MidSemAssQuiz = {}
for i, subject in enumerate(subjects):
    if subject == "PTT":
        MidSemAssQuiz[subject] = 9  # Special calculation for PTT
    elif subject == "Maths":
        MidSemAssQuiz[subject] = 6  # Custom value for Maths
    elif subject == "Mechanics":
        MidSemAssQuiz[subject] = 6  # Custom value for Mechanics
    elif subject == "BEE":
        MidSemAssQuiz[subject] = 5  # Custom value for BEE
    elif subject == "DLD":
        MidSemAssQuiz[subject] = 8  # Custom value for DLD
    elif subject == "DSA":
        MidSemAssQuiz[subject] = 9  # Custom value for DSA

# Initialize EndSem Assignments/Quizzes Marks (out of 10)
EndSemAssQuiz = {}
for i, subject in enumerate(subjects):
    if subject == "PTT":
        EndSemAssQuiz[subject] = 9  # Custom value for PTT
    elif subject == "Maths":
        EndSemAssQuiz[subject] = 6  # Custom value for Maths
    elif subject == "Mechanics":
        EndSemAssQuiz[subject] = 6  # Custom value for Mechanics
    elif subject == "BEE":
        EndSemAssQuiz[subject] = 4  # Custom value for BEE
    elif subject == "DLD":
        EndSemAssQuiz[subject] = 8  # Custom value for DLD
    elif subject == "DSA":
        EndSemAssQuiz[subject] = 9  # Custom value for DSA

# Initialize Practical Exams Marks (out of 50)
PracExam = {}
for i, subject in enumerate(subjects):
    if subject == "PTT":
        PracExam[subject] = 50  # Custom value for PTT
    elif subject == "Maths":
        PracExam[subject] = None  # No practical exam for Maths
    elif subject == "Mechanics":
        PracExam[subject] = None  # Custom value for Mechanics
    elif subject == "BEE":
        PracExam[subject] = 35  # Custom value for BEE
    elif subject == "DLD":
        PracExam[subject] = 40  # Custom value for DLD
    elif subject == "DSA":
        PracExam[subject] = 50  # No practical exam for DSA

final_marks = {}

for subject in subjects:
    if subject in PracExam and PracExam[subject] is not None:
        # Subjects with Practical exams, calculate average from 150 marks
        final_marks[subject] = round((EndSemExam[subject] + MidSemExam[subject] + PracExam[subject] +
                                MidSemAssQuiz[subject] + EndSemAssQuiz[subject]) / 1.5,2)
    else:
        # Subjects without Practical exams
        final_marks[subject] = round(EndSemExam[subject] + MidSemExam[subject] + MidSemAssQuiz[subject] + EndSemAssQuiz[subject],2)

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
    cgpa = 0
    for x in range(total_subs):
        upper_sum += grades[i[x]] * sub_weight[x]
        lower_sum += sub_weight[x]
    cgpa = upper_sum / lower_sum
    output.append(cgpa)

# Display CGPA
print(f"\nCGPA - {round(output[0], 2)}")
