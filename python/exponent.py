
def raise_to_power(base,pow):
   result=1
   for index in range(pow):
    result=result*base
   return result
print(raise_to_power(2,3))
