
let games = [|
    "sots",
    "sully",
    "tqfa",
|];

[@react.component]
let make = () => {
    let mkGame = (name) => <Game name={name} />;
    let allGames = Array.map(mkGame, games);
    <div className="game-list">
        {ReactDOMRe.createDOMElementVariadic(
            "div",
            allGames
        )}
    </div>
};
