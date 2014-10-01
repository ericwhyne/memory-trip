memory-trip
===========

Experiments in munging and reading the memory of running linux processes.


Demonstration 1:
This will demonstrate a way to tripwire a binary and monitor it's memory for signs of tampering. This first method involves inserting benign variables near the declarations of program variables and ensuring their state remains unchanged during execution of the program.

To run this demo, first compile the tripwired binary. This binary contains an exploitable buffer overflow but also contains tripwires as described above. 
```make tripwired```
The binary will be compiled to ./bin/tripwired. Before moving on, run this binary by typing this:
```./bin/tripwired```
Now, in a separate terminal window, start demo1.sh. This script will monitor the tripwire in the program we just compiled and ran for tampering. The script will need root access to view the program's memory so you'll be asked for your sudo password.
```./demo1.sh```
Go back to the terminal window where tripwired is running. You're prompted to enter in a string value. This value will be copied to a small buffer after you print enter. When the string you enter is long enough (27 characters or so) the buffer will be over-run. This will trigger the monitoring program in the other terminal window to note the tampering.

