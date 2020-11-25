for i in range(1000,10000):

    switcher = True
    number = i
    divider = 1

    for j in range(3):
        divider *= 10
        number = i//divider
        digit = (i//(divider/10))%10

        while number>0 and switcher:
            if number % 10 == digit:
                switcher = False
            else:
                number = number//10
    
    if switcher:
        print(i)