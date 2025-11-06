import requests

cookies = {
    'COOKIE_CSRF': 'null',
    'JSESSIONID': 'RH4JgCyDtcShcErNwvB-b3j6LN1t4sUBTgVd_9ZM.node119',
}

headers = {
    'Accept': 'text/html,application/xhtml+xml,application/xml;q=0.9,image/avif,image/webp,image/apng,*/*;q=0.8',
    'Accept-Language': 'en-US,en;q=0.6',
    'Cache-Control': 'max-age=0',
    'Connection': 'keep-alive',
    'Content-Type': 'application/x-www-form-urlencoded',
    # 'Cookie': 'COOKIE_CSRF=null; JSESSIONID=RH4JgCyDtcShcErNwvB-b3j6LN1t4sUBTgVd_9ZM.node119',
    'Origin': 'https://erp.nerist.ac.in',
    'Referer': 'https://erp.nerist.ac.in/student/feedback/newInnerFeedback.html?courseTitle=uyRCromTlt0mM0JPmZSLCw%3D%3D&courseType=uyRCromTlt0mM0JPmZSLCw%3D%3D&instructorName=uyRCromTlt0mM0JPmZSLCw%3D%3D&assignment=b8l7L7r3DsBcqKCViCmR8w%3D%3D&description=bZCrOEjeM7uSC%2FIceJSPJQoT5uH3wErFWMYPeaWTBRmq34XO18xG0LzhGd%2FPiV0L',
    'Sec-Fetch-Dest': 'document',
    'Sec-Fetch-Mode': 'navigate',
    'Sec-Fetch-Site': 'same-origin',
    'Sec-Fetch-User': '?1',
    'Sec-GPC': '1',
    'Upgrade-Insecure-Requests': '1',
    'User-Agent': 'Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/131.0.0.0 Safari/537.36',
    'sec-ch-ua': '"Brave";v="131", "Chromium";v="131", "Not_A Brand";v="24"',
    'sec-ch-ua-mobile': '?0',
    'sec-ch-ua-platform': '"Linux"',
}

data = {
    'courseTitle': '',
    'courseType': '',
    'instructorName': '',
    'qes_5616_hidden': [
        '5',
        '{componentType=0, questionId=56, answer=0, isRating=true, sectionId=6, serialNo=1}',
    ],
    'qes_5716_hidden': [
        '5',
        '{componentType=0, questionId=57, answer=0, isRating=true, sectionId=6, serialNo=1}',
    ],
    'qes_5816_hidden': [
        '5',
        '{componentType=0, questionId=58, answer=0, isRating=true, sectionId=6, serialNo=1}',
    ],
    'qes_5916_hidden': [
        '5',
        '{componentType=0, questionId=59, answer=0, isRating=true, sectionId=6, serialNo=1}',
    ],
    'qes_6016_hidden': [
        '5',
        '{componentType=0, questionId=60, answer=0, isRating=true, sectionId=6, serialNo=1}',
    ],
    'qes_6116_hidden': [
        '5',
        '{componentType=0, questionId=61, answer=0, isRating=true, sectionId=6, serialNo=1}',
    ],
    'qes_6216_hidden': [
        '5',
        '{componentType=0, questionId=62, answer=0, isRating=true, sectionId=6, serialNo=1}',
    ],
    'qes_6316_hidden': [
        '5',
        '{componentType=0, questionId=63, answer=0, isRating=true, sectionId=6, serialNo=1}',
    ],
    'qes_6416_hidden': [
        '5',
        '{componentType=0, questionId=64, answer=0, isRating=true, sectionId=6, serialNo=1}',
    ],
    'qes_6516_hidden': [
        '5',
        '{componentType=0, questionId=65, answer=0, isRating=true, sectionId=6, serialNo=1}',
    ],
    'qes_6616_hidden': [
        '5',
        '{componentType=0, questionId=66, answer=0, isRating=true, sectionId=6, serialNo=1}',
    ],
    'qes_6716_hidden': [
        '5',
        '{componentType=0, questionId=67, answer=0, isRating=true, sectionId=6, serialNo=1}',
    ],
    'qes_6816_hidden': [
        '5',
        '{componentType=0, questionId=68, answer=5, isRating=true, sectionId=6, serialNo=1}',
    ],
    'qes_6916_hidden': [
        '5',
        '{componentType=0, questionId=69, answer=0, isRating=true, sectionId=6, serialNo=1}',
    ],
    'qes_7016_hidden': [
        '0',
        '{componentType=0, questionId=70, answer=0, isRating=true, sectionId=6, serialNo=1}',
    ],
    'answerHdrClass': "{'answerHdrId':0,'setId':2,'feedbackAssgndNo':32}",
}

response = requests.post('https://erp.nerist.ac.in/student/feedbackServlet', cookies=cookies, headers=headers, data=data)
print(response.status_code)
