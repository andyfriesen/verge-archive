             ===============================================
                         V2 CHR Graphical Editor
             ===============================================
                             Brad Smith 1999

 Contents:
  1. Concise Information
  2. Keyboard Commands
  3. More In-Depth Informtaion
  4. Command Line Arguments
  5. Changes, Credit, Contact Information

Please, read sections 1-3 before asking me why a feature isn't
implemented. In most cases, it is. People keep asking me for things
that -are- in my editor. Also, to find things more quickly in this
document, why not use the "Search" menu to quickly jump to it?

Also Note: To make CHRs of differing sizes, either click the [New] button,
or edit V2CHR.CFG to change the default size. Please review the V2CHR.CFG
file, as it contains important information, such as video modes, and
controlling the palette.

=========================================================================
                         1. Concise Information
=========================================================================

So, you've got the program, and you're reading the documentation. Good
for you. If you REALLY need to get going right away, run V2CHR.EXE and
hopefully you can figure it out without too much trouble. (Windows users,
just double-click the thing that says V2CHR or V2CHR.EXE) I tried to make
the GUI (Graphical User Interface) as easy as possible to figure out.

For everyone else, either people new to it all, or just those that want
to know it a little better, here's some general (and thus concise) info
on how to do it all.

If you don't know what a CHR is, well, it's a type of file used by the
Verge engine that holds the information for what a character or entity
looks like in the game. This includes your main character, and people
he talks to. (I'm not putting "/she" or "or she" because if you actually
knew anything about english you'd know that in examples he is considered
neutral (that is, neither female nor male) and therefore correct.)
CHR files are a big part of verge games, and you should spend the time
to make some of your own.

First, open up the program. When everything is set and loaded, if
everything went well you'll be faced with the editor's main screen.
That brown-pencil-looking thing is your mouse cursor. Move the mouse,
watch it whirl around (yay!). I'll assume you know how to use a mouse
for the remainder of the documentation. (:P)

The main screen contains:
- On your top left is the toolbar. This contains your loading/saving/
  cutting/pasting/quitting/and scripting buttons, which you can click on.
- On your bottom left is the palette, which is all the colours at your
  disposal. Clicking on a colour there will change the drawing colour for
  the mouse button you clicked it with (left or right only, sorry you
  people with three buttons, you just can't go colour nuts). The two
  coloured boxes with numbers are those buttons' current colours, and
  those colours' numbers. (Oh, and I'm Canadian, you're going to have
  to deal with those funky "u"s in colour.)
- In the very bottom right corner is a small box with a number in it.
  This is the zoom factor. The zooming of your edit box will be scaled
  by two to the power of this zoom factor. Right clicking on it will
  decrease the zoom factor, and left clicking will increase it.
- If your character isn't too wide or too tall, there will be an
  animation box directly to the right of your toolbar. Left or right
  clicking on it will change the animation it's displaying. (And when
  you do that, the toolbar's "Scripts" button will show you which
  script you're editing. More on scripts later. If the animation script
  isn't written yet, there will just be a grey box there. Since you just
  opened the program, this should be the case.
- Finally, directly to the right of your animation box is the edit box.
  This shows you the current frame you are editing. Clicking anywhere in
  the edit box will draw on that frame. If your CHR is big enough, there
  will be scroll bars on the very right, and right-bottom of the screen.
  Clicking and dragging on these will move your view around the frame.

