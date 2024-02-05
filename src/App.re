
let games: array(Game.game) = [|
    {
        name: "aol_chronicles",
        title: "The AOL Chronicles",
        description: "TODO!",
        engine: Game.V1,
    },
    {
        name: "blimpo",
        title: "Blimpo Warrior",
        description: "The first completed V1 game, made by Spram!",
        engine: Game.V1,
    },
    {
        name: "carnage",
        title: "Carnage Killing Spree",
        description: "A game based on Carnage from the SpiderMan comics. Made by CLIPs!",
        engine: Game.V1,
    },
    {
        name: "deicide",
        title: "Deicide",
        description: "Game made by torquemanda!",
        engine: Game.V1,
    },
    {
        name: "diver",
        title: "Diver Down",
        description: "Excellent game made by Grenideer!",
        engine: Game.V1,
    },
    {
        name: "dreamseekers",
        title: "Dreamseekers",
        description: "Game made by Wyrdwad!",
        engine: Game.V1,
    },
    {
        name: "galaxy",
        title: "Galaxy Destroyer Demo",
        description: "Game made by Tarkuss!",
        engine: Game.V1,
    },
    {
        name: "lunarz",
        title: "Lunar Z",
        description: "Lunar inspired demo by Tempest.",
        engine: Game.V1,
    },	
    {
        name: "phage",
        title: "PHAGE: Rhapsody",
        description: "Gregory 'GMW' Walpole made this full-blown RPG in 2001.  The story is darker than it looks.",
        engine: Game.V1,
    },
    {
        name: "resdemo",
        title: "Resonance Demo",
        description: "Hatchet's first Verge 'Game'. ",
        engine: Game.V1,
    },
    {
        name: "shooter",
        title: "Jeff's Shooter",
        description: "Jeff's first Verge Game!",
        engine: Game.V1,
    },
    {
        name: "sots",
        title: "Saga of the Stars",
        description: {j|Grue made this!  He misspelles "existence" like a million times.  Try it out and then point it out to him!|j},
        engine: Game.V1,
    },
	{
        name: "tcw",
        title: "The Crumbling World",
        description: "Made by xBig_D, with a battle system and FMV!",
        engine: Game.V1,
    },
    {
        name: "sully",
        title: "The Sully Chronicles",
        description: "The original pack-in game.  Made by Hahn.  Kinda funny!",
        engine: Game.V1,
    },
    {
        name: "tqfa",
        title: "The Quest for Atyre",
        description: "Written by Lady Starmage. More info to be added later!",
        engine: Game.V1,
    },
    {
        name: "thorny",
        title: "Thorny's Quest",
        description: "A Verge compo game made by Jeff Brooks when he was merely 13!",
        engine: Game.V1,
    },
    {
        name: "godzilla",
        title: "Wrath of Godzilla",
        description: "A Verge compo game made Hatchet, cywolf, Lady Starmage and Castles!",
        engine: Game.V1,
    },
    {
        name: "teddy",
        title: "Teddy Grahams",
        description: "A Final Fantasy inspired V1 game with a battle system, it seems!",
        engine: Game.V1,
    },
	{
        name: "menolly",
        title: "Menolly",
        description: "V1 Game by Gurv. (French language)",
        engine: Game.V1,
    },
	{
        name: "life",
        title: "Life",
        description: "V1 Game by Gurv & Azure Productions",
        engine: Game.V1,
    },
    {
        name: "runeedge",
        title: "Rune Edge",
        description: "A game made by Hyptosis.",
        engine: Game.V1,
    },	
	{
        name: "tactics_verge",
        title: "Tactics Verge",
        description: "V1 Game by Gurv",
        engine: Game.V1,
    },

	{
        name: "vzelda",
        title: "Verge Zelda",
        description: "Verge Zelda demo by Bugen",
        engine: Game.V1,
    },
	{
        name: "adventure_quest",
        title: "Adventure Quest",
        description: "Roguelike game. Author unknown.",
        engine: Game.V1,
    },
	{
        name: "beyond_eternity",
        title: "Beyond Eternity: Ascension",
        description: "V1 game made by Lord Starmage",
        engine: Game.V1,
    },

    {
        name: "zeux",
        title: "Zeux's World",
        description: "A full-featured 2D platformer.  Brought to you by Zaratustra!  Important warning: V2 support is still really unstable.  This may not work very well just yet.",
        engine: Game.V2,
    },
    {
        name: "4four",
        title: "4four",
        description: "Another great platformer from Zaratustra!",
        engine: Game.V2,
    },
    {
        name: "yolt",
        title: "You Only Live Thrice",
        description: "1st Jimmy Bong compo game by Eldritch / GameMaster Ben",
        engine: Game.V2,
    },
    {
        name: "tgwmm",
        title: "The Guy Who Mugged Me",
        description: "2nd Jimmy Bong compo game by Eldritch / GameMaster Ben. ",
        engine: Game.V2,
    },
    {
        name: "tcod",
        title: "The Curse of Dragmoria",
        description: "TODO",
        engine: Game.V2,
    },
    {
        name: "mannux",
        title: "Mannux",
        description: "Original V2 version of Hatchet's classic Metroidvania.",
        engine: Game.V2,
    },
    {
        name: "rex",
        title: "Rex's Tale",
        description: "A zelda style compo game by Hatchet.",
        engine: Game.V2,
    },
	{
        name: "hatchbat",
        title: "Hatchet's Battle System Demo",
        description: "Dragon Warrior style battle system demo by Hatchet, unfinished.",
        engine: Game.V2,
    },
    {
        name: "shippu",
        title: "SHIPPU",
        description: "An original space shooter by Zaratustra with genetic spaceships! Doesn't fully work yet sadly..",
        engine: Game.V2,
    },
    {
        name: "2001",
        title: "2001",
        description: "A compo game by Hatchet.",
        engine: Game.V2,
    },
    {
        name: "rcr",
        title: "RCR Prototype",
        description: "A prototype of a River City Ransom game by Hatchet. Z/X/C for controls.",
        engine: Game.V2,
    },
    {
        name: "gbamap",
        title: "GBA Map editor",
        description: "A prototype of a map editor, intended to use to make GBA games (obviously didn't happen!) Made by Hatchet. ",
        engine: Game.V2,
    },
    {
        name: "casino",
        title: "Casino",
        description: "A 4 Colors of Verge compo entry. ",
        engine: Game.V2,
    },
    {
        name: "babel",
        title: "Beyond Babel",
        description: "A Verge Olympics 2002 game, by choris and infey.",
        engine: Game.V2,
    },
    {
        name: "fugue",
        title: "Fugue",
        description: "A pseudo 3d tunnel game by Zaratustra.",
        engine: Game.V2,
    },
    {
        name: "dungbet2",
        title: "Dungeon Crawler Beta",
        description: "A clone of Dungeon Master by Hatchet.",
        engine: Game.V2,
    },
    {
        name: "mvbs",
        title: "Monty Vecna Battle System Demo",
        description: "A battle system for Monty Vecna by Thrasher.",
        engine: Game.V2,
    },
    {
        name: "mv",
        title: "Monty Vecna Demo",
        description: "Demo of Monty Vecna by Thrasher.",
        engine: Game.V2,
    },
    {
        name: "ffr",
        title: "Final Fantasy Reprise",
        description: "Final Fantasy Reprise demo, by Sheng Long.",
        engine: Game.V2,
    },
    {
        name: "toilet",
        title: "Time Toilet",
        description: "48HoV shooter game by Zaratustra and Zathras.",
        engine: Game.V2,
    },
    {
        name: "slimesv2",
        title: "Attack of the Slimes",
        description: "48HoV puzzle game by Hatchet and Khadgar.",
        engine: Game.V2,
    },  	
     {
        name: "insomnia",
        title: "Insomnia",
        description: "A FF style battle system demo, by Shadow64",
        engine: Game.V2,
    },
    {
        name: "bman",
        title: "Bomberman Verge Demo",
        description: "A basic Bomberman game, made by Hatchet",
        engine: Game.V2,
    },

|];

