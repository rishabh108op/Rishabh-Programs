# class Student:
# school_name=
    
# create a class employee which has instant variables employee id 
# organisation designation
# if designation of the employee is manager make his status as special
class Employee:
        count=0
        def __init__(self, name, desig, salary):
            self.name=name
            self.desig=desig
            self.salary=salary
            Employee.count+=1
        def displayCount(self):
            print("There are %d employees" % Employee.count)
        def displayDetails(self):
            print("Name:", self.name, ", Designation:", self.desig, ", Salary:", self.salary)
e1=Employee("Ritesh", "Manager", 6456465)
e2=Employee("Saksham", "Team Leader", 600000)
e3=Employee("Shubhangam", "Programmer", 690000)
e4=Employee("Sameer", "Assistant", )
e4.displayCount()
print("Details of all employee:")
e1.displayDetails()
e2.displayDetails()
e3.displayDetails()
e4.displayDetails()
