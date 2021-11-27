#!/usr/bin/python3

time_Limit = 30 # s

import os
import filecmp

def init(folder):
    os.system('cp ' + folder + '/code ./')
    os.system('cp ' + folder + '/clean.sh ./')

def cleanSh():
    os.system('bash ./clean.sh')
    os.system('rm output.txt')

def cleanAll():
    os.system('rm code')
    os.system('rm clean.sh')

def run_Basic_Case(id):
    if id <= 6:
        os.system('timeout ' + str(time_Limit) + 's ' + './code < Data/BasicDataSet/testcase' + str(id) + '.txt > output.txt 2>/dev/null')
        return filecmp.cmp('Data/BasicDataSet/testcase' + str(id) + '_ans.txt', 'output.txt')
    if id == 7:
        for i in range(1, 4):
            os.system('timeout ' + str(time_Limit) + 's ' + './code < Data/BasicDataSet/testcase7/' + str(i) + '.txt >> output.txt 2>/dev/null')
        return filecmp.cmp('Data/BasicDataSet/testcase7/ans.txt', 'output.txt')
    if id == 8:
        for i in range(1, 101):
            os.system('timeout ' + str(time_Limit) + 's ' + './code < Data/BasicDataSet/testcase8/' + str(i) + '.txt >> output.txt 2>/dev/null')
        return filecmp.cmp('Data/BasicDataSet/testcase8/ans.txt', 'output.txt')


def run_Basic():
    print('Running Basic Test')
    sum = 0
    for i in range(1, 9):
        if run_Basic_Case(i):
            print('Basic Testpoint ' + str(i) + ' Accepted!')
            sum = sum + 1
        else:
            print('Basic Testpoint ' + str(i) + ' Failed!')
        cleanSh()
    print('Your Basic Test Score is', sum / 8 * 3)
    return sum / 8 * 3

def run_Advanced_Case(id):
    if id != 3:
        for i in range(1, 11):
            os.system('timeout ' + str(time_Limit) + 's ' + './code < Data/AdvancedDataSet/testcase' + str(id) + '/' + str(i) + '.in > output.txt 2>/dev/null')
            if not filecmp.cmp('Data/AdvancedDataSet/testcase' + str(id) + '/' + str(i) + '.out', 'output.txt'):
                return 0
    else:
        for i in range(1, 6):
            os.system('timeout ' + str(time_Limit) + 's ' + './code < Data/AdvancedDataSet/testcase' + str(id) + '/' + str(i) + '.in > output.txt 2>/dev/null')
            if not filecmp.cmp('Data/AdvancedDataSet/testcase' + str(id) + '/' + str(i) + '.out', 'output.txt'):
                return 0
    return 1

def run_Advanced():
    print('Running Advanced Test')
    sum = 0
    for i in range(1, 6):
        if run_Advanced_Case(i):
            print('Advanced Testpoint ' + str(i) + ' Accepted!')
            sum = sum + 1
        else:
            print('Advanced Testpoint ' + str(i) + ' Failed!')
        cleanSh()
    print('Your Advanced Test Score is', sum / 5 * 2)
    return sum / 5 * 2

def run_Complex_Case(id):
    for i in range(1, 11):
        os.system('timeout ' + str(time_Limit) + 's ' + './code < Data/ComplexDataSet/testcase' + str(id) + '/' + str(i) + '.in > output.txt 2>/dev/null')
        if not filecmp.cmp('Data/ComplexDataSet/testcase' + str(id) + '/' + str(i) + '.out', 'output.txt'):
            return 0
    return 1

def run_Complex():
    print('Running Complex Test')
    sum = 0
    for i in range(1, 6):
        if run_Complex_Case(i):
            print('Complex Testpoint ' + str(i) + ' Accepted!')
            sum = sum + 1
        else:
            print('Complex Testpoint ' + str(i) + ' Failed!')
        cleanSh()
    print('Your Complex Test Score is', sum / 5 * 2)
    return sum / 5 * 2

def run_Insider_Case(id):
    for i in range(1, 11):
        os.system('timeout ' + str(time_Limit) + 's ' + './code < Data/InsiderDataSet/testcase' + str(id) + '/' + str(i) + '.in > output.txt 2>/dev/null')
        if not filecmp.cmp('Data/InsiderDataSet/testcase' + str(id) + '/' + str(i) + '.out', 'output.txt'):
            return 0
    return 1

def run_Insider():
    print('Running Insider Test')
    sum = 0
    for i in range(1, 4):
        if run_Insider_Case(i):
            print('Insider Testpoint ' + str(i) + ' Accepted!')
            sum = sum + 1
        else:
            print('Insider Testpoint ' + str(i) + ' Failed!')
        cleanSh()
    print('Your Insider Test Score is', sum / 3 * 2)
    return sum / 3 * 2

def run_Robust_Case(id):
    os.system('timeout ' + str(time_Limit) + 's ' + './code < Data/RobustDataSet/testcase' + str(id) + '.in > output.txt 2>/dev/null')
    return filecmp.cmp('Data/RobustDataSet/testcase' + str(id) + '.out', 'output.txt')

def run_Robust():
    print('Running Robust Test')
    sum = 0
    for i in range(1, 6):
        if run_Robust_Case(i):
            print('Robust Testpoint ' + str(i) + ' Accepted!')
            sum = sum + 1
        else:
            print('Robust Testpoint ' + str(i) + ' Failed!')
        cleanSh()
    print('Your Robust Test Score is', sum / 5 * 2)
    return sum / 5 * 2

print('Input the folder of your program, which should contain an executable \'code\' and a unix-shell script clean.sh')

folder = str(input())
init(folder)

Score = 0

Score += run_Basic()
Score += run_Advanced()
Score += run_Complex()
# Score += run_Insider()
Score += run_Robust()

cleanAll()
print('Your Total Score is', Score)
