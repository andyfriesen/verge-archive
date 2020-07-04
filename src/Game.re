
type engine = V1 | V2;

type game = {
    name: string,
    title: string,
    description: string,
    engine: engine
};

[@react.component]
let make = (~game) => {
    let url = switch (game.engine) {
    | V1 => "game.html?game=" ++ game.name
    | V2 => "game2.html?game=" ++ game.name
    };

    <>
        <div className="header-style" >
        <br />
        {ReasonReact.string(game.title)}
        </div>
        <iframe
            className="game-frame"
            src={url}
        />
        <div className="footer-style" >

        {ReasonReact.string(game.description)}
        </div>
    </>
};
