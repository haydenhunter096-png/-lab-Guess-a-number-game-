# Lab: Guess a Number Game

## Algorithm

1. **Start the program.**  


2. **Ask the user for their name** and store it in a string.  


3. **Generate a random number** between 1 and 100.  


4. **Initialize variables:**  
   - `turns` = 0  
   - `guess` = 0  


5. **Game loop:** Repeat while `guess` is not equal to the random number:  
   a. Ask the user to guess a number.  
   b. Read the user's input into `guess`.  
   c. Increment `turns` by 1.  
   d. Give feedback:  
      - If `guess` > random number → print `"Too high"`  
      - Else if `guess` < random number → print `"Too low"`  
      - Else → print `"You got it!"` 


6. **After the loop ends:**  
   - Print the total number of turns.  
   - Print performance feedback based on the number of turns:  
     - `turns` < 7 → `"Very good performance"`  
     - `turns` = 7 → `"Average performance"`  
     - `turns` > 7 → `"Poor performance"` 
     
      
7. **End the program.**
