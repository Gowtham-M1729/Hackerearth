import decimal
a = decimal.Decimal('1234')
b = decimal.Decimal('12345')
decimal.getcontext().prec = 210
print(a/b)
