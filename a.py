class Vehicle:
 def __init__(self,mileage,price):
  self.mileage=mileage
  self.price=price
 def show(self):
  print(self.mileage,self.price)
class Car(Vehicle):
 def __init__(self,store_ownership_cost,warranty,seating,fuel_type):
  self.store_ownership_cost=store_ownership_cost
  self.warranty=warranty
  self.seating=seating
  self.fuel_type=fuel_type
 def show_all(self):
  print(self.store_ownership_cost,self.warranty,self.seating,self.fuel_type)
class Bike(Vehicle):
 def __init__(self,cylinders,gears,cooling_type,wheel_type,fuel_tank_size):
  self.cylinders=cylinders
  self.gears=gears
  self.cooling_type=cooling_type
  self.wheel_type=wheel_type
  self.fuel_tank_size=fuel_tank_size
 def show_all(self):
  print(self.cylinders,self.gears,self.cooling_type,self.wheel_type,self.fuel_tank_size)

class Audi(Car):
 def __init__(self,price,mileage,store_ownership_cost,warranty,seating,fuel_type,model_type):
  Car.__init__(self,store_ownership_cost,warranty,seating,fuel_type)
  Vehicle.__init__(self,price,mileage)
  self.model_type=model_type
 def model(self):
  print(self.model_type)
class Ford(Car):
 def __init__(self,price,mileage,store_ownership_cost,warranty,seating,fuel_type,model_type):
  Car.__init__(self,store_ownership_cost,warranty,seating,fuel_type)
  Vehicle.__init__(self,price,mileage)
  self.model_type=model_type
 def model(self):
  print(self.model_type)
class TVS(Bike):
 def __init__(self,price,mileage,cylinders,gears,cooling_type,wheel_type,fuel_tank_size,make_type):
  Bike.__init__(self,cylinders,gears,cooling_type,wheel_type,fuel_tank_size)
  Vehicle.__init__(self,price,mileage)
  self.make_type=make_type
 def make(self):
  print(self.make_type)
class Bajaj(Bike):
 def __init__(self,price,mileage,cylinders,gears,cooling_type,wheel_type,fuel_tank_size,make_type):
  Bike.__init__(self,cylinders,gears,cooling_type,wheel_type,fuel_tank_size)
  Vehicle.__init__(self,price,mileage)
  self.make_type=make_type 
 def make(self):
  print(self.make_type)
 
audi=Audi("Price:50 Lakh","Mileage:25 Km/L","Ownership_Cost:49 Lakh","Warranty:1 Year","Seating:4","Fuel:Diesel","Model:A4")
ford=Ford("Price:25 Lakh","Mileage:18 Km/L","Ownership_Cost:23 Lakh","Warranty:2 Years","Seating:4","Fuel:Petrol","Mode:Mustang")
tvs=TVS("Price:49 K","Mileage:10 Km/L","4 Cylinders","5 Gears","Cooling_Type:Air","Wheel_Type:Alloy","Tank_Size:23 inches","Make:Jupiter")
bajaj=Bajaj("Price:56 K","Mileage:7 Km/L","3 Gylinders","4 Gears","Cooling_Type:Liquid","Wheel_Type:Spokes","Tank_Size:20 inches","Make:Discover")

audi.show_all(),audi.model(),audi.show()
ford.show_all(),ford.model(),ford.show()
tvs.show_all(),tvs.make(),tvs.show()
bajaj.show_all(),bajaj.make(),bajaj.show()

###########################################
