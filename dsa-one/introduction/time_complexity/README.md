# Time complexity and Big O notation
### What is time complexity?
Time complexity is the study to the efficiency of algorithms.
<p>How time taken to execute an algorithm grows with the size of the input</p>

### A real world example of time complexity
 Sending GTA 5 to a friend<br>
Let us say you have a friend living 5 km away from your place. You want to send him a game.
Final exams are over and you want him to get this 60 GB file from you. How will you send it to him?
Note that both of you are using JIO 4G with a 1 Gb/day data limit.<br>
The best way to send him the game is by delivering it to his house. Copy the game to a hard-disk and send
it.<br>
Will you do the same for sending the game like minesweeper which is in KBS of size? No, because you can
easily send it via the internet.<br>
As the file size grows, time taken by online sending increases linearly – O(n’)<br>
As the file size grows, time taken by physical sending remains constant. O(n0) or O(1). <br>


### Calculating Order in terms of Input Size:
In order to calculate the order, the most impactful term containing n is taken into account. (Here n refers to
Size of input)<br>
Let us assume that formula of an algorithm in terms of input size n looks like this: 
<img src="order.png">
<br>
Note that these are the formulas for the time taken by them.<br>

### Visualizing Big O:
If we were to plot O(1) and O(n) on a graph, they will look something like this: 
<img src="graph.png">
<br>
<br>
<img src="https://i.stack.imgur.com/ZEmZ6.png">