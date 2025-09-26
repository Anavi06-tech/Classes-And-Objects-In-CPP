---

📘 Classes and Objects in C++


---

🎯 Aim

To study and implement classes and objects in C++, understand the difference between inside and outside class definitions, and explore the role of public and private access specifiers in encapsulation.


---

📚 Theory

In C++, classes and objects are the foundation of Object-Oriented Programming (OOP).

Class → Blueprint that defines data members (variables) and member functions (methods).

Object → Instance of a class that holds actual values.


🏗️ Class

Defines data members and functions.

Uses access specifiers:

public → accessible outside the class.

private → accessible only inside the class.


Supports encapsulation (data hiding).


🧑‍🤝‍🧑 Object

Created from a class.

Each object has its own copy of class variables.

Example: If Car is a class, then Car c1; is an object.


📝 Function Definitions

Inside the class → function body is written within the class definition.

Outside the class → function is declared inside, but defined outside using :: (scope resolution operator).



---

📊 Comparison Table

⚙️ Feature	🏗️ Class	🧑‍🤝‍🧑 Object

Definition	Blueprint or template	Instance of a class
What it contains	Data members + functions	Real values and behavior
Memory Allocation	No memory allocated	Memory allocated when object is created
Example	class Student {…};	Student s1;
Purpose	Defines structure	Works with real data



---

🖼️ Visual Representation

📌 Class → Object Relationship

Class: Design of a house.

Object: Actual house built from that design.


(Diagram/flowchart can be drawn in record to show blueprint → object relationship)


---

📋 Algorithms

🔹 Cube Volume (Outside Class Definition)

1. Start


2. Define a class Cube with private data: side, volume.


3. Declare public functions: input(), calculateVolume(), and output().


4. In input() → read side value.


5. In calculateVolume() → compute volume = side³.


6. In output() → display volume.


7. In main() → create object c2 and call all functions.


8. End




---

🔹 Cuboid Volume (Inside Class Definition)

1. Start


2. Define a class Cuboid with members: length, breadth, height, volume.


3. In input() → read dimensions.


4. In Volume() → compute volume = length × breadth × height.


5. In Output() → display volume.


6. In main() → create object v1 and call all functions.


7. End




---

🔹 Reverse Array (Outside Class)

1. Start


2. Define a class ArrayOps with function reverseArray().


3. In reverseArray() → print array elements in reverse order.


4. In main() → declare array, create object, and call function.


5. End




---

🔹 Simple Calculator

1. Start


2. Define class Calculator with members: num1, num2.


3. Functions:

add() → num1 + num2

subtract() → num1 – num2

multiply() → num1 × num2

divide() → check if num2 ≠ 0, else error message



4. In main() → create object, take inputs, and call functions.


5. End




---

🔹 Student Details

1. Start


2. Define class Student with members: name, branch, subject, year, result.


3. In main() → create multiple objects (S1, S2, S3).


4. Assign and display details of each student.


5. End




---

🧠 Conclusion

This experiment highlights the importance of Classes and Objects in C++.

🏗️ Class → Defines structure and behavior.

🧑‍🤝‍🧑 Object → Real-world entity holding data and functions.

✅ Key Insights:

Inside-class methods → simple and compact.

Outside-class methods → organized and modular.

Classes and objects enable encapsulation, reusability, abstraction, and real-world modeling in programming.

