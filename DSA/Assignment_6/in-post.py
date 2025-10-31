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

        #closing parenthesis
        elif c==')':
            while stack and stack[-1]!='(':
                res.append(stack.pop())
            if stack:
                stack.pop()

        #operator
        else:
            while stack and stack[-1]!='(' and (prec(stack[-1])>prec(c) or (prec(stack[-1])==prec(c) and not isRightAssociative(c))):
                res.append(stack.pop())
            stack.append(c)

    while stack:
        res.append(stack.pop())

    return res

def main():
    exp=input("Enter infix expression:").split()

    print("")