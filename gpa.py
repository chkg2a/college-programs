sub_weight = [5,4,4,3,3,0]
total_subs = sub_weight.__len__()

grades = {
    'S' : 10,
    'A' : 9,
    'B' : 8,
    'C' : 7,
    'D' : 6,
    'E' : 5,
    'I' : 0,
    'F' : 0,
    'FA' : 0,
}

MidSemExam = {
    "Chem" : 24,
    "Maths" : 23,
    "Program" : 29,
    "Communication" : 19,
    "Env" : 20
}

EndSemExam = {
    "Chem" : 35,
    "Maths" : 42,
    "Program" : 50,
    "Communication" : 40,
    "Env" : 40
}

MidSemAssQuiz = {
    "Chem" : (10+5)/2,
    "Maths" : 5,
    "Program" : 8,
    "Communication" : 12/2,
    "Env" : 10,
    "Workshop" : 14/2,
}

EndSemAssQuiz = {
    "Chem" : 6,
    "Maths" : 5,
    "Program" : 9,
    "Env" : 10,
    "Communication" : 7,
    "Workshop" : 9,
}

PracExam = {
    "Chem" : 40,
    "Workshop" : 45,
    "Communication" : (40+41)/2,
    "Program" : 50,
}

mark_layout = "EndSem + MidSem + (Prac + (mid ass + end ass))"

final_marks = {
    "Chemistry" : (EndSemExam['Chem'] + MidSemExam['Chem'] + (PracExam['Chem']+ MidSemAssQuiz['Chem'] + EndSemAssQuiz['Chem']))/1.5,
    "Maths" : EndSemExam['Maths'] + MidSemExam['Maths'] + (MidSemAssQuiz['Maths'] + EndSemAssQuiz['Maths']),
    "Programming" : (EndSemExam['Program'] + (PracExam['Program']+ MidSemExam['Program'] + MidSemAssQuiz['Program'] + EndSemAssQuiz['Program']))/1.5,
    "Workshop" : (PracExam['Workshop']+ (MidSemAssQuiz['Workshop'] + EndSemAssQuiz['Workshop']) + 7 + 7),
    "Communication" : (EndSemExam['Communication'] + (PracExam['Communication']+ MidSemExam['Communication'] + MidSemAssQuiz['Communication'] + EndSemAssQuiz['Communication']))/1.5,
    "Environment" : EndSemExam['Env'] + (MidSemExam['Env'] + MidSemAssQuiz['Env'] + EndSemAssQuiz['Env']),
}

scores = []

m_list = []
print("You've got")
for mark in final_marks:
    print(f"{mark} : {final_marks[mark]}")
    if(final_marks[mark] > 84):
        m_list.append('S')
    elif(final_marks[mark] > 74):
        m_list.append('A')
    elif(final_marks[mark] > 64):
        m_list.append('B')
    elif(final_marks[mark] > 54):
        m_list.append('C')
    elif(final_marks[mark] > 44):
        m_list.append('D')
    elif(final_marks[mark] > 34):
        m_list.append('E')
    else:
        m_list.append('F')
scores.append(m_list)

output = []

for i in scores:
    upper_sum = 0;
    lower_sum = 0;
    cgpa = 0
    for x in range(total_subs):
        upper_sum += grades[i[x]] * sub_weight[x] 
        lower_sum += sub_weight[x]
    cgpa = upper_sum/lower_sum
    output.append(cgpa);

for i in range(len(scores)):
    print(f"CGPA - {round(output[i],2)}")

