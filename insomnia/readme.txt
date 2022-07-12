
  VERGE
  Additions/Changes
  Last Updated: February 7, 2000

  Important

  - VCC ALL everything for new VCC (2.5 beta and up)
  - NOTE!!! user.cfg no longer pays attention to 'startmap'. you must
    make an 'autoexec' routine in system.vc and it'll call that.
  - I recommend only HookTimering routines that do not use local vars.
  - It has been brought to my attention that MikMod has memory leaks, and
    it will sometimes clash with the engine and either hang or crash,
    possible even demand a reboot. No help for it; I don't know any audio
    programming. If V2 does begin to crash inexplicably, set sound_device to
    3 in user.cfg first and see if that has any effect on the stability of
    your game. May go to Seal, or something else.

  Modification Log

  2.5 beta 6

  * PartyMove() was using the internal engine timer, which would cause
    timing problems in some situations, wherein the engine timer would
    build up with no way to zero it. Now works independent of engine timer
    and does not modify any timers.
  * Added screen shot capability for hicolor; writes .RAW in 24-bit RGB
    format. *** Does not store dimensions! *** PSP 5 can read these if you
    specify the correct dimensions. Likely other image editing software can
    as well.
  * Made screen shotting (F11) accessible anywhere input is being processed
    (via the engine, or a call to UpdateControls in VC).
  * Fixed lucent solid blit in hicolor (also affected wrapped blits).
  * Was a problem with new method of handling HookTimer(); was a call to
    its updater within PaletteMorph(), which is bad when the internal
    counter would build up for a long time and then PaletteMorph() would
    be called; taken out for now, we'll see if it matters much.
  * Font code causing hangs was a false alarm; hangs were due to
    HookTimer updater in PaletteMorph.
  * Minor possible bug in GIF loader concerning palettes fixed.

  2.5 beta 5

  * Started hicolor routines; add 'hicolor' to user.cfg and all modes will
    attempt to set 16-bit (or 15, failing 16).
  * Added RGB(), which has the syntax:
      int RGB(int R, int G, int B);
    It returns a color packed to suit the current color-depth
    (15- or 16-bit). All ranges are 0..255.
  * Added GetR(), GetG(), and GetB(), with the following syntax:
      int GetR(int packed);
      int GetG(int packed);
      int GetB(int packed);
    Assuming a color value is in the current mode's color-depth, this will
    extract the correct RGB component in the range 0..255.
  * Added entity.visible and entity.on; entity.visible governs wether or not
    a sprite is drawn, and entity.on governs wether or not an entity is
    processed (if entity.on is set to 0, it is as if the entity does not
    exist as far as the engine cares; it is not visible, nor is it
    processed).
  * Fixed bug due to hicolor, and default BIOS font not being expanded.
  * Merged SYSTEM.IDX and SYSTEM.VCS into SYSTEM.XVC.
  * Minor image code fixes.
  * All main blitters and primitives for hicolor finished.
  * Key binding are no longer processed while within console.
  * RotScale 8-bit lucency fixed.
  * Minor mode-setting code fixes.
  * Added Mask(); performs a simple AND mask on supplied source image data,
    and outputs to destination image data:
      void Mask(int source, int mask, int width, int length, int dest);
    Masks 8-bit elements in 8-bit color, and 16-bit elements in 15- or
    16-bit color.
  * Added ChangeAll():
      void ChangeAll(int source, int width, int length,
        int source_color, int dest_color);
    Translates all occurences of source_color in source image data to
    dest_color.
  * Added read-only variable 'mask_color', which returns the masking value
    for the current bit-depth.

  2.5 beta 4
  
  * Fixed some timing issues w/ events
  * Fixed layer render bug introduced w/ new code
  * lastent is now set correctly when an event is called from within a
    movement script
  * Made execution halt if an AutoExec() was not found.
  * Calls to Render() will always clear the screen first.
  * Rewrote some more graphics code; RotScale() supports lucency as a result
  * Rewrote and tinkered with TMapLine/MapLine commands. Likely slower than
    before, but cleaner and safer; still work the same? TODO: pass map layer
    width/length to them internally so that running along extremities
    doesn't trunc on the left and wrap on the right. WARNING: because proper
    clipping isn't implemented yet, hitting the lower right of a map while
    performing wave effects or the like may crash the engine (theoretically
    speaking)

  2.5 beta 3

  * Rewrote a lot of graphics code internals; condensed many routines to
    eliminate some redundancy. Keep an eye out for anything suspicious, but
    should be okay.
  * Rewrote layer rendering routines and misc related routines; translucent
    layers act up sometimes? Not sure; keep an eye on this one too.

  2.5 ???

  * added 'numents'; returns total # of entities on the map
  * VERGE.EXE will now run without any other files. ^_^
  * Fixed HookKey
  * New input subsystem; won't lose keys when framerate drops in console
  * VESA 2.0 LFB code; any 256-color resolution if you've got it
  * New mouse routines; smooth now
  * New local variable and argument handling; == faster VC code
    NOTE!!! you *must* recompile all scripts with the new VCC for the new
    engine.
  * Unlimited strings
  * Rewrote console a bit; disabled browsetiles, needs to be rewritten
    Made console friendly to whatever font SYSTEM.FNT holds.
  * Made messaging and cpu_usage text friendly to font in SYSTEM.FNT.
  * Put some validity checking in a lot of areas
  * Rewrote VCC's preprocessor and rearranged a bit of the interpreter;
    A little more sensitive to duplicate naming; catches junk lingering in
    global area as an error now (helps with catching mismatched {}).
  * Me2 no longer crashes when you compile twice with VCC; this was due to
    PMODEW, now everything uses DOS4GW, and likely soon it'll go to Causeway.
  * Now V2 runs in pure-DOS without GPFing (geeze ;P)

  Current versions as of February 3, 2000:

        VCC     2.5 beta 5
        VERGE   2.5 beta 6
        MAPED   2.01b

  aen, <aen@verge-rpg.com>
