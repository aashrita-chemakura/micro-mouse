# Micro Mouse Project

## Overview
This project is part of the ENPM809Y: Introductory Robot Programming course at the University of Maryland, College Park. The primary goal is to implement a "wall following" algorithm to navigate a robot through a maze to a goal adjacent to one of the outer walls. 
-**Note:**  The detailed instructions on how to run the project is given in the file [README Pdf](readme.pdf)
## Installation

### Cloning the Repository
To clone the repository and start working on the project, use:
```bash
git clone https://github.com/aashrita-chemakura/micro-mouse.git
```
### Setting Up the Simulator
The project relies on a third-party simulator which can be installed as follows:
1. Clone the simulator repository:
```bash
git clone https://github.com/mackorone/mms.git
```
2. Install QT:
- [Install QT](https://www.qt.io/download-qt-installer)
- Navigate to the simulator directory and build:
```bash
cd mms/src
qmake && make
```
## Usage
### Running the Simulator
After building the simulator, you can run it using:
```bash
./mms/bin/mms
```
Configure the simulator with your project specifics by following the on-screen instructions to load maze files and set up the robot configurations.

### Executing the Wall Following Algorithm
1. Compile your project using the provided makefile:
```bash
make
```
2. Run your application:
```bash
./main
```
## Configuation
Make sure to configure the simulator to use the mazes from the `mazefiles/classic` directory and set the appropriate parameters for the wall following algorithms.

## Documentation

### Generating Documentation
This project uses Doxygen for generating documentation from annotated source code. This helps maintain an up-to-date reference for developers and ensures that all parts of the code are adequately explained. To generate the documentation:

1. Ensure Doxygen is installed on your system. If not, download and install it from [Doxygen](http://www.doxygen.nl/download.html).
2. Navigate to the project root directory where the `Doxyfile` is located.
3. Run the following command:
   ```bash
   doxygen Doxyfile
   ```
   This command will generate a `docs` directory with HTML and LaTeX formats based on your source code annotations.
### Accessing Generated Documentation
After generating the documentation, you can access the HTML version by opening the `index.html` file located in the `docs/html` directory in any web browser.
