price=input('How much did you pay?')

price=float(price)

if price >= 1.00:
    tax = .07
else:
    tax = 0.00
print('Tax rate is ' + str(tax))

country=input('Enter your home country name :')
if country.lower() == 'india' :
    print("You're from India")
else:
    print("You're not from India")