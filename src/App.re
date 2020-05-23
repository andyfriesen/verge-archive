
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

    <>
        <div className="game-list">
            {ReactDOMRe.createDOMElementVariadic(
                "div",
                allGames
            )}
        </div>
        {gameComponent}
    </>
};
