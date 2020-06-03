Battle Simulation
=================
This version created on 04/Feb/98.
Created 25/Jan/98 by Richard Lau (riclau@mailcity.com)
Web: http://freespace.virgin.net/seng.lau/ep/

Contents
========
- Distribution and usage
- What's new
- About the Battle Simulation
- Flags used
- Battle PCX files
- Notes
- Credits
- Contact info

Distribution and usage
======================
Feel free to distribute this zip file and upload it on your
web-sites (if you do a link would be nice). 

If you want to include this battle engine in your VERGE demo or
if you'd like to use it as a basis for your own battle engine 
please email me first and ask, I'd most probably let you.

What's new
==========
04/Feb/98
---------
- You can now lose HP.
- Put in checks so that the numbers won't try to go negative
  (currently VERGE doesn't support negative numbers).
- Enemy stats now changed to flags, thus making the code a lot
  neater and reducing the number of events required. It's now 
  a lot easier to define the enemy stats (see event 17).
- New battle music. All the music included in the zip is now
  all my compositions.
- Changed test.map. Put back items and equipment.
- Removed most of the WAV files which were not needed. 
- Updated this file :)

About the Battle Simulation
===========================
This is a very simple battle engine which is written in VergeC.
There's no magic, skills or items implemented yet but the basic
attack command is there. Make sure you unzip the engine expanding
the subdirectory as the battle graphics are stored in the BATTLE\
subdirectory.

When you start the game you'll be on a slightly modified test.map
from the pack-in demo. To engage in a battle either walk around
the map or go to the entrance to the underwater passageway.

The engine is designed to be easily extendable. Basically the
code is contained inside BATTLE.VC with graphics stored in the
battle sub-folder. The battle backgrounds are done as maps whose
VC files have the format:
  #include battle.vc   // Include the battle engine
  event // This event is executed at the beginning of the battle
  {
  }
  event // This event is executed at the end of the battle
  {
  }

Now to cause a battle on a map you'd create an event such as: 
  event /* ?? */
  {
    flags[7001]=LocX;               // Store the current x and y
    flags[7002]=LocY;               // coordinates so the battle
                                    // engine will return you to
                                    // where you left the map.
    flags[7003]=mapno;              // Put a number here for
                                    // mapno. Make sure it matches
                                    // that in BATTLE.VC.
    MapSwitch("batgrass.map",0,0,0); // Executes the battle 
                                     // engine using batgrass.map
                                     // as the background.
  }

If you change the numbers of the flags then make sure you change
the appropriate ones in BATTLE.VC too.

Hopefully the comments in BATTLE.VC are easy to follow and explain
what does what.

Flags used
==========
These are the current flags used by the engine.
7001 - Stores the x-coordinate of the player on the calling map
7002 - Stores the y-coordinate of the player on the calling map
7003 - Stores a number representing the calling map. 
  Event 8 uses the above three flags to return the party to the 
  calling map where they left it.

Enemy flags (see events 16 and 17):
7100-7104    - Stores the type of enemy in slots (1-5)
7105-7109    - Stores the enemy HP
7110-7114    - Stores the enemy MP
7115-7119    - Enemy HIT rate
7120-7124    - Enemy DOD rate
7125-7129    - Enemy MAG rating
7130-7134    - Enemy MGR rating
7135-7139    - Enemy REA rating
7140-7144    - Enemy MBL rating
7145-7149    - Enemy FER rating
7150-7154    - Enemy ATK rating
7155-7159    - Enemy DEF rating
7160-7164    - XP gained on killing enemy in slot (1-5)
7165-7169    - GP gained on killing enemy in slot (1-5)
7170-7174    - X coordinate to place enemy (1-5) on screen
7175-7179    - Y coordinate to place enemy (1-5) on screen

Battle PCX files
================
Obviously all the pcx files should use the same palette as VERGE.
These files are found in the BATTLE subdirectory.

BLANK.PCX    - (64x64) Should be left alone. Represents "no enemy".
MENU.PCX     - (83x70) The menu background.
POINTER.PCX  - (16x16) Menu pointer (facing right).
POINTER2.PCX - (16x16) Menu pointer (facing left).
SELECT.PCX   - (16x16) Selected character indicator.
STATBAR.PCX  - (320x70) Background for the status information.

Enemy PCX files are 64x64 images. Two images are needed, the second
image being a silhouette of the first (see event 11). 

Notes
=====
- To allow for expansion please try not to use flags[7000]+ as
  these will be used if any extra flags are required by future
  versions of this engine.
- When your party is wiped out you are returned to the calling
  map with 0 HP. If you want a game over screen or something
  change the bit at the end of event 0 in the if statement
    if (u=2) { ... }
- Pressing b3 (Esc by default) will instantly flee the party
  from the current battle without penalties. This can be easily
  changed by modifying the if statement at the end of event 0:
    if (u=3) { ... }
- If you replace the font note that to recolour text the engine
  replaces colour 31 (the default text colour).
- I tried using the #define statement to give names like XLoc 
  instead of flags[7001] but it didn't work for me. The script
  compiled okay but the engine stopped functioning properly.

Credits
=======
Battle engine code, battle.s3m, rictown.s3m, startup.s3m, 
logo.pcx, title.pcx, battle\*.pcx were created by Richard Lau.

Woods.vsp was created by Spram.

Other graphics are from the VERGE pack-in demo, created by Hahn.

VERGE was created by vecna.

Contact info
============
Send any comments or suggestions to:
        Richard Lau <riclau@mailcity.com>

If I ever update the battle engine I'll upload it to my VERGE
web-site:
        http://freespace.virgin.net/seng.lau/ep/

And the VERGE repository:
        http://moria.vivid.com/

For the latest on VERGE check:
        http://www.inlink.com/~vecna/crs.html

-----------------------------------------------------------------------
[end of file]
