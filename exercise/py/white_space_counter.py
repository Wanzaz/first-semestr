# return space count
def check_space(test_string):
    return test_string.count(" ")

test_string = input("Enter: ")
print(f"Number of Spaces: {check_space(test_string)}")
