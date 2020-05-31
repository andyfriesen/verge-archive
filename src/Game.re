
type game = {
    name: string,
    title: string,
    description: string
};

[@react.component]
let make = (~game) => {
    let url = "game.html?game=" ++ game.name;
    <iframe
        className="game-frame"
        src={url}
    />
};
