program inclass_F2 

implicit none 
integer :: a,b,c
character(26) :: name
real, parameter :: pi = 3.1415926535 
real :: Vs, Vc, d

print*, 'What''s your name?' 

read*,name 

print*, 'What''s your numbers?'

read*,a
read*,b
read*,c 

print*, 'Hello ', name
Vs = (4.0/3)*pi*a**3
Vc = a*b*c
d = Vc/7 
d = int(d)

print*, 'The Volume of your Sphere is: ', Vs 
print*, 'The Volume of your Cube is: ', Vc 
print*, 'The Value of d is: ', d

end program inclass_F2

 
