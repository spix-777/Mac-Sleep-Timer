Mac Sleep Timer

Have you ever fallen asleep while watching a movie or TV show on your Mac, only to wake up to a drained battery the next morning? The Sleep Timer program is here to help! It puts your Mac to sleep after a specified number of minutes or hours, saving you energy and helping your battery last longer.

How to Use
Using the Sleep Timer is simple: just specify the number of minutes or hours you want to wait before your Mac goes to sleep. You can do this using the -m and -h flags when running the program.

For example, to put your Mac to sleep after 1 hour and 30 minutes, you would run:

./sleep_timer -m 30 -h 1
That's it! The Sleep Timer will do the rest, and your Mac will go to sleep at the designated time.

Tips
You can use the -m flag to specify the number of minutes to wait, and the -h flag to specify the number of hours.
If you don't specify any flags, the Sleep Timer will default to a 0-second wait time.
The Sleep Timer uses the pmset command to put your Mac to sleep, so make sure that command is available on your system.
Happy sleeping!
