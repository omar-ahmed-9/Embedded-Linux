## Write a Program To count number 4 in list ##
nums = [1,2,3 , 4 ,4 , 4]

def calc(*nums):
    sum = 0
    for i in nums:
        if i == 4:
            sum+=4
    return sum

print(calc(*nums))