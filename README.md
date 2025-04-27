# AimBot For Valorant prefer or Game with the ability to track the enemys color
A simple LMB autoclicker without targeting the enemy.

1. You need to purchase a module with "ATmega32u4" support, for example: "Arduino Pro Micro" or "Arduino Leonardo R3", and a cable for connecting the board to a computer.

2. Install the program on your PC by downloading the appropriate file for your system from the link https://www.arduino.cc/en/software/
Download a file from a project called "Arduino Sketch" in the "INO" format. Then, do the following:

2.1. Open the "Arduino IDE" program and install support through the "SparkFun AVR Boards" card manager ONLY IF YOU USE the "Arduino Pro Micro", but if you use the "Arduino Leonardo R3", it is already integrated into the program, you do not need to download anything, but if for some reason there is no manager responsible for the "Leonardo", it can be installed in the same way (here is its name "Arduino AVR Boards")

2.2. Next, you need to connect the board to the computer and find the port responsible for the connected board in the program and activate it, check that the port is active. 

2.3. Then open the "Arduino Sketch" file and upload it to the board. Make sure that there are no fatal errors and that the preparation of the board is completed. 

3. Then the most important thing is to download the installer in "Releases" and install it on your PC. 

3.1. Follow the instructions of the installer and complete the installation. 

4. Run the program.

4.1. The interface is clear to anyone, you need to select the port to which the board is connected in the settings (the port that was in the "Arduino IDE" if you did not disconnect the board from the computer. 

5. That's it, you have a fully working program for automatically pressing the "Fire" button when you aim at the enemy.

6. In the "Valorant" settings, you need to set the color of the enemies to red (this way it contrasts better with the objects on the maps)

P.S. The program works best on sniper weapons ("Marshall", "OutLaw", "Operator")
But the program also works well on pistols (Best of all on "Ghost")

Good luck in the battles!

Also, to simplify the work and the ability to use global keyboard shortcuts, the project has a regular python file (AimBotApp.py).
