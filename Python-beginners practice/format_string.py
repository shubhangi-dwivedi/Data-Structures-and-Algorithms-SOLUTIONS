first_name=input('First name : ')
last_name=input('Last name : ')
output1= 'Hello, '+first_name+' '+last_name
print(output1)
output2='Hello, {} {}'.format(first_name, last_name)
print(output2)
output3='Hello, {1} {0}'.format(first_name, last_name)
print(output3)
output4=f'Hello, {first_name} {last_name}'
print(output4)