name = input("Type a name: ")
print(name)
place = input("Type a place: ")
print(place) 
verb = input("Type a verb: ")
print(verb)
noun = input("Type a noun: ")
print(noun) 
sentence = input(name)
print(sentence, " went to the ")
sentence = (sentence, place)
print(sentence, " where they ")
sentence = (sentence, verb)
print(sentence, " and bought a") 
sentence = (sentence, noun)
print(sentence, ".\n")
print(sentence)
print("%s went to the %s and bought a %s name, place, verb, noun")
print("%s went to the %s where he %s and bought a %s.", name, place, verb, noun)