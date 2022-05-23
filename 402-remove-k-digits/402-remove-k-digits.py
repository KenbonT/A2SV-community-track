class Solution:
     def removeKdigits(self, num: str, k: int) -> str:
        stack = []
        countK=0
        ans = ''
        stack.append(num[0])
        for i in range(1,len(num)): 
            if(countK<k):
                if(num[i]>=stack[-1]):
                    stack.append(num[i])
                else:
                    while(len(stack)!=0 and num[i]<stack[-1] and countK<k):
                        stack.pop()
                        countK+=1
                    stack.append(num[i])
                    
            else:
                stack.append(num[i])
        while(countK<k):
            stack.pop()
            countK+=1
           
        if(stack):
            return str(int(''.join(stack)))
        else:
            return "0"
        # return  str(int("0" if not ''.join(stack) else ''.join(stack) ))
#         stack =[]
#         stack.append(num[0])
#         countK=0
#         for i in range(1,len(num)):
#             x=True
#             if(k>countK):
#                 while(x and countK<k):     
#                     if(len(stack)!=0):
#                         if(stack[-1]<num[i]):
#                             stack.append(num[i])
#                             x=False
#                         else:
#                             stack.pop()
#                             countK+=1
#             else:
#                 stack.append(num[i])
#         while(countK<k):
#             stack.pop()
#             countK+=1
            
#         if(stack):
#             return ''.join(stack)
#         else:
#             return "0"
                
    
    