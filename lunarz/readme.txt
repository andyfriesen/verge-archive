MapEd -- last updated 6/6/97
=============================

| Changes are marked by lines that begin with the | symbol.

I. Basic editing
=================
    You MUST specify a map filename on the command line. There is no "blank"
map mode - that's what NEWMAP is for. :) So, to edit the CAVE.MAP, you'd simply
type MAPED CAVE.MAP.
    At this point you are brought into the main editor. You can press ESC to
bring up a small menu from which you can switch your editing mode. The first
three are all basically the same, just editing different layers and different
views. You start out in the background layer.
    There are two boxes in the lower-right hand corner. The left one is the
left mouse button, the right box corresponds to the right mouse button. The
A and Z keys allow you to quickly scroll through the tiles that will be assign
to the left mouse button. The S and X keys do the same for the right mouse
button. This is the fastest way of moving through tiles that are of the same
general type.
    If you want to get to a completely different section of the tile list, it
would probably be much faster to press CONTROL, which takes you to the Tile
Selector. The Tile Selector will be explained in more detail later, for now,
you simply click on the tile you want with the mouse button you want to
assign it to. You can also use the UP and DOWN arrows to scroll through the
tiles displayed, as nowhere near the 65535 possible tiles fit on screen
at once. :)

    Remember that F10 is always the quickest way to save. Save frequently,
it's a beta program.. :) It doesn't crash in my experience, but you never
know...
  MapEd now will automatically compile the VC file associated with a MAP
every time you save. (This does NOT take long - VCC is a FAST compiler)
MapEd assumes (as does VCC) that your if you have a DOMA.MAP, you will
also have a DOMA.VC, and vice versa. You should name your files accordingly.
    The M key brings up some basic Map Properties. From here you can control
the mapname, parallaxing speed, starting location, music, etc. The 1, 2, and 3
numeric keys (not the keypad) switch between layers and views. They are -
  1 - Edits and shows only the background layer.
  2 - Edits and shows only the foreground layer.
  3 - Shows both layer overlayed on each other how they would be in the
      actual game, but only edits the foreground layer. In Parallaxing mode,
      this view simulates the parallax as best as it can, so you can get a
      good idea of what part of the background will be in view at a certain
      part of the map.
There are now different parallax scrolling mode. Their codes are as follows:
 0: No parallax. Characters drawn in between layers. (old)
 1: No parallax. Characters drawn on top of all layers. (new)
 2: Parallax. Characters drawn on top of all layers (old)
 3: Parallax. Characters drawn in between layers. (new)

The Hide and Warp flags are new parameters which the engine will eventually
keep track of. They determine if the character should be able to cast a
Warp spell (warp stone, psychotron, white dragon wings, etc), and if they
should be able to use a Hide effect (no random encounters).

| Over the last few weeks I've been adding some features to the main editing
| screen. Most of these are experimental and will probably have their
| intefaced changed over time as I get input - I KNOW they suck now, but I'm
| not sure exactly what I should change them to.

| "Tile Eyedropper" - Hold down the slash (/) key and click on a tile with
| one of the mouse button. That tile will be assigned to your selected button.
| A bit faster than going to the Tile Selector sometimes.

| Block Fill - Hold down the left shift key, and press the right mouse button.
| Drag the area you'd like to fill, and when you release it, the selected area
| will be filled with the selected tile for the LEFT mouse button.

| Copy/Paste - Similar to the Block Fill. Hold down the left shift key, and
| press the LEFT mouse button. Drag the area you'd like to copy, and release
| the mouse button. You should see a small letter "P" in the lower left-hand
| corner of the screen. At this point, any time you left-click, you will
| lay down what you copied instead of whatever active tile you have. If you
| wish to turn off pasting mode, press P. BEWARE - This, of all the functions,
| is the most problematic. Be careful with it. Always check you don't
| accidentally lay down a paste when you want to lay down a single tile. Also,
| it does NOT work correctly in view 3 with parallax modes. However, it's
| useful enough to warrant me telling you about it despite of it's current
| problems. :)

II. The Tile Selector
======================
    The Tile Selector can do a number of other things besides just choosing
an active tile. Here's most of them:

Tile Rotation
-------------
    By placing your mouse cursor over a tile and pressing the X, Y, or Z key,
you can rotate a tile. By using various combinations of those keys, you can
achieve any given rotation/flipping. Experiment around with these.

Tile Addition/Copying
---------------------
    At the bottom of the Tile Selector screen, two numbers are given. The
first is the tile number that the mouse cursor is on, the second is how many
total tiles have been allocated in the VSP. By pressing A, you can allocate
another tile.
    You can also copy tiles. Move your mouse cursor over the tile you wish to
copy, press 'C', then click on the tile space you want to copy it to.

The Foreground and Background layers no longer use different VSPs. They
share the same set of tiles. Which view mode you are in makes no difference
about which set of tiles appears in the tile selector. However, there can
now be 65535 tiles in one VSP, instead of only 256.

Tile Animation
--------------

    By pressing V, you can bring up the Animation Editor. You can have ten
"strands" of animation active in one VSP, and each strand can be any length.
The A and Z keys scroll through the strands. You specify a start/finish
tile index, and a delay on how often to animate the tiles. This delay is
given in 91ths of a second. A delay of 0 will disable the animation for that
strand.

Tile Editing
------------
    This is perhaps the most useful, yet the most unpolished section of the
