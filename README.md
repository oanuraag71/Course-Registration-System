# Course-Registration-System

## Overview
An academic course registration system built in **C++** using **Object-Oriented Programming (OOP)** principles. This system enables students to authenticate, view available courses, register for courses, and manage their course registrations while handling time conflicts.

## Features
✅ **Student Authentication** - Secure login with ID and password  
✅ **Course Management** - View all available courses with details  
✅ **Course Registration** - Register for courses with automatic conflict detection  
✅ **Time Conflict Detection** - Prevents registration if course times overlap  
✅ **Drop Course** - Remove previously registered courses  
✅ **File I/O** - Persistent data storage using file handling  
✅ **OOP Architecture** - Well-structured classes (Student, Course, RegistrationSystem)  

## Technical Details

### Data Structures
- **Student Class**: Stores student ID and password
- **Course Class**: Contains course code, name, and time slot
- **RegistrationSystem Class**: Main system managing authentication, registration, and file I/O

### Algorithms
- **Time Conflict Detection**: O(n²) comparison of registered courses to detect overlapping schedules
- **String Parsing**: Uses stringstream for parsing course data from files
- **File Handling**: Binary and text file I/O for persistent storage

### Files Used
- `courses.txt` - Available courses (code, name, time)
- `students.txt` - Student credentials (ID, password)
- `registrations.txt` - Student course registrations

## Project Structure
```
├── main.cpp                 # Entry point
├── RegistrationSystem.h      # Main system header
├── RegistrationSystem.cpp    # System implementation
├── Course.h                 # Course class
├── Course.cpp               # Course implementation
├── Student.h                # Student class
├── Student.cpp              # Student implementation
└── README.md                # Documentation
```

## Usage

### Compilation
```bash
g++ -o registration main.cpp RegistrationSystem.cpp Course.cpp Student.cpp
```

### Running
```bash
./registration
```

### Sample Credentials
```
Student ID: S001
Password: pass123
```

## Core Functionalities

### 1. Login
- Validates student credentials against `students.txt`
- Prevents unauthorized access

### 2. View Courses
- Displays all available courses with code, name, and time slot
- Loads from `courses.txt`

### 3. Register for Course
- Adds course to student's registration
- Checks for time conflicts
- Prevents duplicate registrations
- Updates `registrations.txt`

### 4. Drop Course
- Removes course from student's registration
- Updates file immediately

### 5. View My Courses
- Shows student's currently registered courses
- Loads from `registrations.txt`

## Key Improvements Made
- ✅ Added comprehensive header guards (#ifndef)
- ✅ Proper include statements for all dependencies
- ✅ Better organized class hierarchy
- ✅ Improved error handling
- ✅ Enhanced documentation and comments

## Learning Outcomes
- Object-Oriented Programming in C++
- File I/O operations and data persistence
- Time complexity analysis (O(n²) conflict detection)
- String parsing and manipulation
- Class design and encapsulation

## Future Enhancements
- Database integration instead of text files
- GUI implementation using Qt or wxWidgets
- Course prerequisites validation
- Batch registration for multiple courses
- Grade management system
- Enrollment limits per course

## Author
**Anuraag Oruganti**  
B.Tech CSE, 2nd Year  
Interested in Full-Stack Development & AI/ML

## License
This project is provided as-is for educational purposes.
