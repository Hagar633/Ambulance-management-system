# 🚑 Hospital (Ambulance) Management System – C++

November 2024

A C++–based hospital and ambulance management system that simulates patient registration, prioritization, and emergency transport allocation using core data structures such as queues, priority queues, and stacks.

This project focuses on efficient emergency handling, resource management, and robustness in failure scenarios.

---

##  Features

- Patient Management
  - Register patients using queues
  - Handle different patient priorities (emergency vs normal)
  - Cancel or update patient requests

- Ambulance & Vehicle Management
  - Assign ambulances based on availability and priority
  - Handle vehicle breakdowns and unavailability
  - Dynamic reallocation when failures occur

- Data Structures Used
  - Linked Queues
  - Priority Queues
  - Nodes and Abstract Data Types (ADT)
  - Stack/Queue-based scheduling logic

- Robust Error Handling
  - Detects unavailable or failed vehicles
  - Ensures patients are not lost during reassignment
  - Handles empty queues and invalid operations safely

- User Interface (Console-Based)
  - Menu-driven interaction
  - Clear status updates for hospitals, cars, and patients

---

##  Project Structure

Ambulance-Management-System/
│
├── Header Files/
│   ├── Car.h
│   ├── Hospital.h
│   ├── Patient.h
│   ├── Organizer.h
│   ├── UI.h
│   ├── QueueADT.h
│   ├── LinkedQueue.h
│   ├── priQueue.h
│   ├── Node.h
│   ├── priNode.h
│   └── CancelQueue.h
│
├── Source Files/
│   ├── Ambulance Management System.cpp
│   ├── Car.cpp
│   ├── Hospital.cpp
│   ├── Patient.cpp
│   ├── Organizer.cpp
│   ├── UI.cpp
│   └── CancelQueue.cpp
│
└── README.md

---

##  Technologies Used

- Language: C++
- Concepts:
  - Object-Oriented Programming (OOP)
  - Queues & Priority Queues
  - Memory Management
  - Error Handling

---

## How to Run

1. Clone the repository:
   git clone https://github.com/Hagar633/ambulance-management-system.git

2. Open the project in Visual Studio or any C++ IDE.

3. Build and run:
   Ambulance Management System.cpp



---

## 👤 Author

Hagar Atallah  
C++ | Data Structures | Systems Design
