Not sure if this is a great solution or not.

Maintain a single "master" stack. 

Pushing into our queue is a simple push onto this stack.

When popping from the queue:  
Create a second temporary stack  
Pop every item from the master stack into this temp stack except the last one  
Return this last item  
Pop every item from the temp stack back into the master stack
