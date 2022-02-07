import random  
rand_list = []  # Declare a array to store random numbers 
for i in range(0,10):  
    n = random.randint(1,50)  # Generate a random number.
    rand_list.append(n)  # store the random number to the array.
print(rand_list)  
