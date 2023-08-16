"""
This program is used to compare the time of execution of different functions
The functions whose execution time you want to compare must be passed as 
parameters to the calculate_time function
"""

import timeit

# ============== Functions that compare ==============
def calculate_time(*functions):
    times = []
    for function in functions:
        time_one_rep = timeit.timeit(stmt=function, number=1)
        time = timeit.timeit(stmt=function, number=1000000)

        print('1 rep   of', function.__name__, ':', time_one_rep)
        print('1 M rep of', function.__name__, ':', time)
        times.append({'time': time, 'name': function.__name__})
        print()
    return times


def print_data(times):
    tam = len(times)
    for i in range(tam):
        for j in range(tam):
            if i == j:
                continue
            calculus = times[i]["time"] / times[j]["time"]
            print(f'{times[i]["name"]} takes {calculus:>7.2%} of the time of {times[j]["name"]}')
        if i < tam - 1:
            print()
# ====================================================

# =============== Functions to compare ===============
def f1():
    ...

def f2():
    ...
    
def f3():
    ...
# ====================================================

if __name__ == '__main__':
    # add the functions to compare as parameters of calculate_time
    times = calculate_time(f1, f2, f3)
    print_data(times)

