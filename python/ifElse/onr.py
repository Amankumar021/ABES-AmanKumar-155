a,b =10,20


# if a > b:
#     print("a is greater than b")    
# elif a == b:
#     print("a is equal to b")    
# else:
#     print("a is less than b")       



# if a>b:
#     print("a is greater than b")
# elif a==b:
#     print("a  and b are equal")
# else:
#     print("a is less than b")

attendance = int(input("Enter your attendence:"))
marks =  int(input("Enter your marks:"))

if attendance >= 90:  
    print("obtained 10 marks")
elif 80<= attendance < 90:
    print("obtained 9 marks")
elif  75 <= attendance < 80:
    print("obtained 7 marks")
else:
    print("detained")



if attendance >=75:
    if marks >= 90:
        print("Grade A")
    elif 80 <= marks < 90:
        print("Grade B")
    elif 70 <= marks < 80:
        print("Grade C")
    else:
        print("Grade D")