let compare_game = (a: Game.game, b: Game.game) => {
    switch ((a.engine, b.engine)) {
        | (Game.V1, Game.V2) => -1
        | (Game.V2, Game.V1) => 1
        | (_, _) => {
            if (a.title < b.title) { -1 }
            else if (a.title > b.title) { 1 }
            else { 0 }
        }
    }
};

let game_with_name = (name) => {
    switch (name) {
    | None => None
    | Some(name) =>
        Array.fold_left(
            (a, game: Game.game) => {
                switch (a) {
                | Some(_) => a
                | None =>
                    if (game.name == name)
                        Some(game)
                    else
                        None
                }
            },
            None,
            games
        );
    }
};

[@react.component]
let make = (~initialGame: option(string)) => {
    let (curGame, setCurGame) = React.useState(() => game_with_name(initialGame));

    let onClick = (game, event) => {
        setCurGame(_ => Some(game));

        ignore(event);
    };

    let className = (game: Game.game) => {
        switch (game.engine) {
        | Game.V1 => "v1"
        | Game.V2 => "v2"
        }
    }

    let mkGame = (game: Game.game) => {
        <li className={"entry " ++ className(game)} onClick={onClick(game)}>
            {React.string(game.title)}
        </li>
    };

    Array.sort(compare_game, games);

    let allGames = Array.map(mkGame, games);

    let closeGame = (event) => {
        setCurGame(_ => None);
        ignore(event);
    };

    let gameComponent = switch (curGame) {
    | None => (<About />)
    | Some(game) => (<Game game={game} />)
    };

    <div className="app">
        <div className="game-list">
            <p>{React.string("Games:")}</p>
            <ul>
            {ReactDOMRe.createDOMElementVariadic(
                "div",
                allGames
            )}
            </ul>
            <br />
            {
                switch (curGame) {
                | None => (<span />)
                | Some(_) => (<a className="close-button" onClick={closeGame}>{React.string("Close")}</a>)
                }
            }
        </div>
        gameComponent
    </div>
};
