'''
Reverse the words in a string

I/P: Hi my name is sudheer
O/P: iH ym eman si reehdus
'''


def reverseWords(str):
    s = str.split(' ')
    print(s)
    
    for i in range(len(s)):
        s[i] = s[i][::-1]
    
    s =' '.join(s)
    print(s)
    
reverseWords('Hi my name is sudheer')