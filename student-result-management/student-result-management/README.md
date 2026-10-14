# Student Result Management System

A programming assignment on **arrays**: store the marks of several students in an array, then calculate the total, average, highest and lowest marks and decide Pass or Fail for each student.

## Real-world applications of arrays

| Application | How arrays are used |
|---|---|
| Student records | Marks, attendance and fees for a class, processed together |
| Weather and sensor logs | Hourly readings stored in order to find highs, lows and trends |
| Images and video | A picture is a grid of pixel values |
| Audio | Thousands of samples per second stored in sequence |
| Spreadsheets and tables | Rows and columns map to a 2D array |
| Games and boards | The state of every square or inventory slot |

## Why arrays are necessary

- **One name, many values:** `marks[5]` replaces five separate variables and scales to hundreds.
- **Fast access by index:** elements sit side by side in memory, so `marks[3]` is found directly.
- **Loops fit naturally:** one `for` loop can total, compare and print every element.
- **Predictable memory:** the size is fixed up front, so storage is compact.

## Chosen application

**Student Result Management System.** Marks of 5 students are stored in one integer array, validated (whole numbers 0-100), then processed to give total, average, highest, lowest, and Pass (50 or above) or Fail for each student.

## Project structure

```
cpp/student_result_management.cpp   Original C++ program (unchanged)
python/student_results.py           Same logic in Python
javascript/student_results.js       Same logic in Node.js
java/StudentResults.java            Same logic in Java
web/showcase.html                   Interactive page: assignment write-up, live demo, code tabs
web/index.html                      Full web app: gradebook, ranking, report cards
```

## How to run

```bash
# C++
g++ cpp/student_result_management.cpp -o results && ./results

# Python
python3 python/student_results.py

# JavaScript (Node.js 18+)
node javascript/student_results.js

# Java
javac java/StudentResults.java && java -cp java StudentResults
```

For the web pages, open `web/showcase.html` or `web/index.html` in a browser. No install needed. The web app saves data in the browser's local storage only.

## Publish the web pages with GitHub Pages (optional)

In the repository on GitHub: Settings > Pages > deploy from the `main` branch. The pages will be at `/web/showcase.html` and `/web/index.html`.
