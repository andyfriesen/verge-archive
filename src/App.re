
let games: array(Game.game) = [|
    {
        name: "aol_chronicles",
        title: "The AOL Chronicles",
        description: "TODO!"
    },
    {
        name: "blimpo",
        title: "Blimpo Warrior",
        description: "The first completed V1 game, made by Spram!"
    },
    {
        name: "carnage",
        title: "Carnage Killing Spree",
        description: "A game based on Carnage from the SpiderMan comics. Made by CLIPs!"
    },    
    {
        name: "deicide",
        title: "Deicide",
        description: "Game made by torquemanda!"
    },        
    {
        name: "diver",
        title: "Diver Down",
        description: "Excellent game made by Grenideer!"
    },    
    {
        name: "galaxy",
        title: "Galaxy Destroyer Demo",
        description: "Game made by Tarkuss!"
    },
    {
        name: "phage",
        title: "PHAGE: Rhapsody",
        description: "Gregory 'GMW' Walpole made this full-blown RPG in 2001.  The story is darker than it looks.",
    },
    {
        name: "resdemo",
        title: "Resonance Demo",
        description: "Hatchet's first verge 'Game'. "
    },    
    {
        name: "sots",
        title: "Saga of the Stars",
        description: {j|Grue made this!  He misspelles "existence" like a million times.  Try it out and then point it out to him!|j}
    },
    {
        name: "sully",
        title: "The Sully Chronicles",
        description: "The original pack-in game.  Made by Hahn.  Kinda funny!"
    },
    {
        name: "tqfa",
        title: "The Quest for Atyre",
        description: "Written by Lady Starmage. More info to be added later!"
    },
    {
        name: "thorny",
        title: "Thorny's Quest",
        description: "A Verge compo game made by Jeff Brooks when he was merely 13!"
    },
    {
        name: "godzilla",
        title: "Wrath of Godzilla",
        description: "A Verge compo game made Hatchet, cywolf, Lady Starmage and Castles!"
    },
|];

[@react.component]
let make = () => {
    let (curGame, setCurGame) = React.useState(() => None);

    let onClick = (game, event) => {
        setCurGame(_ => Some(game));

        ignore(event);
    };

    let mkGame = (game: Game.game) =>
        <li className="entry" onClick={onClick(game)}>
            {ReasonReact.string(game.title)}
        </li>;
    let allGames = Array.map(mkGame, games);

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
        </div>
        gameComponent
    </div>
};