So, now that you know what everything is, here's a description of all
the buttons and things you can click:
 [Close] - This will exit the editor after prompting if you want to quit.
 [About] - For those that care* it tells you my name and the version.
 [New] - Lets you create a new CHR with any dimensions.
 [Draw/Fill] - Changes the drawing mode.
 [Load] - Lets you load a CHR.
 [QSv] - Quicksave: Will quickly save the CHR under the filename shown
         just below this button.
 [Save] - Will let you save a CHR.
 The button just below the load/save buttons is the name of your current
  CHR file. This is especially useful if you forget what you're editing.
 [Stats] - Lets you change the idle frames / hotspot information.
 [Undo] - This will undo the last change you made to the current frame.
 [Frame] - Copies the entire current frame to the clipboard.
 [Shape] - Lets you copy a rectangular area to the clipboard.
 [Paste] - Pastes the current clipboard to your current frame.
 [Mask] - Pastes the current clipboard to your current frame, but
          excludes everything of color 0 (transparent paste). If you
          click on it with the right mouse button rather than the
          left it will exclude the color that is currently held by the
          left mouse button instead.
 Just below that is a button that tells you what frame you are editing,
  and how many you have in total. Note that if you have 10 frames, you
  can edit frames 0-9, not 1-10 as some of you may think. Clicking on
  this button brings up a frame selector, provided your CHR is not too
  large to display.
 Near the bottom of the toolbar is a [Scripts] button, and a left and
  right button. The left and right buttons will change the current
  frame. The [Scripts] button will open up the script editor. Which is
  described next.
 At the very bottom is an indicator which tells you where in the editor
  your mouse cursor is.

  The Script Editor
 ===================
 Verge 2 CHRs have animation scripts. This way, you can decide which
 order the frames go in, and how long to wait on each. The script editor
 will let you edit this.

 Upon opening the script editor, you will be faced with the scripting
 box, and a view of your CHR (unless your CHR is too large to display,
 in which case, it will tell you).

 Anyways, V2 CHR scripts basically have two possible options, show a
 frame, or wait. All of these little commands, one after another make
 up your animation script.

 Your script is displayed in two columns on the left. If your script
 is longer than the amount displayed, click on the arrow buttons at
 the top or bottom to scroll around.

 The left columns will either say "Frame","Wait", or "End". Clicking on
 "End" will lengthen your script by one command. Righ clicking on a
 "Frame" will change it to a "Wait" and vice versa, though it's common
 practice to have your commands go Frame,Wait,Frame,Wait,etc... (which
 is why the editor will by default put "Frame" on evens, and "Wait" on
 odds.)

 If you remove all wait commands from a script, then the cursor will
 flicker annoyingly. This is normal, because a script with no waits would
 be animated as fast as possible, which causes the cursor to flicker. CHRs
 should always have waits in between the frames, otherwise you will miss
 frames because they will animate faster than the screen redraws.

 To change which frame is displayed, click on the number in the right
 column next to a Frame command, then type in the number of the frame you
 want, and likewise for changing wait lengths. Wait lengths are timed in
 hundredths of a second, so "Wait 100" would wait for one second.

 If your script is too long, then you can make the end come earlier on
 by right clicking the "Frame" or "Wait" that you'd like the new end to
 be at. Be warned that doing this will erase any of your script below it
 so be careful with it.

 If you want to change the script you're editing, just click on the left
 or right buttons. When done editing scripts, click exit.

That should be all you need to know to get started.

=========================================================================
                          2. Keyboard Commands
=========================================================================

