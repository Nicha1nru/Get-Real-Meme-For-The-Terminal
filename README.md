# IMPORTANT!!!!
To get this to work, go the to frames directory and use ffmpeg to convert all the frames into png's.
The command is: ffmpeg -ss 00:00 -i cat.mp4 -t 1:41 %1d.png (If you dont have ffmpeg run "sudo apt install ffmpeg" on ubuntu based distros)
And then to run it go out of the frames directory and use the ./main command.

# Get-Real-Meme-For-The-Terminal
It runs at 1 frame per second and you need linux to run it and the code is kinda crappy. Have fun!
