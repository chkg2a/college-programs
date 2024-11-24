import random

cities = {
    0: "Imphal",
    1: "Itanagar",
    2: "Kohima",
    3: "Shillong",
    4: "Dispur",
    5: "Guwahati",
    6: "Aizawl",
    7: "Agartala",
    8: "Gangtok",
    9: "Kathmandu"
}
days_in_march = 31
num_cities = len(cities)

temperature = [[random.randint(10, 35) for _ in range(num_cities)] for _ in range(days_in_march)]

max_temp = float('-inf')
min_temp = float('inf')
max_city, max_day = 0, None
min_city, min_day = 0, None

for day in range(len(temperature)):
    for city in range(len(temperature[day])):
        temp = temperature[day][city]
        if temp > max_temp:
            max_temp = temp
            max_city = city
            max_day = day + 1
        if temp < min_temp:
            min_temp = temp
            min_city = city
            min_day = day + 1

print(f"\nHighest Temperature: {max_temp}°C recorded on Day {max_day} in {cities[max_city]}.")
print(f"Lowest Temperature: {min_temp}°C recorded on Day {min_day} in {cities[min_city]}.")