While the main editor screen is up, you can press any of the following:
  [ESC] or [F10] - Quits
  [F4] - Load a CHR.
  [F5] - Quick save.
  [F6] - Save a CHR.
  [F7] - Export a CHR as a CHRMAK style PCX and makefile.
  [F8] - Take a screenshot, saved as "v2chr.pcx". (VGA 13h mode only)
  [+] or [-] - Changes the current frame.
  Cursor keys - Scroll the CHR (if there are scrollbars)
  [Z] or [X] - zooms in or out.
  [G] - Turns the grid on or off.
  [S] - Inverts the screen. (Handy to see the transparent part of your
        CHR, or for finding your indicators in the palette).
  [[] or []] - Decrements or Increments the left colour.
  [{] or [}] - Decrements or Increments the right colour.
  [H] - Flips your frame horizontally.
  [V] - Flips your frame vertically (why you'd want to, I can't say).
  [F] - Copy the frame to the clipboard.
  [O] - Copy a rectangle from the current frame to the clipboard.
  [P] - Paste the frame/shape from the clipboard.
  [M] - Masked paste. ([m] masks colour 0, [M] masks the left colour)
  [D] - Switches between draw mode, and fill mode.
  [K] - Will exchange the two current mouse colours in the current frame.
  [L] - Will replace the right mouse colour with the left mouse colour
        in the current frame.
  [A] - Adds a new frame to your CHR after the current frame. (It also
        adjusts your scripts to keep them working as before)
  [R] - Redraws the screen (in case it gets messed up by Win95, persay).
  [T] - Activates the Screen Saver (for those that can't wait a minute).
  [SHIFT] - If it is the left shift, you can pick up a colour from the
            editing frame while holding it.
  [CTRL] - Apparently does nothing, but hold it down anyway.*

=========================================================================
                      3. More In-Depth Information
=========================================================================

Other points, and things of note:

The file V2CHR.CFG is a text file. You can edit it in order to change
options within the program without having to enable them every time.
You can also have the editor work in a 320x240 modex, or 640x480 VESA
screen mode rather than the default 320x200 13h vga mode. Descriptions
on what to do are inside this file. The palette, and mouse cursor can be
changed with this configuration file.

- Holding the left shift key while clicking on the edit field picks up
  the colour you're clicking on.

- You can copy a frame from one CHR, and paste it in another as long
  as both CHRs have the same dimensions, otherwise, the clipboard is
  cleared on load/new. (You can also copy a 'shape' from one to another
  under the same restrictions)

- There is a screen saver that activates after 1 minute of inactivity.

- On the quit alert box, pressing [Y] selects yes and [N] selects no.

- On loading/saving/new-CHR boxes, pressing [Enter] selects Okay and
  pressing [ESC] selects cancel.

- If you want to edit a V1 style CHR, when clicking on [New], there is
  an option for it. If you select a V1 chr, everything except your frames
  will be set for you, though V1 chrs should have at least 20 frames, and
  no more than 30. V1 style CHRs will also have their scripts prefilled.

- Objects in the rear view mirror are closer than they appear.

- You can save the CHR as a V2 style CHR by clicking the V1 option on
  the file selector. Note that scripts are not saved in the V1 format,
  and will always follow a default pattern. If you are saving in the V1
  format, also make sure your dimensions are 16x32, otherwise it will
  not work in a Verge 1 game.

- If the loader hangs while trying to load a CHR, it might be a V1 CHR
  file that isn't distinguishable from a V2 CHR. To remedy this, you can
  click the option on the load file selector.

- Backups and QuickSaves are always in V2 CHR format.

- Automatic backups happen every three minutes, the default backup file
  is $BACK$.CHR. This can be changed with the V2CHR.CFG file, or command
  line arguments.

- You are reading this.

- The hotspot is the point where the top left corner of the tile that
  your character is standing on will be. Common values are 0 for the
  hotspot x, and 16 less than your CHR's height for hotspot y.

- You can export a CHR as a PCX and a CHRMAK style makefile by pressing
  F7. This is handy if you want to use another graphic editor, or
  want to resize your image, or swap around frames quickly.

- This editor cannot edit CHRs larger than 500x500. Its maximum number
  of frames is 1024, and it will never attempt to make a CHR that will
  take up more than 20mb of memory.

- Hotspot width and height are not (to my knowledge) used in the V2
  engine. Leave them at 16 unless you know otherwise.

- Scripts cannot be more than 199 commands long.

- The editor will always save/load from the directory it was run from.
  At the moment, changing the directory is unfeasable. (I don't have
  any documentation on the watcom file handling commands, and there's
  no directory changing in the verge source)

- If you have saved characters with version 1.0 of this editor, you
  should open, and resave them with this version in order to be
  compatible with the updated CHR format.

=========================================================================
                       4. Command Line Arguments
=========================================================================

IF you know what a Command line argument is, you can use the following to
automatically set up certain editor options:
   [filename]    - Load File (eg. DEFAULT.CHR)
   -v13h         - Select Video Mode 13h
   -vmodex       - Select Video Mode-x
   -vvesa        - Select VESA Video Mode
   -bon          - Backup On
   -boff         - Backup Off
   -bf[filename] - Backup Filename (eg. -bfBACK.CHR)

=========================================================================
                   5. Credits and Contact Information
=========================================================================

V2 CHR Graphical Editor version 1.5
  Took care of a saving error. VESA support for a 640x480 mode has been
 added. The code for it was largely borrowed from the verge 2 source,
 in an effort to make it as compatible with verge as I can make it.
 Colour swapping/replacing has been added. (See keys [K] and [L] in
 the keyboard commands section) I fixed some silly litte pixels that
 were appearing around to the x,y location box. Finally, the one you've
 all been waiting for, you can cut and paste rectangles. Oh, and I
 fixed another bug, where creating a new character did not carry over
 the clipboard. Finally, I added a feature to let you add frames. I
 feel my work here is done now. I can't think of anything else to
 add... and so... unless something new comes up, have fun with this
 ultimate version of the V2 CHR editor. Thankyou and goodnight.
 (One small amendment, I have also included a utility for resizing
 CHRs, called CHRSIZE.EXE. Run it to find out its function)

V2 CHR Graphical Editor version 1.4
  Licked an error noticed by JRN, it involved loading and the undo
 buffer... I'll just leave it at that. :)

V2 CHR Graphical Editor version 1.3
  Noticed and fixed a few bugs with scripting, and other areas. An
 undo feature has been added, for those people who kept bugging me
 for one. Actinium has made a bunch of custom mouse cursors for
 my editor, and so, a zip of them is now included in the distribution.

V2 CHR Graphical Editor version 1.2
  Fixed the initial flicker when creating new movement scripts.
  x,y coordinates now appear at the bottom of the toolbar.
  A fill function has been added. (The algorythm itself was concocted
 by myself, with a single word of help from Ric. (Recursive!))
  There is now a graphical frame selector (click the frame indicator).
  Also, there is a PCX/MAK exporter, which is handy for doing some hand
 editing on the files with an external editor. (Note that the created
 files can only be turned back into a V2 CHR by means of the CHRMAK
 utility found in the v2 zips. The V2 CHR Graphical Editor cannot
 load them directly.) You can then do things, such as resize the CHR
 or add frames, which you can't within the editor yet.
  A bug that didn't actually effect the CHR, but appended a 255,0 to
 the end of all scripts has been located and sprayed with raid.
  You can now make custom mouse cursors in the form of an 8x8 PCX image.
 Check the configuration file for more details.

V2 CHR Graphical Editor version 1.1
  Made a few cosmetic changes, updated the file format. Added a screen
 saver, palette loading (from the cfg file), and mouse control. All
 written by Brad Smith, built on specifications for the new format by
 Benjamin Eirich.

V2 CHR Graphical Editor version 1.0
  This was programmed entirely by Brad Smith. No nonstandard libraries
 were used, and the only imported code was that of the verge palette
 data. Other than that, it was all Brad Smith's work, with a few
 guidelines and file specs put forth by Benjamin Eirich (vecna).

  Files that should be included with this one are:
   V2CHR.EXE - the executable file.
   V2CHR.CFG - the configuration text file.
   README.TXT - this file, the documentation
   FSPECS.TXT - (optional) V2 CHR file format specifications.
   BAKAHITO.CHR - (optional) an example CHR file.
   MOUSE.PCX - (optional) a default mouse pointer.
   ACTCURS.ZIP - (optional) extra mouse pointers by Actinium.
   CHRSIZE.EXE - (optional) a CHR resizing utility.

 If this version messes up your computer, a DJGPP build may also
 be available, either at my site, or otherwise. Contact me if there
 is none, and I will put the work in and port it for you.

 Contact information:
  Brad Smith can be reached for any reason at
                                                    rainwarrior@home.com
  His online site is at
                                              http://switch.to/unleaded/
  The official verge homepage is located at
                                               http://www.verge-rpg.com/
  He can be reached on the #verge IRC channel on espernet, usually
   under the nickname Rane.

Thankyou for reading this documentation. May you, erm, draw well.

=========================================================================
                  -- RainWarrior (Rane), Brad Smith, rainwarrior@home.com

@_@ .erac taht esoht rof tfel mottob eht ta terces gnihtemos s'ereht dna, hO
                 ^ Sore wa himitsu desu. (That's a secret.) ^_^