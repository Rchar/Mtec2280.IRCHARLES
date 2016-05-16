import sys
import random

answer = random.randint(0,100)

#Length of the array of sys.argv
print(len(sys.argv))

//#python guessing.py
//#Length sys.argv =1

//#python guessing.py answer
//#sys.argv is = 2

if(len(sys.argv) > 1):
	if (sys.argv[1] == "answer"):
	print(answer)

	guess = input("what is your guess 0-99?") 


if(answer == int(guess)):
	print("you won")
else:
	print("you lost")
