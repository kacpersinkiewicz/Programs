Description:
Simple algorithm that allows to segregate vectors of numerical data (temperature in this case). 
More description are located in test file "tresc zadania.pdf" 

Compile:
Use 'make' command to compile program using Makefile.

Run:
Use command './result.out < stdin.txt' after compile to run version specific for task.

Description of txt file:
The txt file was built in following way:
5 8           
4 2 1 7 3 
3 6 
1 2
2 5
5 5
1 5
1 4
1 5
- first number is number of measurements, second number is number of all children.
- second line defines all measurements that was made by the only child, who done his task completly.
- third and all next lines defines the data of other children. 
first number defines number of changed measurement and second number is the value that is allocated to that measurement. 
