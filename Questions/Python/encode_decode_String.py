x=input("enter the string to encode - ")
def encode(x):
    a=""
    for i in x:
        if i.isalpha():
            a=a+str(ord(i)-96)
        else:
            a=a+i
    return a
def decode(x):
    a=""
    i=0
    while i<len(x):
        if x[i].isalpha():
            a=a+x[i]
            i+=1
        else:
            num=""
            while i<len(x) and x[i].isdigit():
                num=num+x[i]
                i+=1
            a=a+chr(int(num)+96)
    return a
encoded_string=encode(x)
print("Encoded string: ",encoded_string)
decoded_string=decode(encoded_string)
print("Decoded string: ",decoded_string)