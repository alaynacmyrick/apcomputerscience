import os
os.system("cls")
print("")
print("")
print("\033[92m\033[1mType one thing at a time otherwise it will show up as multiple foods as one.\033[0m")
numOfPeople = {}
def split(word):
  return [char for char in word]
def nospace(string):
  return string.replace(" ","")
def foods():
  while True:
    print("")
    print("Type\033[92m\033[1m no more \033[0m\033[0m to exit the loop or continue to type names of food.")
    food = str(input("Name of food:"))
    letters = split(food)
    num = len(letters)
    n = 0
    while n < num:
      letters[n] = letters[n].lower()
      n+=1
    word = "".join(letters)
    word = nospace(word)
    if word == "nomore":
      break
    else:
      numOfPeople[word] = []
def people():
  while True:
    print("")
    person = str(input("Person's name:"))
    letters = split(person)
    num = len(person)
    n = 1
    while n < num:
      letters[n] = letters[n].lower()
      n+=1 
    word = "".join(letters)
    word = nospace(word)
    if word == "nomore":
      break
    else:
      like = str(input(person+"'s favorite food:"))
      k = 0
      while k < len(numOfPeople):
        try:
          if like == numOfPeople[k]:
            numOfPeople[k].append(person)
            break
        except:
          k += 1
      if k == len(numOfPeople):
        print("That food isn't on the menu.")
        people()
foods()
people()
for x in range(len(numOfPeople)):
  numbers = [int(len(numOfPeople[x]))]
mostPopular = numbers.index(max(numbers))
cow = []
for x in range(len(numOfPeople)):
  if 0 in numbers:
    leastPopular = []
    e = 0
    while e < numbers.count(0):
      unpopular = numbers.index(0)
      while x <= len(list(numOfPeople)) - 1:
        cow.append(list(numOfPeople)[x])
        if x + 1 == len(list(numOfPeople)):
          cow.append(" ,and ")
          cow.append(list(numOfPeople)[-1])
          break
        else:
          cow.append(", ")
          x += 1
      leastPopular.append(unpopular)
print(cow)