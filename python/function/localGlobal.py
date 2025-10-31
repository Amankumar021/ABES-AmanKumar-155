## locals
glob = "hello world"  # global variable
def greet():
    message = "helllo python"
    print("local :", message)

greet()
# print("global :", message) #   CANT be accessed here as it is local variable
print("global :", glob)  # can be accessed here as it is global variable