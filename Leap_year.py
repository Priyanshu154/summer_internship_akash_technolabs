def is_leap(y):
  if((y % 400 == 0) or
     (y % 100 != 0) and
     (y % 4 == 0)):
    return True;
  else:
    return False;
 
year = 2020;
print(is_leap(year));