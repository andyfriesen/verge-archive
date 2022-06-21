
let v1games: array(Game.game) = [|
    {
        name: "aol_chronicles",
        title: "The AOL Chronicles",
        description: "TODO!",
        engine: Game.V1,
        vtype: "v1game",
    },
    {
        name: "blimpo",
        title: "Blimpo Warrior",
        description: "The first completed V1 game, made by Spram!",
        engine: Game.V1,
        vtype: "v1game",
    },
    {
        name: "carnage",
        title: "Carnage Killing Spree",
        description: "A game based on Carnage from the SpiderMan comics. Made by CLIPs!",
        engine: Game.V1,
        vtype: "v1game",
    },    
    {
        name: "deicide",
        title: "Deicide",
        description: "Game made by torquemanda!",
        engine: Game.V1,
        vtype: "v1game",
    },        
    {
        name: "diver",
        title: "Diver Down",
        description: "Excellent game made by Grenideer!",
        engine: Game.V1,
        vtype: "v1game",
    },    
    {
        name: "dreamseekers",
        title: "Dreamseekers",
        description: "Game made by Wyrdwad!",
        engine: Game.V1,
        vtype: "v1game",
    },    
    {
        name: "galaxy",
        title: "Galaxy Destroyer Demo",
        description: "Game made by Tarkuss!",
        engine: Game.V1,
        vtype: "v1game",
    },
    {
        name: "phage",
        title: "PHAGE: Rhapsody",
        description: "Gregory 'GMW' Walpole made this full-blown RPG in 2001.  The story is darker than it looks.",
        engine: Game.V1,
        vtype: "v1game",
    },
    {
        name: "resdemo",
        title: "Resonance Demo",
        description: "Hatchet's first Verge 'Game'. ",
        engine: Game.V1,
        vtype: "v1game",
    },    
    {
        name: "shooter",
        title: "Jeff's Shooter",
        description: "Jeff's first Verge Game!",
        engine: Game.V1,
        vtype: "v1game",
    },    
    {
        name: "sots",
        title: "Saga of the Stars",
        description: {j|Grue made this!  He misspelles "existence" like a million times.  Try it out and then point it out to him!|j},
        engine: Game.V1,
        vtype: "v1game",
    },
	{
        name: "tcw",
        title: "The Crumbling World",
        description: "Made by xBig_D, with a battle system and FMV!",
        engine: Game.V1,
        vtype: "v1game",
    },
    {
        name: "sully",
        title: "The Sully Chronicles",
        description: "The original pack-in game.  Made by Hahn.  Kinda funny!",
        engine: Game.V1,
        vtype: "v1game",
    },
    {
        name: "tqfa",
        title: "The Quest for Atyre",
        description: "Written by Lady Starmage. More info to be added later!",
        engine: Game.V1,
        vtype: "v1game",
    },
    {
        name: "thorny",
        title: "Thorny's Quest",
        description: "A Verge compo game made by Jeff Brooks when he was merely 13!",
        engine: Game.V1,
        vtype: "v1game",
    },
    {
        name: "godzilla",
        title: "Wrath of Godzilla",
        description: "A Verge compo game made Hatchet, cywolf, Lady Starmage and Castles!",
        engine: Game.V1,
        vtype: "v1game",
    },
    {
        name: "teddy",
        title: "Teddy Grahams",
        description: "A Final Fantasy inspired V1 game with a battle system, it seems!",
        engine: Game.V1,
        vtype: "v1game",
    },
	{
        name: "menolly",
        title: "Menolly",
        description: "V1 Game by Gurv. (French language)",
        engine: Game.V1, 
        vtype: "v1game",  
    },
	{
        name: "life",
        title: "Life",
        description: "V1 Game by Gurv & Azure Productions",
        engine: Game.V1, 
        vtype: "v1game",  
    },
	{
        name: "tactics_verge",
        title: "Tactics Verge",
        description: "V1 Game by Gurv",
        engine: Game.V1, 
        vtype: "v1game",  
    },

	{
        name: "vzelda",
        title: "Verge Zelda",
        description: "Verge Zelda demo by Bugen",
        engine: Game.V1,   
		vtype: "v1game",  		
    },
	{
        name: "adventure_quest",
        title: "Adventure Quest",
        description: "Roguelike game. Author unknown.",
        engine: Game.V1, 
        vtype: "v1game",  
    },   
	{
        name: "beyond_eternity",
        title: "Beyond Eternity: Ascension",
        description: "V1 game made by Lord Starmage",
        engine: Game.V1, 
        vtype: "v1game",  
    },   
|];    
let v2games: array(Game.game) = [|    
    {
        name: "zeux",
        title: "Zeux's World",
        description: "A full-featured 2D platformer.  Brought to you by Zaratustra!  Important warning: V2 support is still really unstable.  This may not work very well just yet.",
        engine: Game.V2,
        vtype: "v2game",
    },
    {
        name: "4four",
        title: "4four",
        description: "Another great platformer from Zaratustra!",
        engine: Game.V2,
        vtype: "v2game",
    },
    {
        name: "yolt",
        title: "You Only Live Thrice",
        description: "1st Jimmy Bong compo game by Eldritch / GameMaster Ben",
        engine: Game.V2,
        vtype: "v2game",
    },
    {
        name: "tgwmm",
        title: "The Guy Who Mugged Me",
        description: "2nd Jimmy Bong compo game by Eldritch / GameMaster Ben. ",
        engine: Game.V2,
        vtype: "v2game",
    },    
    {
        name: "mannux",
        title: "Mannux",
        description: "Original V2 version of Hatchet's classic Metroidvania.",
        engine: Game.V2,
        vtype: "v2game",
    },    
    {
        name: "rex",
        title: "Rex's Tale",
        description: "A zelda style compo game by Hatchet.",
        engine: Game.V2,
        vtype: "v2game",
    },
    {
        name: "shippu",
        title: "SHIPPU",
        description: "An original space shooter by Zaratustra with genetic spaceships! Doesn't fully work yet sadly..",
        engine: Game.V2,
        vtype: "v2game",
    },
    {
        name: "2001",
        title: "2001",
        description: "A compo game by Hatchet.",
        engine: Game.V2,
        vtype: "v2game",
    },
    {
        name: "rcr",
        title: "RCR Prototype",
        description: "A prototype of a River City Ransom game by Hatchet. Z/X/C for controls.",
        engine: Game.V2,
        vtype: "v2techdemo",
    },
    {
        name: "gbamap",
        title: "GBA Map editor",
        description: "A prototype of a map editor, intended to use to make GBA games (obviously didn't happen!) Made by Hatchet. ",
        engine: Game.V2,
        vtype: "v2techdemo",
    },
    {
        name: "casino",
        title: "Casino",
        description: "A 4 Colors of Verge compo entry. ",
        engine: Game.V2,
        vtype: "v2game",
    },
    {
        name: "babel",
        title: "Beyond Babel",
        description: "A Verge Olympics 2002 game, by choris and infey.",
        engine: Game.V2,
        vtype: "v2game",
    },
    {
        name: "fugue",
        title: "Fugue",
        description: "A pseudo 3d tunnel game by Zaratustra.",
        engine: Game.V2,
        vtype: "v2game",
    },
    {
        name: "dungbet2",
        title: "Dungeon Crawler Beta",
        description: "A clone of Dungeon Master by Hatchet.",
        engine: Game.V2,
        vtype: "v2techdemo",        
    },
    {
        name: "mvbs",
        title: "Monty Vecna Battle System Demo",
        description: "A battle system for Monty Vecna by Thrasher.",
        engine: Game.V2,        
        vtype: "v2techdemo",
    },
    {
        name: "mv",
        title: "Monty Vecna Demo",
        description: "Demo of Monty Vecna by Thrasher.",
        engine: Game.V2,
        vtype: "v2game",        
    },
    {
        name: "ffr",
        title: "Final Fantasy Reprise",
        description: "Final Fantasy Reprise demo, by Sheng Long.",
        engine: Game.V2, 
        vtype: "v2game",  
    },
    {
        name: "toilet",
        title: "Time Toilet",
        description: "48HoV shooter game by Zaratustra and Zathras.",
        engine: Game.V2, 
        vtype: "v2game",  
    },    
 
    
|];

let games = Belt.Array.concat(v1games, v2games);

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

    let mkv1Game = (game: Game.game) =>
        <li className="entry" onClick={onClick(game)} style=ReactDOM.Style.make(~color="#a8cca0", ())>
            {React.string(game.title)}
        </li>;

    let mkv2Game = (game: Game.game) =>
        <li className="entry" onClick={onClick(game)} style=ReactDOM.Style.make(~color="#a8a0cc", ())>
            {React.string(game.title)}
        </li>;        
        
    let allGames = Belt.Array.concat(Array.map(mkv1Game, v1games), Array.map(mkv2Game, v2games));

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
