P.H.A.G.E. Rhapsody v.5.0
copyright 1999-2001: Gregory Walpole

by Greg "GMW" Walpole

Plot Stuff:

Long ago, humans ruled the world of Ieval. They arrived suddenly, 
terraformed the planet, and just as suddenly died out, leaving behind
only their genetically altered animal servants.

These animals struggled and fought in an unending cycle of war, until
two empires were each poised to conquer it all: The harsh rulers of the
northern steppes, known as the Horse Nomads, and the sprawling
Savannah Empire, ruled by the immortal Lumin. The two empires clashed,
and the Nomads looked to have gained the upper hand, until Lumin
used his vast powers to destroy them once and for all. But the
Savannah Empire had spent two decades at war, and was no longer
capable of conquering the rest of the world.

This is the story of a rather naive frog named Sam, who seeks to
preserve his town from impending doom, but stumbles into an ancient
plot. The truth is much different than the historians have recorded,
and Sam's quest threatens to uncover that truth. Only Sam can prevent
the past from occurring again...

New in version 5.0:

Webb! Vultris! Falkonner! Surprise enemies! Side quests!

Fixed a couple of problems I'd found in the battle system, and a couple 
of bugs. Anger Moves will occur more frequently now, due to the 
changes in the way Yellowjackets, Storm Fury, and the new Pep Rally
spell work. 

Previously, those effects actually *multiplied* characters' damage, 
and when stacked with multiple uses, could kill nearly any enemy in
a single shot. At the same time, they also contributed very little to
the characters' anger meters, causing the use of said abilities to be
rare at best. I wanted the player to look forward to the use of Anger
Moves, not just have Feng annihalate every boss in sight by casting
Storm Fury repeatedly and hitting it for 50000 points of damage.

So I changed them. They now add the character's FER score and max hp to
the meter, pumping it up efficiently enough to allow the player to
fire them off without also overpowering the party to the point where
a Minor Aardvark becomes an easy kill. 

I also improved Rikk's Drops. His HIT score now influences them as 
well, so they do more damage, and stay useful far longer.

Known bugs:

Sometimes one-use items don't work properly. Sometimes they do. 
I believe that they work fine in Sam's inventory, but not in Rikk's. 
If a one-use item does not go away when used, please do not use it 
again and again, because it will do bad things eventually, like 
scramble your character's data. (Even more interestingly, if you 
switch Sam out of the lead position, not only does he gain the item 
glitch, but none of the people put into the lead lose it. Putting 
him back fixes him, though, at least I think it does.)

Also, if a character's inventory becomes full, and they then use an
item, often a 'phantom item' appears in the slot. These items are just
pictures most of the time, but still contain actual data. While they
remain nameless, they can be equipped, sold, and dropped, though not 
used. Do *not* do so! That *will* scramble your data, often causing 
your spells to duplicate themseleves over other spells in your 
inventory, or causing your scores to become weird strings of data. 
Eventually, it crashes the game, and that's no fun, now is it?

As of ?/??/2000: The BS is not crashing, and the really annoying 
		problem with effects.vc has been staved off by me 
		making my battle code more efficient, and putting a
                good number of enemy moves directly in the map's .vc
		code. However, the heretofore unknown size limitation 
		on effects.vc has made me swear that my next game 
		(long-term thinking, no?) will be done in V2. Yeah, 
		right. That's what I said last time. :)

As of 2/Dec/2001: I just realised that I forgot to fix the picture
		for the Sonic Croak item. But I just finished paring 
		down the files for the demo, so I'm leaving it broke 
		for this one... Oh well. :)