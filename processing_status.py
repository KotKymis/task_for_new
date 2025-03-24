import re
import sys
import os
 #запуск утилиты через консоль: python processing_status.py input_status_OCT.txt
if len(sys.argv) < 2:
    print("Передайте в качестве аргумента название обрабатываемого файла <filename>")
    sys.exit(1) #ошибка

filename = sys.argv[1]
print(f"Обрабатываемый файл: {filename}")

with open( filename,'r') as file:
    content = file.read()
    print("Файл прочитан")
    match_1 = re.search(r'State\s+(\w+)',content)
    match_2 = re.search(r'(Temperature)\s+(\w+)',content)
    match_3 = re.search(r'(Frequency)\s+\|\s+(\w+)\s+\w+\s+\|\s+(\w+)',content)
    if match_1:
        print(f"Status: {match_1.group(1)}")
    if match_2:
        print(f"{match_2.group(1)}: {match_2.group(2)} C")
    if match_3:
        print(f"Downlink \n    {match_3.group(1)}: {match_3.group(2)} MHz \nUplink \n    {match_3.group(1)}: {match_3.group(3)} MHz")
