# Lab: Guess a Number Game

## Algorithm

```
main():
Start the program.  


 Ask the user for their name** and store it in a string.  

 Generate a random number** between 1 and 100.  

 Initialize variables:
    `turns` = 0  
    `guess` = 0  

 Game loop: Repeat while `guess` is not equal to the random number:  
    Ask the user to guess a number.  
    Read the user's input into `guess`.  
    Increment `turns` by 1.  
    Give feedback:  
      - If `guess` > random number = print `"Too high"`  
      - Else if `guess` < random number = print `"Too low"`  
      - Else = print `"You got it!"` 

 After the loop ends:
   - Print the total number of turns.  
   - Print performance feedback based on the number of turns:  
     - `turns` < 7 =  "Very good performance"`  
     - `turns` = 7 = `"Average performance"`  
     - `turns` > 7 = `"Poor performance"` 
     
      
End the program.
```