Tile Selector. Simply move your cursor over the tile you wish to edit, and
press E. The rotational keys X,Y, and Z work in this mode as well. You select
your colors by clicking on the palette display near the bottom of the screen,
or by using the D and C keys to cycle through them. You can have seperate
colors assigned to the left and right mouse buttons.
    Another way of selecting your color is to hold down S while clicking on a
pixel of the desired color. This is functionally the same as the "eyedropper"
in programs like Deluxe Paint and Paint Shop Pro.
   The are two keys available for undo-type scenarios. The first is the U
key, which restores the LAST PIXEL ONLY that you drew. The other key, R,
reverts to how the tile was when you initially pressed E to edit it. (If you
edit a tile a bit, escape, and go back to editing it, revert will take you
back the the beginning of the SECOND editing session, not the first)

| New in this version of MapEd is a very, VERY quick-and-dirty copy/paste
| function in the Tile Editor. (Ie, it was written in under 15 minutes) It
| does seem to do it's job, however. To use it, from the Tile Editing screen,
| press M for "Mark". Left-click the up/left corner of the region you'd
| like to copy. Then left-click the lower/right corner. At this point you
| can exit the Tile Editor if you like, and bring up a different tile in
| the Tile Editor. Press P (for Paste) and that part's pretty self-explanitory.

III. Obstructions
=================
    The engine doesn't know the difference between a wall you can move through
and one you can't until you tell it, and the Obstruction mode is where you
do that. Just press O to enter the obstruction mode. Tiles which are marked
as obstructions are darkened by a transparent colorfield. The left mouse
button sets the tile as an obstruction, while the right mouse button sets
that tile as passable.

IV. Zones and Events
====================
   This is the area of editing that has changed the most. Zones basically
work the same, so I'll explain those first:

Zones
-----
    The zone interface is rather simple. Press the N button to enter the Zone
editing mode. The A and Z keys scroll through the various zone assignments,
which are numbered 0 through 127. The CONTROL key edits the properties of the
selected zone. The Zone Description is for your own use, to help you keep
track of what that zone is for. The Event field tells the engine which event
to call when this zone is triggered to handle it. The Delay field controls
how many steps must occur in a zone before it is considered for event
execution. This is useful for ensuring that not too many battles occur one
right after another. The Chance field control how likely it is for that zone
event to be triggered. If you want the event to be triggered as soon as the
party leader steps into it, set this field to 255. Values in between work
at appropriate percentages - for a combat event, values between 5 and 40 are
the most acceptable. A chance of 0 means the event will never be executed.
The Desc field is the description that will be used for the savegame when
the character is in this zone. The "Accept Adjacent Activation" is a bit
unusual, but it's really very simple. It basically means that you can set
the zone to be an obstuction, and you can activate it's event by standing
adjacently to it, facing it, and press the Use button. FYI, when a zone is
activated adjacently, the Chance and Delay fields are ignored - the event
is simply called regardless.

VergeC
------
    VergeC is our answer to the problem that the old event system got very
very unpleasant if you wanted to do anything complex. Doing even simple
event chains got tiresome quickly if you editing things much.

(FYI: I once made a bridge which you could go over or under entirely by using
two chains of Alter Map Data events. The bridge was only about 2 tiles wide
by 4 tiles down, but all in all it took nearly 30 events to do it. Those of
you that have started dealing with text events probably noticed the general
un-niceness of dealing with big event chains. I realize VergeC isn't the
perfect solution, but it's a much nicer alternative)

VergeC completely replaces the old event system. That part of the editor
no longer exists. Also, for those that were skeptical and thought that VergeC
would be too complex, I beg you to actually take a look at some of these VC
files. They are very simple in nature, and easy to learn. For more specific
details, see VCC.TXT for a desription of the rules and ways of VergeC, and
look at COMMANDS.TXT for a comprehensive list and description of all the
currently support keyword functions. That list will grow quite a bit, I
assure you.

When you click "Edit Scripts" (where the Edit Event button used to be), rather
than going to an internal editing window, MapEd will shell to a text editor
with the appropriate VC file already loaded. At the moment that editor
happens to be SLED.COM, a personal favorite of mine. You can copy anything
over that however and it will execute it. (If you have a COM, simply copy
your editor over SLED.COM. If it's an EXE, copy it into a SLED.EXE and
delete SLED.COM - MapEd won't know the difference) A quick guide to SLED:
Alt-H will always display the help screen. F4 saves and F7 closes/quits
the editor. (returning to MapEd)

Compiling VC files - everytime you SAVE (F10) in MapEd the VC file
is automatically compiled and the compiled code appended to the end of
the MAP file. The actual .VC text file is not needed by the engine for
execution, but you should keep it around in case you want to edit
it at a later date.

This is a sort of backhanded, unintentionaly copy protection. If you don't
distribute your .VC source, assuming no one makes a decompiler (which would
be possible but time consuming), they won't really be able to edit your
MAP. They can load it up and play with it in MapEd, but if they save the
changes they'll lose all the event data because they don't have the .VC
source file, making the MAP ultimately pretty unplayable. If you want to be
nice tho, you can distribute your VC source and other people can have some
fun with your maps.

VCC.EXE is a standalone EXE. If you're not making any changes to the map
data itself, just say, entering text for town people, you can simply load
up your .VC file in a text editor and run it through VCC yourself, assuming
the MAP file is in the same directory. If you have TEST.VC and TEST.MAP,
you'd just type in "vcc test" and it would compile it. You can also type
"vcc test q" which prints NO OUTPUT (not even errors) (which MapEd uses),
or "vcc test v" which prints out a whole lot of debug info, mostly for
my purpose.

- vecna@inlink.com
