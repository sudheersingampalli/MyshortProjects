'''
program to reverse, sort a stack using recursion
Author : Sudheer Singampalli
'''
def createStack(ls,stack):
    for i in ls:
        push(i,stack)
    return stack

def push(i, stack):
    stack.append(i)
    return stack

def top():
    ele = stack[-1]
    return ele

def pop():
    ele = stack[-1]
    del stack[-1]
    return ele

def sortstack(stack):
    if len(stack) > 0:
        temp = pop()
        sortstack(stack)
        insertPos(stack, temp)
    return stack          
    

def insertPos(stack, ele):
    if len(stack)==0 or ele > top():
        push(ele, stack)
    else:
        temp = pop()
        insertPos(stack, ele)
        push(temp, stack)

def popStack(stack):
    if len(stack) > 0:
        temp = pop()
        popStack(stack)
        reverseStack(stack,temp)

def reverseStack(stack, ele):
    if len(stack) == 0:
        push(ele)
    else:
        temp = pop()
        reverseStack(stack, pop())
        push(temp, stack)

if __name__ == '__main__':
    ele = [30, -5, 18, 14, -3]
    stack = createStack(ele,[])
    print(stack)
    # print('item deleted is ', pop())
    # print(stack)
    # print('item deleted is ', pop())
    # print(stack)
    print('sorted stack = ', sortstack(stack))
