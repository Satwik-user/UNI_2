def prec(c):
    if c=='^':
        return 3
    elif c=='*' or c=='/':
        return 2
    elif c=='+' or c=='-':
        return 1
    else:
        return -1
    
def isRightAssociative(c):
    return c=='^'

def infixToPostfix(exp):
    len=len(exp)
    res=[]
    stack=[]
    for i in range(len):
        c=exp[i]
        
        #operands
        if c.isalnum():
            res.append(c)

        #opening parenthesis
        elif c=='(':
            stack.append(c)

        elif c==')':
            while stack and c!='(':
                res.append(stack.pop())
            if stack:
                stack.pop()