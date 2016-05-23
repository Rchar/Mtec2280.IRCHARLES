import random

state = 0
clues = 0
# command = input("")
# print("")
    # if (command == "exit"):
    #     break

while (True):
    if(state == 0):
        print("You are a detective.")
        print("Investigating a missing persons report.")
        print("it is said that this  could be tied in with a suspected trafficing case that started a few years back.")
        print("you find out there is a local shelter near by decide to check it out")
    
        command = input("where do you want to go? ")
        if (command == "shelter"):
            print ("I think I'll start there.. ")
            state = 1
        elif (command == "exit"):
            break
        else:
            print ("I should go to the shelter first")
            state = 1 
            
    if (state == 1):
        print("You come to a building that has been used sort of as a shelter for abandonded and homeless children")
        print("you figure this would be a good first stop to find out more information as to her whereabouts")
        print("hmm.. where should I start?")
        state = 11

    if (state == 11):
        command = input("investigate, think for a minute, go inside ")
        
        if(command == "investigate"):
            print ("you decide to take a look around..")
           
            subcommand = input("search or return ") 
            if (subcommand == "search" or subcommand == "2"):
                print("you take a walk around the building and notice a truck in the back.")
                print("it has out of state plates and  all the rear windows are painted over.")
                print("you head back to the front and decide to go inside.")
                clues += 1
                state = 11
            else:
                print("you walk back to entrance.")
                command = input("investigate, think for a minute, go inside ")
        if(command == "think for a min"):
            print("you stand outside for a bit looking through some notes.")
            print("the mother of the missing persons said that her daughter was planning on leaving town someday.")
            print("of course she didnt have any income or a job because she was only 16.")
            print("a man named Hue was also mentioned as one of her friends that she would usually hang out with.")
            clues += 1
        if (command == "go inside"):  
            state =2  

    if(state == 2):
        print("as you look around, you notice they're all looking at you strange.")
        print("you see that none of the children are above the age of 18 here  it seems like they're all waiting for something")
        print("you come across a group standing in the middle of the hallway, maybe they might know somethingmore about this girl youre looking for.")
        state == 21
    if(state == 21):
        command = input("talk with group of kids or go through the back of the room ")
        if (command == "talk to group"):
            

            state == 22


        if (command == "go to the back"):

            state == 23

    if (state = 22):
        print("You ask the group a few questions and show a photo of the girl.")
        print("you find out the girl was here recently but she hasn't been around in the last few days.")
        print("you asked about someone named Hue and it seems he was seen with her as well.")

    if (state = 23):
        print("you decide to go the back and see if you can find any one else that might know where something about this girl.")
        print(" you see a boy playing his game in the corner. he doesn't pay you any mind as you walk into the room.")
        print(" you show him the photo and asked if hes seen this girl but he continues to play his game.")
        print(" it seems he has lost so he's annoyed. He tells you he doesnt know where this girl is but that she was here recently, he figures that  ")



        # if(state == 4):
        # command = input("")
        # print("")
        # if(state == 5):