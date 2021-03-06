# The VERGE Archive

VERGE (vecna's Extraordinary Roleplaying Game Engine) was a game engine coded by Benjamin Eirich (vecna) in 1997.  It had a pretty active community in its day.  Hundreds of little games, demos, and strange toys were written with it.

As the original engine was a DOS application, it is getting harder to play these old games on modern computers.  The VERGE archive includes a WASM port of the original engine plus copies of many of the most popular games so you can play them from whatever device you happen to have.

# Dev instructions

```shell
npm i --dev
npm start # Start the compile watcher
npm run server # Run the server locally.  Hit localhost:8000/indexDevel.html

npm run build && npm run release # Build an optimized release.  Hit localhost:8000/index.html to test locally
```