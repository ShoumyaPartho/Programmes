#message="This os a message"
#print(message)
#message=message[:5]+"i"+message[6:]
#print(message)

#message.index("h")
#prints: 1

#"Mail" in message
#prints: False

#"YES".lower()
#"no".upper()

#" YES ".strip() : prints "YES"
#" YES ".lstrip() : prints "YES "
#" YES ".rstrip() : prints " YES"

#"Counting e appears in text".count("e")
#prints: 3 : gives how many times given string has appeared

#"Forest".endswith("est")
#prints: True : gives whether the given string ends with specific substring

#"String".isnumeric()
#prints: False
#"123456".isnumeric
#prints: True : gives whether the given string is made up of just numbers

#int("123") + int("456")
#prints: 579 : if a string is made up of only numbers, this function adds them

#" ".join(["This","is","a","string"])
#prints: This is a string : joins the string with space

#"This is a string".split()
#prints: ['This', 'is', 'a' , 'string'] : initially splits by space default

#name="Manny"
#number=len(name)*3
#print("Hello {}, your favourite number is {}".format(name,number))
#print("Hello {name}, your favourite number is {number}".format(name=name,number=number))

##price =10
##priceWithTax=price*.8
##print("Price : ${:.2f}, with tax: ${:.2f}".format(price,priceWithTax))

##def to_celsius(x):
##  return (x-32)*5/9
##
##for x in range(0,101,10):
##  print("{:>3} F = {:>6.2f} C".format(x,to_celsius(x)))


##multiples=[ x*7 for x in range(1,11)]
##print(multiples)

s="This is String"
print(s.upper())













