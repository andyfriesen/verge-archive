
let games: array(Game.game) = [|
    {name: "sots"},
    {name: "sully"},
    {name: "tqfa"},
|];

[@react.component]
let make = () => {
    let (curGame, setCurGame) = React.useState(() => None);

    let onClick = (game, event) => {
        setCurGame(_ => Some(game));

        ignore(event);
    };

    let mkGame = (game: Game.game) =>
        <div className="entry" onClick={onClick(game)}>
            {ReasonReact.string(game.name)}
        </div>;
    let allGames = Array.map(mkGame, games);

    let gameComponent = switch (curGame) {
    | None =>       (<div />)
    | Some(game) => (<Game game={game} />)
    };

    let style = ReactDOMRe.Style.make(
        ~position="absolute",
        ~display="flex",
        ~flexDirection="row",
        ~left="0",
        ~right="0",
        ~top="0",
        ~bottom="0",
        ()
    );

    <div className="app" style={style}>
        <div className="game-list">
            {ReactDOMRe.createDOMElementVariadic(
                "div",
                allGames
            )}
        </div>
        gameComponent
    </div>
};
