
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
        name: "galaxy",
        title: "Galaxy Destroyer Demo",
        description: "Game made by Tarkuss!",
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
        description: "Hatchet's first verge 'Game'. ",
        engine: Game.V1,
    },    
    {
        name: "sots",
        title: "Saga of the Stars",
        description: {j|Grue made this!  He misspelles "existence" like a million times.  Try it out and then point it out to him!|j},
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
        name: "zeux",
        title: "Zeux's World",
        description: "A full-featured 2D platformer.  Brought to you by Zaratustra!  Important warning: V2 support is still really unstable.  This may not work very well just yet.",
        engine: Game.V2,
    },
    {
        name: "4four",
        title: "4four",
        description: "Another great platformer from Zarathustra!",
        engine: Game.V2
    },
    {
        name: "yolt",
        title: "You Only Live Thrice",
        description: "A classic Jimmy Bong compo game by Eldritch / GameMaster Ben",
        engine: Game.V2
    },
        {
        name: "teddy",
        title: "Teddy Grahams",
        description: "A V1 game with a battle system, it seems!",
        engine: Game.V1
    },
    {
        name: "mannux",
        title: "Mannux",
        description: "Original V2 verion of Hatchet's classic Metroidvania.",
        engine: Game.V2
    },    
    {
        name: "rex",
        title: "Rex's Tale",
        description: "A zelda style compo game by Hatchet.",
        engine: Game.V2
    },
|];

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

    let mkGame = (game: Game.game) =>
        <li className="entry" onClick={onClick(game)}>
            {ReasonReact.string(game.title)}
        </li>;
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
            <p>{ReasonReact.string("Games:")}</p>
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
                | Some(_) => (<a className="close-button" onClick={closeGame}>{ReasonReact.string("Close")}</a>)
                }
            }
        </div>
        gameComponent
    </div>
};
