
let games: array(Game.game) = [|
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
        description: "TODO: Write something about the game and its author here!"
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
