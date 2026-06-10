# Undo/Redo String Manager in C++

A lightweight, efficient C++ class that manages string values with built-in **Undo** and **Redo** functionalities. This project utilizes the **Stack** data structure (`std::stack`) to track state history, demonstrating clean object-oriented programming (OOP) principles and low-level property encapsulation.

---

## 🚀 Key Features

* **State History Management:** Implements seamless Undo and Redo operations using memory-efficient stacks.
* **C++ Property Extensions:** Utilizes Microsoft-specific `__declspec(property)` to provide clean, high-level syntax for setting and getting values (mimicking properties in C# or Python).
* **Robust Boundaries:** Built-in validation checks (`_Undo.empty()` and `_Redo.empty()`) to prevent runtime stack underflow errors.

---

## 🛠️ How It Works (Under the Hood)

The class maintains two stacks and a standard string variable:
1. `_value`: Holds the current active state of the string.
2. `_Undo Stack`: Stores previous states. When you update the value, the old state is pushed here.
3. `_Redo Stack`: Stores states that were bypassed via an Undo operation, allowing you to move forward in history again.



### Operational Workflow:
* **`set()` / Property Assignment:** Pushes the current `_value` to the `_Undo` stack, then overwrites `_value` with the new data.
* **`Undo()`:** Takes the current `_value`, pushes it onto the `_Redo` stack to save it for later, then rolls `_value` back to the top item of the `_Undo` stack.
* **`Redo()`:** Pushes the current `_value` back into `_Undo`, then restores the top item from the `_Redo` stack.

---

## 💻 Code Overview & Usage

### Property Syntax Benefit
Thanks to the property declaration, instead of writing verbose getter and setter methods, you can interact with the class object as if it were a native variable:

```cpp
clsMyString myStr;

// Using the custom property extension
myStr.value = "Hello";   // Automatically triggers set()
cout << myStr.value;     // Automatically triggers get()
