day = int(input("Enter weekday number (1-7): "))


match day:
    case 1:
        print("Monday")
    case 2:
        print("Tuesday")
    case 3:
        print("Wednesday")
    case 4:
        print("Thursday")
    case 5:
        print("Friday")
    case 6:
        print("Saturday")
    case 7:
        print("Sunday")
    case _:
        print("Invalid day number")

# switch case is not available in python
# we can use match case in python 3.10 and above

match day:
    case 1 | 2 | 3 | 4 | 5:
        print("Weekday")
    case 6 | 7:
        print("Weekend")
    case _:
        print("Invalid day number")

#guarded patterns

match day:
    case d if 1 <= d <= 5:
        print("Weekday")
    case d if d == 6 or d == 7: 
        print("Weekend")
    case _:
        print("Invalid day number")