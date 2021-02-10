#imports
import random as r

#gets initials of person
letters = ["A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z",]
def who():
  name = input("Whats ur initials?\n")
  if len(name) > 2 or isNum(name):
    print("It has to be letter initials.")
    who()
  printOutput(name)
#returns output
def printOutput(name):
  initials = []
  x = 0
  while x<2:
    y = r.randint(0,25)
    initials.append(letters[y])
    x += 1
  initials = "".join(initials)
  print("         **          **")
  print("      **   **      **    **")
  print("      **     **   **       **")
  print(".    **         *         **")
  print(".     **      "+name+"+"+initials+"      **")
  print("        **            **")
  print("           **       **")
  print("               **")

#checks whether input is number
def isNum(num):
  try:
    float(num)
    return True
  except:
    return False

who()